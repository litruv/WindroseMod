# Cook, pack, install to LogicMods, optionally launch Windrose (single instance).
param(
    [switch]$Clean,
    [switch]$NoLaunch
)

$ErrorActionPreference = "Stop"

$launchPath = $MyInvocation.PSCommandPath
if (-not $launchPath) { $launchPath = $MyInvocation.MyCommand.Path }
if (-not $launchPath) { throw "Cannot determine script path. Run: powershell -File BuildAndLaunch-WindroseMod.ps1" }

$scriptDir = (Resolve-Path -LiteralPath (Split-Path -Parent $launchPath)).Path
. (Join-Path $scriptDir "Get-WindroseModConfig.ps1")

$ProjectRoot = Resolve-WindroseModProjectRoot -RootHint $scriptDir
$cfg = Get-WindroseModConfig -ProjectRoot $ProjectRoot
$packScript = Join-Path $ProjectRoot "Pack-WindroseMod.ps1"

if (-not (Test-Path -LiteralPath $packScript)) {
    throw "Pack script not found: $packScript"
}

Write-Host "=== Building mod pak (pak: $($cfg.PakBaseName)) ===" -ForegroundColor Cyan

$packParams = @{
    InstallToLogicMods = $true
}
if ($Clean) { $packParams.Clean = $true }

try {
    & $packScript @packParams
    if ($LASTEXITCODE -and $LASTEXITCODE -ne 0) {
        throw "Pack-WindroseMod.ps1 failed with exit code $LASTEXITCODE"
    }
}
catch {
    Write-Host ""
    Write-Host "BUILD FAILED:" -ForegroundColor Red
    Write-Host $_.Exception.Message -ForegroundColor Red
    if ($_.ScriptStackTrace) {
        Write-Host $_.ScriptStackTrace -ForegroundColor DarkGray
    }
    exit 1
}

Write-Host ""
Write-Host "Build and install finished." -ForegroundColor Green

if ($NoLaunch) {
    Write-Host "Skipped game launch (-NoLaunch)." -ForegroundColor DarkGray
    exit 0
}

& (Join-Path $scriptDir "Launch-WindroseGame.ps1") -ProjectRoot $scriptDir
exit 0
