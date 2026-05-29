# Cook and pak only /Game/Mods/WindroseMod for retail Windrose + UE4SS LogicMods.
# Content: Content/Mods/WindroseMod/ModActor (+ UI). ModActor should parent Actor (not R5-only classes).

param(
    [string]$UeRoot = "",
    [string]$Project = "",
    [string]$ModCookDir = "",
    [string]$ArchiveDir = "",
    [string]$PakBaseName = "",
    [string]$LogicModsDir = "",
    [string]$ModActorAssetPath = "",
    [string]$ModActorClassName = "",
    [switch]$InstallToLogicMods,
    [switch]$Clean
)

$ErrorActionPreference = "Stop"
. (Join-Path $PSScriptRoot "Get-WindroseModConfig.ps1")
. (Join-Path $PSScriptRoot "Resolve-UnrealEngineRoot.ps1")

$cfg = Get-WindroseModConfig -ProjectRoot $PSScriptRoot
if (-not $Project) { $Project = $cfg.UprojectPath }
if (-not $ModCookDir) { $ModCookDir = $cfg.ModCookDir }
if (-not $ArchiveDir) { $ArchiveDir = $cfg.ArchiveDir }
if (-not $PakBaseName) { $PakBaseName = $cfg.PakBaseName }
if (-not $LogicModsDir) { $LogicModsDir = $cfg.LogicModsDir }
if (-not $ModActorAssetPath) { $ModActorAssetPath = $cfg.ModActorAssetPath }
if (-not $ModActorClassName) { $ModActorClassName = $cfg.ModActorClassName }
if (-not $UeRoot) { $UeRoot = $cfg.UeRoot }

$UeRoot = Resolve-UnrealEngineRoot -UprojectPath $Project -UeRoot $UeRoot
Write-Host "Engine: $UeRoot" -ForegroundColor DarkGray

$EditorCmd = Join-Path $UeRoot "Engine\Binaries\Win64\UnrealEditor-Cmd.exe"
$UnrealPak = Join-Path $UeRoot "Engine\Binaries\Win64\UnrealPak.exe"
$ProjectDir = Split-Path $Project -Parent

if (-not (Test-Path $EditorCmd)) { throw "UnrealEditor-Cmd not found: $EditorCmd" }
if (-not (Test-Path $Project)) { throw "Project not found: $Project" }

$cookedRoot = Join-Path $ProjectDir "Saved\Cooked\Windows"
$cookedModRoot = Join-Path $cookedRoot "R5\Content\Mods\WindroseMod"
$metadataDir = Join-Path $cookedRoot "R5\Metadata"
$outDir = Join-Path $ArchiveDir "LogicModsBundle"
$importLogs = Join-Path $ProjectDir "ImportLogs"

New-Item -ItemType Directory -Force -Path $ArchiveDir, $importLogs, $outDir | Out-Null

if ($Clean) {
    Write-Host "Cleaning cooked output (-Clean)..." -ForegroundColor Cyan
    if (Test-Path (Join-Path $ProjectDir "Saved\Cooked")) {
        Remove-Item -Recurse -Force (Join-Path $ProjectDir "Saved\Cooked")
    }
}

if (Test-Path $outDir) { Remove-Item -Recurse -Force $outDir }
New-Item -ItemType Directory -Force -Path $outDir | Out-Null

Write-Host "=== Cook mod directory only ===" -ForegroundColor Cyan
Write-Host "Cook: $ModCookDir"

& $EditorCmd $Project `
    -run=Cook `
    -targetplatform=Windows `
    -unversioned `
    -stdout `
    "-COOKDIR=$ModCookDir" `
    "-NEVERCOOKDIR=/Game/Mod"

if ($LASTEXITCODE -ne 0) { throw "Cook commandlet failed with exit code $LASTEXITCODE" }

foreach ($required in @(
        $cookedModRoot,
        (Join-Path $metadataDir "packagestore.manifest"),
        (Join-Path $metadataDir "scriptobjects.bin")
    )) {
    if (-not (Test-Path $required)) { throw "Missing after cook: $required" }
}

Write-Host "Cooked mod files:" -ForegroundColor Cyan
Get-ChildItem $cookedModRoot -Recurse -File | Measure-Object -Property Length -Sum |
    ForEach-Object { Write-Host ("  {0} files, {1:N2} MB" -f $_.Count, ($_.Sum / 1MB)) }

$responseFile = Join-Path $importLogs "windrosemod-iostore-response.txt"
$commandsFile = Join-Path $importLogs "windrosemod-iostore-commands.txt"
$utocOut = Join-Path $outDir "$PakBaseName.utoc"

@(
    "`"$($cookedModRoot -replace '\\','/')/ModActor.uasset`" `"../../../R5/Content/Mods/WindroseMod/ModActor.uasset`" -compress"
    "`"$($cookedModRoot -replace '\\','/')/ModActor.uexp`" `"../../../R5/Content/Mods/WindroseMod/ModActor.uexp`""
    "`"$($cookedModRoot -replace '\\','/')/UI/W_ModStartup.uasset`" `"../../../R5/Content/Mods/WindroseMod/UI/W_ModStartup.uasset`" -compress"
    "`"$($cookedModRoot -replace '\\','/')/UI/W_ModStartup.uexp`" `"../../../R5/Content/Mods/WindroseMod/UI/W_ModStartup.uexp`""
) | Set-Content -Encoding ASCII $responseFile

"-Output=$($utocOut -replace '\\','/') -ContainerName=$PakBaseName -ResponseFile=$($responseFile -replace '\\','/')" |
    Set-Content -Encoding ASCII $commandsFile

Write-Host "=== IoStore container ($PakBaseName) ===" -ForegroundColor Cyan
$globalUtoc = Join-Path $outDir "global.utoc"
& $UnrealPak IoStore `
    "-CreateGlobalContainer=$globalUtoc" `
    "-PackageStoreManifest=$metadataDir\packagestore.manifest" `
    "-CookedDirectory=$cookedRoot" `
    "-Commands=$commandsFile" `
    "-ScriptObjects=$metadataDir\scriptobjects.bin" `
    "-projectdir=$ProjectDir" `
    -compress `
    -compressionformats=Oodle

if ($LASTEXITCODE -ne 0) { throw "UnrealPak IoStore failed with exit code $LASTEXITCODE" }

# Retail mounts .pak alongside .utoc/.ucas; keep a tiny legacy pak index.
$stagingRoot = Join-Path $env:TEMP "WindroseModPakStage"
$stageContent = Join-Path $stagingRoot "R5\Content\Mods\WindroseMod"
if (Test-Path $stagingRoot) { Remove-Item -Recurse -Force $stagingRoot }
New-Item -ItemType Directory -Force -Path $stageContent | Out-Null
Copy-Item -Recurse -Force "$cookedModRoot\*" $stageContent

$legacyResponse = Join-Path $env:TEMP "windrosemod-legacy-pak-list.txt"
$stageR5 = Join-Path $stagingRoot "R5"
Get-ChildItem $stageR5 -Recurse -File | ForEach-Object {
    $rel = $_.FullName.Substring($stageR5.Length).TrimStart('\').Replace('\', '/')
    "`"$($_.FullName)`" `"../../../R5/$rel`""
} | Set-Content -Encoding ASCII $legacyResponse

$pakPath = Join-Path $outDir "$PakBaseName.pak"
& $UnrealPak $pakPath -Create="$legacyResponse" -compress
if ($LASTEXITCODE -ne 0) { throw "UnrealPak legacy pak failed with exit code $LASTEXITCODE" }

# Do not ship global.* to LogicMods (engine already has global.utoc).
Remove-Item -Force (Join-Path $outDir "global.ucas"), (Join-Path $outDir "global.utoc") -ErrorAction SilentlyContinue

function Rename-ModPakBundleFiles {
    param(
        [Parameter(Mandatory)][string]$Directory,
        [Parameter(Mandatory)][string]$TargetBaseName
    )
    if (-not (Test-Path $Directory)) { return }

    foreach ($ext in @(".pak", ".utoc", ".ucas")) {
        Get-ChildItem -LiteralPath $Directory -Filter "*$ext" -File -ErrorAction SilentlyContinue |
            Where-Object { $_.BaseName -cne $TargetBaseName } |
            ForEach-Object {
                $dest = Join-Path $Directory ($TargetBaseName + $ext)
                if (Test-Path -LiteralPath $dest) { Remove-Item -LiteralPath $dest -Force }
                Write-Host "Rename: $($_.Name) -> $($TargetBaseName)$ext" -ForegroundColor DarkGray
                Rename-Item -LiteralPath $_.FullName -NewName ($TargetBaseName + $ext)
            }
    }

    Get-ChildItem -LiteralPath $Directory -Directory -ErrorAction SilentlyContinue |
        Where-Object {
            $_.Name -cne $TargetBaseName -and
            $_.Name -match '^(?i)(windrosemod|r5-?windows|r5)$'
        } |
        ForEach-Object {
            $destDir = Join-Path $Directory $TargetBaseName
            if (Test-Path -LiteralPath $destDir) { Remove-Item -LiteralPath $destDir -Recurse -Force }
            Write-Host "Rename: $($_.Name)\ -> $TargetBaseName\" -ForegroundColor DarkGray
            Rename-Item -LiteralPath $_.FullName -NewName $TargetBaseName
        }
}

Rename-ModPakBundleFiles -Directory $outDir -TargetBaseName $PakBaseName

$configLua = @"
Mods["$PakBaseName"] = {
    AssetPath = "$ModActorAssetPath",
    AssetName = "$ModActorClassName",
}
"@
$configPath = Join-Path $outDir "config.lua"
Set-Content -Encoding UTF8 $configPath $configLua

Write-Host ""
Write-Host "Mod bundle:" -ForegroundColor Green
Get-ChildItem $outDir | Where-Object { $_.Name -like "$PakBaseName*" -or $_.Name -eq "config.lua" } |
    Format-Table Name, @{N="KB";E={[math]::Round($_.Length/1KB,1)}} -AutoSize

if ($InstallToLogicMods) {
    if (-not (Test-Path $LogicModsDir)) {
        New-Item -ItemType Directory -Force -Path $LogicModsDir | Out-Null
    }
    Get-ChildItem $LogicModsDir -Filter "windrosemod*" | Remove-Item -Recurse -Force -ErrorAction SilentlyContinue
    Get-ChildItem $LogicModsDir -Filter "R5-Windows*" | Remove-Item -Recurse -Force -ErrorAction SilentlyContinue
    Get-ChildItem $LogicModsDir -Filter "WindroseMod*" | Remove-Item -Recurse -Force -ErrorAction SilentlyContinue
    Copy-Item -Force (Join-Path $outDir "$PakBaseName.pak") (Join-Path $LogicModsDir "$PakBaseName.pak")
    Copy-Item -Force (Join-Path $outDir "$PakBaseName.utoc") (Join-Path $LogicModsDir "$PakBaseName.utoc")
    Copy-Item -Force (Join-Path $outDir "$PakBaseName.ucas") (Join-Path $LogicModsDir "$PakBaseName.ucas")
    $configDir = Join-Path $LogicModsDir $PakBaseName
    New-Item -ItemType Directory -Force -Path $configDir | Out-Null
    Copy-Item -Force $configPath (Join-Path $configDir "config.lua")
    Rename-ModPakBundleFiles -Directory $LogicModsDir -TargetBaseName $PakBaseName
    Write-Host "Installed IoStore mod + config.lua to LogicMods." -ForegroundColor Green
}
else {
    Write-Host "Install to LogicMods:" -ForegroundColor Yellow
    Write-Host "  $PakBaseName.pak, $PakBaseName.utoc, $PakBaseName.ucas"
    Write-Host "  $PakBaseName\config.lua"
}

Write-Host ""
Write-Host "If ModClass is still invalid: ModActor must parent Actor; widget must use retail-safe classes only." -ForegroundColor Cyan
