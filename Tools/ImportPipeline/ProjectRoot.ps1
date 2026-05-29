# Shared paths for ImportPipeline scripts (repo root = WindroseMod).
# Dot-source: . (Join-Path $PSScriptRoot 'ProjectRoot.ps1')

function Get-WindroseModProjectRoot {
    return (Resolve-Path (Join-Path $PSScriptRoot '..\..')).Path
}

function Get-UhtHeaderDumpRoot {
    param([string]$ProjectRoot = (Get-WindroseModProjectRoot))
    return (Join-Path (Split-Path $ProjectRoot -Parent) 'UHTHeaderDump')
}

function Get-WindroseModR5ModuleRoot {
    return (Join-Path (Get-WindroseModProjectRoot) 'Source\R5')
}

function Get-WindroseModR5PrivateDir {
    return (Join-Path (Get-WindroseModR5ModuleRoot) 'Private')
}

function Get-WindroseModR5PublicDir {
    return (Join-Path (Get-WindroseModR5ModuleRoot) 'Public')
}

function Get-WindroseModImportLog {
    param([string]$LogFileName)
    return (Join-Path (Join-Path (Get-WindroseModProjectRoot) 'ImportLogs') $LogFileName)
}

$resolveEngineScript = Join-Path (Join-Path $PSScriptRoot '..\..') 'Resolve-UnrealEngineRoot.ps1'
if (Test-Path -LiteralPath $resolveEngineScript) {
    . $resolveEngineScript
}
