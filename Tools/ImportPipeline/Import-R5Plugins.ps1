param(
    [string]$ProjectRoot = "",
    [string]$DumpRoot = "",
    [string]$EngineBuildBat = ""
)

$ErrorActionPreference = "Stop"
. (Join-Path $PSScriptRoot "ProjectRoot.ps1")
if (-not $ProjectRoot) { $ProjectRoot = Get-WindroseModProjectRoot }
if (-not $DumpRoot) { $DumpRoot = Get-UhtHeaderDumpRoot -ProjectRoot $ProjectRoot }

$uprojectPath = Join-Path $ProjectRoot "R5.uproject"
if (-not $EngineBuildBat) { $EngineBuildBat = Resolve-UnrealEngineBuildBat -UprojectPath $uprojectPath }
$pluginsRoot = Join-Path $ProjectRoot "Plugins"
$logDir = Join-Path $ProjectRoot "ImportLogs"
$summaryPath = Join-Path $logDir "r5-plugin-import-summary.csv"

New-Item -ItemType Directory -Force -Path $pluginsRoot | Out-Null
New-Item -ItemType Directory -Force -Path $logDir | Out-Null

$pluginNames = Get-ChildItem -Path $DumpRoot -Directory |
    Where-Object {
        $_.Name -like "R5*" -and (Test-Path (Join-Path $_.FullName ("{0}.Build.cs" -f $_.Name)))
    } |
    Sort-Object Name |
    Select-Object -ExpandProperty Name

if (-not $pluginNames -or $pluginNames.Count -eq 0) {
    throw "No R5 plugin candidates found in $DumpRoot"
}

$uproject = Get-Content -Raw -Path $uprojectPath | ConvertFrom-Json
if (-not $uproject.Plugins) {
    $uproject | Add-Member -MemberType NoteProperty -Name Plugins -Value @()
}

$results = New-Object System.Collections.Generic.List[Object]

foreach ($name in $pluginNames) {
    Write-Host "=== Processing $name ==="

    $srcDir = Join-Path $DumpRoot $name
    $destPluginDir = Join-Path $pluginsRoot $name
    $destSourceDir = Join-Path $destPluginDir "Source"
    $destModuleDir = Join-Path $destSourceDir $name

    New-Item -ItemType Directory -Force -Path $destModuleDir | Out-Null

    Copy-Item -Path (Join-Path $srcDir "*") -Destination $destModuleDir -Recurse -Force

    $upluginPath = Join-Path $destPluginDir ("{0}.uplugin" -f $name)
    if (-not (Test-Path $upluginPath)) {
        $uplugin = [ordered]@{
            FileVersion = 3
            Version = 1
            VersionName = "1.0"
            FriendlyName = $name
            Description = "Imported from UHTHeaderDump"
            Category = "R5"
            EnabledByDefault = $true
            Modules = @(
                [ordered]@{
                    Name = $name
                    Type = "Runtime"
                    LoadingPhase = "Default"
                }
            )
        }
        $uplugin | ConvertTo-Json -Depth 10 | Set-Content -Path $upluginPath
    }

    $hasEntry = $false
    foreach ($p in $uproject.Plugins) {
        if ($p.Name -eq $name) {
            $p.Enabled = $true
            $hasEntry = $true
            break
        }
    }
    if (-not $hasEntry) {
        $uproject.Plugins += [pscustomobject]@{ Name = $name; Enabled = $true }
    }

    $uproject | ConvertTo-Json -Depth 20 | Set-Content -Path $uprojectPath

    $pluginLogPath = Join-Path $logDir ("{0}.log" -f $name)
    $buildArgs = @(
        "R5Editor",
        "Win64",
        "Development",
        "-Project=$uprojectPath",
        "-WaitMutex",
        "-NoHotReloadFromIDE"
    )

    & $EngineBuildBat @buildArgs *> $pluginLogPath
    $exitCode = $LASTEXITCODE

    $firstError = ""
    if (Test-Path $pluginLogPath) {
        $errLine = Select-String -Path $pluginLogPath -Pattern "Error:" -SimpleMatch | Select-Object -First 1
        if ($errLine) { $firstError = $errLine.Line.Trim() }
    }

    $results.Add([pscustomobject]@{
        Plugin = $name
        ExitCode = $exitCode
        FirstError = $firstError
        LogPath = $pluginLogPath
    })

    Write-Host ("{0}: exit={1}" -f $name, $exitCode)
}

$results | Export-Csv -Path $summaryPath -NoTypeInformation
Write-Host "Done. Summary at $summaryPath"
