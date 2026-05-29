param(
    [string]$PrivateDir = ""
)


. (Join-Path $PSScriptRoot "ProjectRoot.ps1")
if (-not $PrivateDir) { $PrivateDir = Get-WindroseModR5PrivateDir }
$fixed = 0
foreach ($file in (Get-ChildItem -Path $PrivateDir -Filter *.cpp -File)) {
    $cpp = Get-Content -Path $file.FullName -Raw
    if ($cpp -notmatch '::\w+\(const FObjectInitializer& ObjectInitializer\)') { continue }
    if ($cpp -match ': Super\(ObjectInitializer\)') { continue }

    $new = [regex]::Replace(
        $cpp,
        '(\w+::\w+\(const FObjectInitializer& ObjectInitializer\))\s*\r?\n\s*\{',
        "`$1`r`n    : Super(ObjectInitializer)`r`n{"
    )
    if ($new -eq $cpp) { continue }
    Set-Content -Path $file.FullName -Value $new -NoNewline
    $fixed++
}

Write-Host "Added Super(ObjectInitializer) to $fixed FOI constructors."
