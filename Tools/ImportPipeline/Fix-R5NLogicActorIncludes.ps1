param(
    [string]$CppPath = ""
)

. (Join-Path $PSScriptRoot "ProjectRoot.ps1")
if (-not $CppPath) {
    $CppPath = Join-Path (Join-Path (Join-Path (Get-WindroseModProjectRoot) "Plugins\R5Nature\Source\R5Nature") "Private") "R5N_LogicActor.cpp"
}

$includes = @{
    "R5N_DayCycleTimeComponent" = "R5N_DayCycleTimeComponent.h"
    "R5N_EnvironmentParticlesComponent" = "R5N_EnvironmentParticlesComponent.h"
    "R5N_AirComponent" = "R5N_AirComponent.h"
    "R5N_ParticlesComponent" = "R5N_ParticlesComponent.h"
    "R5N_PostProcessComponent" = "R5N_PostProcessComponent.h"
    "R5N_WaterComponent" = "R5N_WaterComponent.h"
    "R5N_WeatherComponent" = "R5N_WeatherComponent.h"
}

$content = Get-Content -Path $CppPath -Raw
$rx = '^//CROSS-MODULE INCLUDE V2:\s*-ModuleName=([A-Za-z0-9_]+)\s*-ObjectName=([A-Za-z0-9_]+)'
$lines = Get-Content -Path $CppPath
$out = New-Object System.Collections.Generic.List[string]
$changed = $false

foreach ($line in $lines) {
    $out.Add($line) | Out-Null
    $m = [regex]::Match($line, $rx)
    if (-not $m.Success) { continue }
    $objectName = $m.Groups[2].Value
    if (-not $includes.ContainsKey($objectName)) { continue }
    $includeLine = "#include `"$($includes[$objectName])`""
    if ($lines -notcontains $includeLine) {
        $out.Add($includeLine) | Out-Null
        $changed = $true
    }
}

if ($changed) {
    Set-Content -Path $CppPath -Value $out
    Write-Host "Updated $CppPath"
} else {
    Write-Host "No changes needed."
}
