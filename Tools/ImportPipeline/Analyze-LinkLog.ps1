param([string]$LogPath)

$log = Get-Content -Path $LogPath
$replRx = 'GetLifetimeReplicatedProps@(\w+)@@'
$repl = [System.Collections.Generic.HashSet[string]]::new()
foreach ($line in $log) {
    if ($line -match $replRx) { [void]$repl.Add($Matches[1]) }
}
Write-Host "GetLifetimeReplicatedProps classes: $($repl.Count)"
$repl | Sort-Object

$taskRx = 'OnGameplayTaskDeactivated@(\w+)@@'
$tasks = [System.Collections.Generic.HashSet[string]]::new()
foreach ($line in $log) {
    if ($line -match $taskRx) { [void]$tasks.Add($Matches[1]) }
}
Write-Host "`nOnGameplayTaskDeactivated classes: $($tasks.Count)"
$tasks | Sort-Object
