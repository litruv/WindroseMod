param(
    [string]$LogPath = "",
    [string]$ModuleRoot = ""
)


. (Join-Path $PSScriptRoot "ProjectRoot.ps1")
if (-not $ModuleRoot) { $ModuleRoot = Get-WindroseModR5ModuleRoot }
if (-not $LogPath) { $LogPath = Get-WindroseModImportLog 'build-continue31.log' }
$publicDir = Join-Path $ModuleRoot "Public"
$privateDir = Join-Path $ModuleRoot "Private"
$symbolRx = 'unresolved external symbol "([^"]+)"'
$methodRx = '(\w+)::(\w+)\('

$headers = Get-ChildItem -Path $publicDir -Filter *.h -File
$headerByClass = @{}
$uclassHeaderRx = 'UCLASS\s*\((?:[^()]|\([^()]*\))*\)\s*\r?\nclass\s+(?:\w+_API\s+)?(\w+)'
foreach ($h in $headers) {
    $text = Get-Content -Path $h.FullName -Raw
    foreach ($m in [regex]::Matches($text, $uclassHeaderRx)) {
        $headerByClass[$m.Groups[1].Value] = $h
    }
}

$wanted = @{}
foreach ($line in (Get-Content -Path $LogPath)) {
    if ($line -notmatch 'LNK2019') { continue }
    $sm = [regex]::Match($line, $symbolRx)
    if (-not $sm.Success) { continue }
    $sym = $sm.Groups[1].Value
    if ($sym -like '*__imp_*') { continue }
    if ($sym -like '*??0*' -or $sym -match '::\w+::~\w+\(') { continue }
    if ($sym -like '*StaticRegisterNatives*') { continue }
    if ($sym -like '*GetLifetimeReplicatedProps*') { continue }

    $mm = [regex]::Match($sym, $methodRx)
    if (-not $mm.Success) { continue }
    $className = $mm.Groups[1].Value
    $methodName = $mm.Groups[2].Value
    if ($methodName -eq 'operator') { continue }
    $wanted["$className::$methodName"] = @{ Class = $className; Method = $methodName }
}

$added = 0
$skipped = 0

foreach ($key in $wanted.Keys) {
    $className = $wanted[$key].Class
    $methodName = $wanted[$key].Method
    if (-not $headerByClass.ContainsKey($className)) { $skipped++; continue }

    $header = $headerByClass[$className]
    $text = Get-Content -Path $header.FullName -Raw
    $declRx = "(?ms)((?:(?:public|private|protected):\s*)?(?:UFUNCTION\s*\((?:[^()]|\([^()]*\))*\)\s*)?(?:virtual\s+)?(?:static\s+)?(?:inline\s+)?[\w:<>,\s\*&]+\s+$methodName\s*\([^;]*\))\s*(const\s*)?(?:override\s*)?;"
    $dm = [regex]::Match($text, $declRx)
    if (-not $dm.Success) { $skipped++; continue }

    $decl = ($dm.Groups[1].Value -replace '\s+', ' ').Trim()
    $decl = $decl -replace '^(?:public|private|protected):\s*', ''
    $decl = $decl -replace '^(?:UFUNCTION\s*\((?:[^()]|\([^()]*\))*\)\s*)+', ''
    $decl = $decl -replace '^static\s+', ''
    $constSuffix = if ($dm.Groups[2].Success) { ' const' } else { '' }
    $implSig = $decl -replace ';$', ''
    if ($implSig -notmatch "\b${className}::") {
        $implSig = [regex]::Replace($implSig, "\b$methodName\s*\(", "${className}::${methodName}(")
    }
    $implSig = "${implSig}${constSuffix}"

    $cppPath = Join-Path $privateDir ($header.BaseName + ".cpp")
    if (-not (Test-Path $cppPath)) {
        $cpp = "#include `"$($header.BaseName).h`"`r`n"
    } else {
        $cpp = Get-Content -Path $cppPath -Raw
    }

    if ($cpp -match [regex]::Escape("$className::$methodName")) { continue }

    $retLine = ''
    if ($implSig -notmatch '^\s*void\s+') {
        if ($implSig -match '\*\s*[A-Z][A-Za-z0-9_]*::') { $retLine = "    return nullptr;`r`n" }
        elseif ($implSig -match '^\s*bool\s+') { $retLine = "    return false;`r`n" }
        elseif ($implSig -match '^\s*(int|int8|int16|int32|int64|uint8|uint16|uint32|uint64)\s+') { $retLine = "    return 0;`r`n" }
        elseif ($implSig -match '^\s*float\s+') { $retLine = "    return 0.f;`r`n" }
        else { $retLine = "    return {};`r`n" }
    }
    $cpp += "`r`n$implSig`r`n{`r`n$retLine}`r`n"
    Set-Content -Path $cppPath -Value $cpp -NoNewline
    $added++
}

Write-Host "Added $added method stubs ($skipped skipped - no header/declaration)."
