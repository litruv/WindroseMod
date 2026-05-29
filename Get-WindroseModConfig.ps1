param(
    [string]$ProjectRoot = "",
    [switch]$EmitBatVars
)

function Read-IniFile {
    param([Parameter(Mandatory)][string]$Path)

    $sections = @{}
    $section = ""
    foreach ($line in Get-Content -LiteralPath $Path -ErrorAction Stop) {
        $trim = $line.Trim()
        if ($trim -eq "" -or $trim.StartsWith(";")) { continue }
        if ($trim -match '^\[(.+)\]$') {
            $section = $Matches[1]
            if (-not $sections.ContainsKey($section)) { $sections[$section] = @{} }
            continue
        }
        if ($trim -match '^([^=]+)=(.*)$') {
            if (-not $sections.ContainsKey($section)) { $sections[$section] = @{} }
            $sections[$section][$Matches[1].Trim()] = $Matches[2].Trim()
        }
    }
    return $sections
}

function Get-IniValue {
    param($Ini, [string]$Section, [string]$Key, [string]$Default = "")
    if ($Ini.ContainsKey($Section) -and $Ini[$Section].ContainsKey($Key)) {
        return [string]$Ini[$Section][$Key]
    }
    return $Default
}

function Get-WindroseModConfig {
    param([string]$ProjectRoot = "")

    if (-not $ProjectRoot) {
        $ProjectRoot = if ($PSScriptRoot) { $PSScriptRoot } else { (Get-Location).Path }
    }
    $ProjectRoot = (Resolve-Path -LiteralPath $ProjectRoot).Path

    $defaults = @{
        UeRoot             = ""
        GameExe            = ""
        LogicModsDir       = "C:\Program Files (x86)\Steam\steamapps\common\Windrose\R5\Content\Paks\LogicMods"
        ArchiveDir         = ""
        PakBaseName        = "windrosemod"
        ModCookDir         = "/Game/Mods/WindroseMod"
        ModActorAssetPath  = "/Game/Mods/WindroseMod/ModActor"
        ModActorClassName  = "ModActor_C"
        UhtHeaderDumpDir   = "../UHTHeaderDump"
    }

    $ini = @{}
    foreach ($file in @(
            (Join-Path $ProjectRoot "config.ini")
            (Join-Path $ProjectRoot "config.local.ini")
        )) {
        if (Test-Path -LiteralPath $file) {
            $parsed = Read-IniFile -Path $file
            foreach ($section in $parsed.Keys) {
                foreach ($key in $parsed[$section].Keys) {
                    if (-not $ini.ContainsKey($section)) { $ini[$section] = @{} }
                    $ini[$section][$key] = $parsed[$section][$key]
                }
            }
        }
    }

    $archiveDir = Get-IniValue $ini Paths ArchiveDir $defaults.ArchiveDir
    if (-not $archiveDir) {
        $archiveDir = Join-Path $ProjectRoot "Releases\ModPak"
    } elseif (-not [System.IO.Path]::IsPathRooted($archiveDir)) {
        $archiveDir = Join-Path $ProjectRoot $archiveDir
    }

    $uhtDump = Get-IniValue $ini Import UhtHeaderDumpDir $defaults.UhtHeaderDumpDir
    if (-not [System.IO.Path]::IsPathRooted($uhtDump)) {
        $uhtDump = [System.IO.Path]::GetFullPath((Join-Path $ProjectRoot $uhtDump))
    }

    [PSCustomObject]@{
        ProjectRoot        = $ProjectRoot
        UprojectPath       = Join-Path $ProjectRoot "R5.uproject"
        UeRoot             = Get-IniValue $ini Paths UeRoot $defaults.UeRoot
        GameExe            = Get-IniValue $ini Paths GameExe $defaults.GameExe
        LogicModsDir       = Get-IniValue $ini Paths LogicModsDir $defaults.LogicModsDir
        ArchiveDir         = $archiveDir
        PakBaseName        = Get-IniValue $ini Mod PakBaseName $defaults.PakBaseName
        ModCookDir         = Get-IniValue $ini Mod ModCookDir $defaults.ModCookDir
        ModActorAssetPath  = Get-IniValue $ini Mod ModActorAssetPath $defaults.ModActorAssetPath
        ModActorClassName  = Get-IniValue $ini Mod ModActorClassName $defaults.ModActorClassName
        UhtHeaderDumpDir   = $uhtDump
    }
}

if ($MyInvocation.InvocationName -ne '.') {
    $config = Get-WindroseModConfig -ProjectRoot $(if ($ProjectRoot) { $ProjectRoot } else { $PSScriptRoot })

    if ($EmitBatVars) {
        Write-Output "set WINDROSE_PAK_BASENAME=$($config.PakBaseName)"
        Write-Output "set WINDROSE_LOGICMODS_DIR=$($config.LogicModsDir)"
        exit 0
    }

    $config
}
