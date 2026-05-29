param(
    [string]$PrivateDir = ""
)


. (Join-Path $PSScriptRoot "ProjectRoot.ps1")
if (-not $PrivateDir) { $PrivateDir = Get-WindroseModR5PrivateDir }
$ufuncRx = '(?m)^(?:UFUNCTION\s*\((?:[^()]|\([^()]*\))*\)\s*)+'
$staticRx = '(?m)^static\s+'
$fixed = 0

foreach ($file in (Get-ChildItem -Path $PrivateDir -Filter *.cpp -File)) {
    $cpp = Get-Content -Path $file.FullName -Raw
    $new = [regex]::Replace($cpp, $ufuncRx, '')
    $new = [regex]::Replace($new, $staticRx, '')
    if ($new -eq $cpp) { continue }
    Set-Content -Path $file.FullName -Value $new -NoNewline
    $fixed++
}

Write-Host "Cleaned UFUNCTION/static prefixes in $fixed cpp files."
