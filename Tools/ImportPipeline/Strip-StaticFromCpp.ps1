param(
    [string]$PrivateDir = ""
)


. (Join-Path $PSScriptRoot "ProjectRoot.ps1")
if (-not $PrivateDir) { $PrivateDir = Get-WindroseModR5PrivateDir }
$fixed = 0
foreach ($file in (Get-ChildItem -Path $PrivateDir -Filter *.cpp -File)) {
    $cpp = Get-Content -Path $file.FullName -Raw
    $new = [regex]::Replace($cpp, '(?m)^static\s+', '')
    if ($new -eq $cpp) { continue }
    Set-Content -Path $file.FullName -Value $new -NoNewline
    $fixed++
}

Write-Host "Stripped static from $fixed cpp files."
