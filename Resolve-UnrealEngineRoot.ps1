function Get-EngineAssociationFromUproject {
    param([Parameter(Mandatory)][string]$UprojectPath)
    $json = Get-Content -Raw -LiteralPath $UprojectPath | ConvertFrom-Json
    return [string]$json.EngineAssociation
}

function Resolve-UnrealEngineRoot {
    param(
        [Parameter(Mandatory)][string]$UprojectPath,
        [string]$UeRoot = "",
        [string]$LauncherInstalled = "$env:ProgramData\Epic\UnrealEngineLauncher\LauncherInstalled.dat"
    )

    if ($UeRoot) {
        $root = $UeRoot.TrimEnd('\')
        $cmd = Join-Path $root "Engine\Binaries\Win64\UnrealEditor-Cmd.exe"
        if (Test-Path -LiteralPath $cmd) { return $root }
        throw "UnrealEditor-Cmd not found under -UeRoot: $cmd"
    }

    if ($env:UE_ROOT) {
        $root = $env:UE_ROOT.TrimEnd('\')
        $cmd = Join-Path $root "Engine\Binaries\Win64\UnrealEditor-Cmd.exe"
        if (Test-Path -LiteralPath $cmd) { return $root }
    }

    $assoc = Get-EngineAssociationFromUproject -UprojectPath $UprojectPath
    $appName = if ($assoc -match '^\d') { "UE_$assoc" } else { $assoc }

    if (Test-Path -LiteralPath $LauncherInstalled) {
        $launcher = Get-Content -Raw -LiteralPath $LauncherInstalled | ConvertFrom-Json
        $install = $launcher.InstallationList | Where-Object { $_.AppName -eq $appName } | Select-Object -First 1
        if ($install.InstallLocation) {
            $root = $install.InstallLocation.TrimEnd('\')
            $cmd = Join-Path $root "Engine\Binaries\Win64\UnrealEditor-Cmd.exe"
            if (Test-Path -LiteralPath $cmd) { return $root }
        }
    }

    throw @"
Could not find Unreal Engine ($appName) for $UprojectPath.
Install UE via Epic Launcher, set UE_ROOT to your engine folder, or pass -UeRoot to Pack-WindroseMod.ps1.
"@
}

function Resolve-UnrealEngineBuildBat {
    param(
        [Parameter(Mandatory)][string]$UprojectPath,
        [string]$UeRoot = ""
    )
    $root = Resolve-UnrealEngineRoot -UprojectPath $UprojectPath -UeRoot $UeRoot
    return (Join-Path $root "Engine\Build\BatchFiles\Build.bat")
}
