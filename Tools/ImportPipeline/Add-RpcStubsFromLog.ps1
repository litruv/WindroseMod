param(
    [string]$LogPath = "",
    [string]$ModuleRoot = ""
)


. (Join-Path $PSScriptRoot "ProjectRoot.ps1")
if (-not $ModuleRoot) { $ModuleRoot = Get-WindroseModR5ModuleRoot }
if (-not $LogPath) { $LogPath = Get-WindroseModImportLog 'build-continue54.log' }
$publicDir = Join-Path $ModuleRoot "Public"
$privateDir = Join-Path $ModuleRoot "Private"
$symbolRx = 'unresolved external symbol "([^"]+)"'
$implRx = '(\w+)::(\w+_Implementation)\('

$wanted = @{}
foreach ($line in Get-Content -Path $LogPath) {
    if ($line -notmatch 'LNK2001|LNK2019') { continue }
    $sm = [regex]::Match($line, $symbolRx)
    if (-not $sm.Success) { continue }
    $sym = $sm.Groups[1].Value
    $mm = [regex]::Match($sym, $implRx)
    if (-not $mm.Success) { continue }
    $wanted["$($mm.Groups[1].Value)::$($mm.Groups[2].Value)"] = @{
        Class = $mm.Groups[1].Value
        Method = $mm.Groups[2].Value
    }
}

$headerByClass = @{}
$uclassHeaderRx = 'UCLASS\s*\((?:[^()]|\([^()]*\))*\)\s*\r?\nclass\s+(?:\w+_API\s+)?(\w+)'
foreach ($h in Get-ChildItem -Path $publicDir -Filter *.h -File) {
    $text = Get-Content -Path $h.FullName -Raw
    foreach ($m in [regex]::Matches($text, $uclassHeaderRx)) {
        $headerByClass[$m.Groups[1].Value] = $h
    }
}

$added = 0
foreach ($key in $wanted.Keys) {
    $className = $wanted[$key].Class
    $methodName = $wanted[$key].Method
    if (-not $headerByClass.ContainsKey($className)) { continue }

    $header = $headerByClass[$className]
    $text = Get-Content -Path $header.FullName -Raw
    $declName = $methodName -replace '_Implementation$', ''
    $declRx = "(?ms)((?:(?:public|private|protected):\s*)?(?:UFUNCTION\s*\((?:[^()]|\([^()]*\))*\)\s*)?(?:virtual\s+)?(?:static\s+)?(?:inline\s+)?[\w:<>,\s\*&]+\s+$([regex]::Escape($declName))\s*\([^;]*\))\s*(const\s*)?(?:override\s*)?;"
    $dm = [regex]::Match($text, $declRx)
    if (-not $dm.Success) { continue }

    $decl = ($dm.Groups[1].Value -replace '\s+', ' ').Trim()
    $decl = $decl -replace '^(?:public|private|protected):\s*', ''
    $decl = $decl -replace '^(?:UFUNCTION\s*\((?:[^()]|\([^()]*\))*\)\s*)+', ''
    $decl = $decl -replace '^virtual\s+', ''
    $constSuffix = if ($dm.Groups[3].Success) { ' const' } else { '' }
    $implSig = $decl -replace ';$', ''
    if ($implSig -notmatch "\b${className}::") {
        $implSig = [regex]::Replace($implSig, "\b$([regex]::Escape($declName))\s*\(", "${className}::${methodName}(")
    }
    $implSig = "${implSig}${constSuffix}"

    $cppPath = Join-Path $privateDir ($header.BaseName + ".cpp")
    $cpp = if (Test-Path $cppPath) { Get-Content -Path $cppPath -Raw } else { "#include `"$($header.BaseName).h`"`r`n" }
    if ($cpp -match [regex]::Escape("$className::$methodName")) { continue }

    $retLine = ''
    if ($implSig -match '^\s*void\s+') { $retLine = '' }
    elseif ($implSig -match '\*\s*[A-Z]') { $retLine = "    return nullptr;`r`n" }
    elseif ($implSig -match '^\s*bool\s+') { $retLine = "    return false;`r`n" }
    else { $retLine = "    return {};`r`n" }

    $cpp = $cpp.TrimEnd() + "`r`n`r`n$implSig`r`n{`r`n$retLine}`r`n"
    Set-Content -Path $cppPath -Value $cpp -NoNewline
    $added++
}

Write-Host "Added $added RPC _Implementation stubs."
