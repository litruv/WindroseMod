param(
    [string]$ModuleRoot = ""
)


. (Join-Path $PSScriptRoot "ProjectRoot.ps1")
if (-not $ModuleRoot) { $ModuleRoot = Get-WindroseModR5ModuleRoot }
$publicDir = Join-Path $ModuleRoot "Public"
$privateDir = Join-Path $ModuleRoot "Private"
if (-not (Test-Path $privateDir)) {
    New-Item -ItemType Directory -Path $privateDir | Out-Null
}

$structRx = 'USTRUCT\s*\((?:[^()]|\([^()]*\))*\)\s*\r?\nstruct\s+(?:\w+_API\s+)?(\w+)'
$created = 0
$updated = 0

foreach ($header in (Get-ChildItem -Path $publicDir -Filter *.h -File)) {
    $text = Get-Content -Path $header.FullName -Raw
    $matches = [regex]::Matches($text, $structRx)
    if ($matches.Count -eq 0) { continue }

    $cppPath = Join-Path $privateDir ($header.BaseName + ".cpp")
    $cpp = if (Test-Path $cppPath) { Get-Content -Path $cppPath -Raw } else { "" }

    if ($cpp -notmatch [regex]::Escape("#include `"$($header.BaseName).h`"")) {
        $cpp = "#include `"$($header.BaseName).h`"`r`n" + $cpp
    }

    $addedAny = $false
    foreach ($m in $matches) {
        $structName = $m.Groups[1].Value
        $ctor = "$structName::$structName()"
        if ($cpp -match [regex]::Escape($ctor)) { continue }

        $block = "`r`n$structName::$structName()`r`n{`r`n}`r`n"
        $cpp += $block
        $addedAny = $true
    }

    if ($addedAny) {
        Set-Content -Path $cppPath -Value $cpp -NoNewline
        if (Test-Path $cppPath) { $updated++ } else { $created++ }
    }
}

Write-Host "USTRUCT constructor stubs updated in $updated header cpp files."
