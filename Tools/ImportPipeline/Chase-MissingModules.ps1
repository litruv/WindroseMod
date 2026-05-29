param(
    [string]$ProjectRoot = "",
    [string]$DumpRoot = "",
    [string]$EngineBuildBat = "",
    [int]$MaxIterations = 60
)

$ErrorActionPreference = "Stop"
. (Join-Path $PSScriptRoot "ProjectRoot.ps1")
if (-not $ProjectRoot) { $ProjectRoot = Get-WindroseModProjectRoot }
if (-not $DumpRoot) { $DumpRoot = Get-UhtHeaderDumpRoot -ProjectRoot $ProjectRoot }

$uprojectPath = Join-Path $ProjectRoot "R5.uproject"
if (-not $EngineBuildBat) { $EngineBuildBat = Resolve-UnrealEngineBuildBat -UprojectPath $uprojectPath }
$pluginsRoot = Join-Path $ProjectRoot "Plugins"
$logDir = Join-Path $ProjectRoot "ImportLogs"
$loopCsv = Join-Path $logDir "missing-module-chase.csv"

New-Item -ItemType Directory -Force -Path $pluginsRoot | Out-Null
New-Item -ItemType Directory -Force -Path $logDir | Out-Null

function Ensure-PluginImportedFromDump {
    param([string]$ModuleName)

    $srcDir = Join-Path $DumpRoot $ModuleName
    $buildCs = Join-Path $srcDir ("{0}.Build.cs" -f $ModuleName)
    if (-not (Test-Path $buildCs)) {
        return $false
    }

    $destPluginDir = Join-Path $pluginsRoot $ModuleName
    $destSourceDir = Join-Path $destPluginDir "Source"
    $destModuleDir = Join-Path $destSourceDir $ModuleName
    New-Item -ItemType Directory -Force -Path $destModuleDir | Out-Null
    Copy-Item -Path (Join-Path $srcDir "*") -Destination $destModuleDir -Recurse -Force

    $upluginPath = Join-Path $destPluginDir ("{0}.uplugin" -f $ModuleName)
    if (-not (Test-Path $upluginPath)) {
        $uplugin = [ordered]@{
            FileVersion = 3
            Version = 1
            VersionName = "1.0"
            FriendlyName = $ModuleName
            Description = "Imported from UHTHeaderDump"
            Category = "Imported"
            EnabledByDefault = $true
            Modules = @(
                [ordered]@{
                    Name = $ModuleName
                    Type = "Runtime"
                    LoadingPhase = "Default"
                }
            )
        }
        $uplugin | ConvertTo-Json -Depth 10 | Set-Content -Path $upluginPath
    }

    $uproject = Get-Content -Raw -Path $uprojectPath | ConvertFrom-Json
    if (-not $uproject.Plugins) {
        $uproject | Add-Member -MemberType NoteProperty -Name Plugins -Value @()
    }

    $found = $false
    foreach ($p in $uproject.Plugins) {
        if ($p.Name -eq $ModuleName) {
            $p.Enabled = $true
            $found = $true
            break
        }
    }
    if (-not $found) {
        $uproject.Plugins += [pscustomobject]@{ Name = $ModuleName; Enabled = $true }
    }

    $uproject | ConvertTo-Json -Depth 25 | Set-Content -Path $uprojectPath
    return $true
}

$results = New-Object System.Collections.Generic.List[Object]
$seenMissing = New-Object System.Collections.Generic.HashSet[string]

for ($i = 1; $i -le $MaxIterations; $i++) {
    $logPath = Join-Path $logDir ("chase-iter-{0:D2}.log" -f $i)
    Write-Host ("=== Iteration {0} ===" -f $i)

    & $EngineBuildBat R5Editor Win64 Development "-Project=$uprojectPath" -WaitMutex -NoHotReloadFromIDE *> $logPath
    $exitCode = $LASTEXITCODE

    $content = Get-Content -Raw -Path $logPath
    $missingMatch = [regex]::Match($content, "Could not find definition for module '([^']+)'")
    $missingModule = if ($missingMatch.Success) { $missingMatch.Groups[1].Value } else { "" }

    $action = "none"
    if ($missingModule -ne "") {
        if ($seenMissing.Contains($missingModule)) {
            $action = "repeated-missing-stop"
            $results.Add([pscustomobject]@{
                Iteration = $i
                ExitCode = $exitCode
                MissingModule = $missingModule
                Action = $action
                LogPath = $logPath
            })
            break
        }

        $seenMissing.Add($missingModule) | Out-Null
        $imported = Ensure-PluginImportedFromDump -ModuleName $missingModule
        if ($imported) {
            $action = "imported"
        }
        else {
            $action = "not-in-dump-stop"
            $results.Add([pscustomobject]@{
                Iteration = $i
                ExitCode = $exitCode
                MissingModule = $missingModule
                Action = $action
                LogPath = $logPath
            })
            break
        }
    }

    $results.Add([pscustomobject]@{
        Iteration = $i
        ExitCode = $exitCode
        MissingModule = $missingModule
        Action = $action
        LogPath = $logPath
    })

    if ($missingModule -eq "") {
        break
    }
}

$results | Export-Csv -NoTypeInformation -Path $loopCsv
Write-Host ("Done. Chase summary: {0}" -f $loopCsv)
