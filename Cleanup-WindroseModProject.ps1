# Remove clutter not needed for the Windrose mod loop (edit -> Pack-WindroseMod -> LogicMods).
# Never touches Saved/ or Intermediate/.

param(
    [string]$ProjectRoot = $PSScriptRoot,
    [switch]$Clean,
    [switch]$WhatIf,
    [switch]$IncludeDerivedDataCache,
    [switch]$IncludeBinaries
)

$ErrorActionPreference = "Stop"
$ProjectRoot = (Resolve-Path $ProjectRoot).Path

$keepRootFiles = @(
    "Pack-WindroseMod.ps1",
    "BuildAndLaunch-WindroseMod.bat",
    "Cleanup-WindroseModProject.ps1",
    "Cleanup-WindroseModProject.bat",
    "R5.uproject",
    "R5.sln",
    ".vsconfig"
)

$keepDirs = @("Config", "Content", "Saved", "Intermediate", "Plugins", "Source", "Binaries")

function Get-DirSizeMB([string]$Path) {
    if (-not (Test-Path $Path)) { return 0 }
    $sum = (Get-ChildItem $Path -Recurse -File -Force -ErrorAction SilentlyContinue | Measure-Object Length -Sum).Sum
    if (-not $sum) { return 0 }
    return [math]::Round($sum / 1MB, 1)
}

function Remove-Tree([string]$Path, [string]$Reason) {
    if (-not (Test-Path $Path)) { return }
    $mb = Get-DirSizeMB $Path
    Write-Host ("  {0,-8} MB  {1}" -f $mb, $Path)
    if ($Reason) { Write-Host "           $Reason" -ForegroundColor DarkGray }
    if ($WhatIf) { return }
    Remove-Item -LiteralPath $Path -Recurse -Force -ErrorAction Stop
}

function Remove-FileItem([string]$Path, [string]$Reason) {
    if (-not (Test-Path $Path)) { return }
    $mb = [math]::Round((Get-Item $Path).Length / 1MB, 1)
    Write-Host ("  {0,-8} MB  {1}" -f $mb, $Path)
    if ($Reason) { Write-Host "           $Reason" -ForegroundColor DarkGray }
    if ($WhatIf) { return }
    Remove-Item -LiteralPath $Path -Force -ErrorAction Stop
}

Write-Host "=== Windrose mod project cleanup ===" -ForegroundColor Cyan
Write-Host "Project: $ProjectRoot"
Write-Host "Keeps:   Saved/, Intermediate/, Content/, Config/, Plugins/, Source/, Binaries/"
Write-Host "Keeps:   Pack-WindroseMod.ps1, BuildAndLaunch-WindroseMod.bat"
if ($WhatIf) { Write-Host "Mode:    WhatIf (no deletes)" -ForegroundColor Yellow }
Write-Host ""

$archiveDir = Join-Path $ProjectRoot "Tools\ImportPipeline"
if (-not $WhatIf -and $Clean) {
    New-Item -ItemType Directory -Force -Path $archiveDir | Out-Null
}

Write-Host "Packaging / build output:" -ForegroundColor Cyan
Remove-Tree (Join-Path $ProjectRoot "Releases\Win64") "Full game archive (not used for LogicMods mod)"
Remove-Tree (Join-Path $ProjectRoot "Releases\ModPak\Windows") "Old UAT Windows staging"
Remove-Tree (Join-Path $ProjectRoot "Releases\ModPakIo") "Experimental IoStore full staging"
Remove-Tree (Join-Path $ProjectRoot "Build") "VS build artifacts (regenerated on compile)"

Write-Host ""
Write-Host "IDE / logs:" -ForegroundColor Cyan
Remove-Tree (Join-Path $ProjectRoot ".vs") "Visual Studio cache (safe; reopens on next build)"
Remove-Tree (Join-Path $ProjectRoot "ImportLogs") "Header-dump import + build logs"

Write-Host ""
Write-Host "Import pipeline scripts (move to Tools\ImportPipeline):" -ForegroundColor Cyan
Get-ChildItem $ProjectRoot -File -Filter "*.ps1" | Where-Object { $keepRootFiles -notcontains $_.Name } | ForEach-Object {
    $dest = Join-Path $archiveDir $_.Name
    $mb = [math]::Round($_.Length / 1KB, 1)
    Write-Host ("  {0,-8} KB  {1}" -f $mb, $_.Name)
    if ($WhatIf) { return }
    if ($Clean) {
        Move-Item -LiteralPath $_.FullName -Destination $dest -Force
    }
}

Get-ChildItem $ProjectRoot -File -Filter "*.py" | ForEach-Object {
    $dest = Join-Path $archiveDir $_.Name
    Write-Host ("  {0,8} B  {1}" -f $_.Length, $_.Name)
    if ($WhatIf) { return }
    if ($Clean) {
        Move-Item -LiteralPath $_.FullName -Destination $dest -Force
    }
}

Write-Host ""
Write-Host "Optional (pass -Clean to apply; use switches to include):" -ForegroundColor DarkGray
Write-Host "  -IncludeDerivedDataCache   DerivedDataCache/ (~few GB, slow to rebuild)"
Write-Host "  -IncludeBinaries           Binaries/ (~1 GB, requires R5Editor rebuild)"
Write-Host ""

if ($IncludeDerivedDataCache) {
    Write-Host "DerivedDataCache:" -ForegroundColor Cyan
    Remove-Tree (Join-Path $ProjectRoot "DerivedDataCache") "Local DDC; editor recreates on demand"
}

if ($IncludeBinaries) {
    Write-Host "Binaries:" -ForegroundColor Cyan
    Remove-Tree (Join-Path $ProjectRoot "Binaries") "Editor/game DLLs; rebuild R5Editor if you still compile"
}

if (-not $Clean -and -not $WhatIf) {
    Write-Host "Preview only. Re-run with -Clean to apply, or -WhatIf to list without moving/deleting." -ForegroundColor Yellow
    exit 0
}

Write-Host ""
Write-Host "Done." -ForegroundColor Green
if ($Clean -and -not $WhatIf) {
    Write-Host "Mod loop unchanged: edit Content/Mods/WindroseMod -> BuildAndLaunch-WindroseMod.bat"
}
