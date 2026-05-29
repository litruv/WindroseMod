param(
    [string]$PrivateDir = ""
)


. (Join-Path $PSScriptRoot "ProjectRoot.ps1")
if (-not $PrivateDir) { $PrivateDir = Get-WindroseModR5PrivateDir }
$stubRx = '(?ms)\r?\nvoid \w+::OnGameplayTaskDeactivated\(UGameplayTask& Task\)\r?\n\{\r?\n    Super::OnGameplayTaskDeactivated\(Task\);\r?\n\}\r?\n'
$removed = 0
foreach ($cpp in Get-ChildItem -Path $PrivateDir -Filter *.cpp -File) {
    $text = Get-Content -Path $cpp.FullName -Raw
    if ($text -notmatch 'OnGameplayTaskDeactivated') { continue }
    $newText = [regex]::Replace($text, $stubRx, "`r`n")
    if ($newText -ne $text) {
        Set-Content -Path $cpp.FullName -Value $newText -NoNewline
        $removed++
    }
}
Write-Host "Removed OnGameplayTaskDeactivated stubs from $removed files."
