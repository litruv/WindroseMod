param(
    [string]$PrivateDir = ""
)


. (Join-Path $PSScriptRoot "ProjectRoot.ps1")
if (-not $PrivateDir) { $PrivateDir = Get-WindroseModR5PrivateDir }
$rx = '(?ms)(^[\t ]*([A-Z][A-Za-z0-9_]*)::\2\([^;{]*\)(?:[^\{]*)?\{\r?\n)\s*return[^;]+;\s*\r?\n'
$fixed = 0

foreach ($file in (Get-ChildItem -Path $PrivateDir -Filter *.cpp -File)) {
    $cpp = Get-Content -Path $file.FullName -Raw
    $new = [regex]::Replace($cpp, $rx, '$1')
    if ($new -eq $cpp) { continue }
    Set-Content -Path $file.FullName -Value $new -NoNewline
    $fixed++
}

Write-Host "Removed ctor return statements in $fixed files."
