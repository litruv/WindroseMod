param(
    [string]$PrivateDir = ""
)


. (Join-Path $PSScriptRoot "ProjectRoot.ps1")
if (-not $PrivateDir) { $PrivateDir = Get-WindroseModR5PrivateDir }
$methodBlockRx = '(?ms)^(?<sig>[ \t]*(?:static\s+)?(?:public|private|protected):\s*)?(?<body>(?:[\w:<>,\s\*&]+\s+)?[A-Z][A-Za-z0-9_]*::[A-Za-z0-9_]+\([^;{]*\)(?:\s*const)?\s*\r?\n\{\r?\n)(?<close>\})'
$fixed = 0

function Get-ReturnStatement {
    param([string]$Sig)
    $s = ($Sig -replace '\s+', ' ').Trim()
    if ($s -match '^\s*void\s+') { return $null }
    if ($s -match '^\s*[\w:<>,\s\*&]+\s+[A-Z][A-Za-z0-9_]*::[~]?[A-Za-z0-9_]+\s*\(') {
        $ret = ($s -replace '\s+[A-Z][A-Za-z0-9_]*::.*$', '').Trim()
        if ($ret -match '\*$') { return '    return nullptr;' }
        if ($ret -eq 'bool') { return '    return false;' }
        if ($ret -match '^(int|int8|int16|int32|int64|uint8|uint16|uint32|uint64)$') { return '    return 0;' }
        if ($ret -eq 'float') { return '    return 0.f;' }
        if ($ret -eq 'double') { return '    return 0.0;' }
    }
    return '    return {};'
}

foreach ($file in (Get-ChildItem -Path $PrivateDir -Filter *.cpp -File)) {
    $cpp = Get-Content -Path $file.FullName -Raw
    $orig = $cpp

    $cpp = [regex]::Replace($cpp, '(?m)^static\s+', '')
    $cpp = [regex]::Replace($cpp, '(?m)^[ \t]*(?:public|private|protected):\s*', '')


. (Join-Path $PSScriptRoot "ProjectRoot.ps1")
if (-not $PrivateDir) { $PrivateDir = Get-WindroseModR5PrivateDir }
    $cpp = [regex]::Replace($cpp, '(?ms)(^[\t ]*(?:[\w:<>,\s\*&]+\s+)?([A-Z][A-Za-z0-9_]*)::([A-Za-z0-9_]+)\([^;{]*\)(?:\s*const)?\s*\r?\n\{\r?\n)(\})', {
        param($m)
        if ($m.Groups[2].Value -eq $m.Groups[3].Value) {
            return $m.Groups[1].Value + $m.Groups[4].Value
        }
        if ($m.Groups[3].Value -like '~*') {
            return $m.Groups[1].Value + $m.Groups[4].Value
        }
        $sig = $m.Value
        if ($sig -match '\bvoid\s+[A-Z][A-Za-z0-9_]*::') {
            return $m.Groups[1].Value + $m.Groups[4].Value
        }
        $ret = Get-ReturnStatement -Sig $sig
        if (-not $ret) {
            $body = $m.Groups[1].Value + $m.Groups[4].Value
            $body = [regex]::Replace($body, '(?ms)\{\r?\n\s*return[^;]+;\s*\r?\n\}', "{`r`n}")
            return $body
        }
        "$($m.Groups[1].Value)$ret`r`n$($m.Groups[4].Value)"
    })


. (Join-Path $PSScriptRoot "ProjectRoot.ps1")
if (-not $PrivateDir) { $PrivateDir = Get-WindroseModR5PrivateDir }
    # Strip erroneous returns accidentally added to constructors.
    $cpp = [regex]::Replace(
        $cpp,
        '(?ms)(^[\t ]*([A-Z][A-Za-z0-9_]*)::\2\([^;{]*\)(?:[^\{]*)?\{\r?\n)\s*return[^;]+;\s*\r?\n',
        '$1'
    )


. (Join-Path $PSScriptRoot "ProjectRoot.ps1")
if (-not $PrivateDir) { $PrivateDir = Get-WindroseModR5PrivateDir }
    if ($cpp -ne $orig) {
        Set-Content -Path $file.FullName -Value $cpp -NoNewline
        $fixed++
    }
}

Write-Host "Normalized method stubs in $fixed cpp files."
