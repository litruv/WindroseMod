# Launch Windrose once (avoids Steam + direct-exe double start).
param(
    [string]$ProjectRoot = ""
)

$ErrorActionPreference = "Stop"

if (-not $ProjectRoot) {
    $selfPath = $MyInvocation.PSCommandPath
    if (-not $selfPath) { $selfPath = $MyInvocation.MyCommand.Path }
    if ($selfPath) {
        $ProjectRoot = Split-Path -Parent $selfPath
    }
}

if (-not $ProjectRoot) {
    throw "Cannot determine project root. Run from WindroseMod or pass -ProjectRoot."
}

. (Join-Path $ProjectRoot "Get-WindroseModConfig.ps1")
$ProjectRoot = Resolve-WindroseModProjectRoot -RootHint $ProjectRoot

. (Join-Path $ProjectRoot "Resolve-WindroseGameExe.ps1")

$cfg = Get-WindroseModConfig -ProjectRoot $ProjectRoot
$gameExe = Resolve-WindroseGameExe -ProjectRoot $ProjectRoot -GameExe $cfg.GameExe
$gameDir = Split-Path -Parent $gameExe
$binDir = Split-Path -Parent $gameExe
$processName = [System.IO.Path]::GetFileNameWithoutExtension($gameExe)

$running = @(Get-Process -Name $processName -ErrorAction SilentlyContinue)
if ($running.Count -gt 0) {
    Write-Host "Windrose is already running ($($running.Count) process(es)). Not starting another copy." -ForegroundColor Yellow
    return
}

$useSteam = $cfg.LaunchViaSteam -match '^(1|true|yes)$'
$steamExe = Join-Path ${env:ProgramFiles(x86)} "Steam\steam.exe"
if (-not (Test-Path -LiteralPath $steamExe)) {
    $steamExe = Join-Path $env:ProgramFiles "Steam\steam.exe"
}

if ($useSteam -and (Test-Path -LiteralPath $steamExe) -and $cfg.SteamAppId) {
    Write-Host "Launching via Steam (app $($cfg.SteamAppId))..." -ForegroundColor Cyan
    Start-Process -FilePath $steamExe -ArgumentList "-applaunch", $cfg.SteamAppId
}
else {
    if ($useSteam) {
        Write-Host "Steam launch requested but Steam.exe not found; launching exe directly." -ForegroundColor Yellow
    }
    Write-Host "Launching: $gameExe" -ForegroundColor Cyan
    Start-Process -FilePath $gameExe -WorkingDirectory $gameDir
}

function Get-Ue4ssLogPaths {
    param([string]$BinariesDir)
    @(
        (Join-Path $BinariesDir "ue4ss\UE4SS.log")
        (Join-Path $BinariesDir "UE4SS.log")
    ) | Where-Object { Test-Path -LiteralPath $_ }
}

$logs = Get-Ue4ssLogPaths -BinariesDir $binDir
if ($logs.Count -gt 0) {
    Write-Host ""
    Write-Host "UE4SS log(s):" -ForegroundColor DarkGray
    foreach ($log in $logs) { Write-Host "  $log" -ForegroundColor DarkGray }
}
else {
    Write-Host ""
    Write-Host "UE4SS log (after game starts): $binDir\ue4ss\UE4SS.log" -ForegroundColor DarkGray
}

Write-Host "Check BPModLoaderMod lines for: Loading mod: $($cfg.PakBaseName)" -ForegroundColor DarkGray
