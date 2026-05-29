param(
    [string]$ProjectRoot = ""
)


. (Join-Path $PSScriptRoot "ProjectRoot.ps1")
if (-not $ProjectRoot) { $ProjectRoot = Get-WindroseModProjectRoot }
$roots = @(
    Join-Path $ProjectRoot "Source"
    Join-Path $ProjectRoot "Plugins"
)


. (Join-Path $PSScriptRoot "ProjectRoot.ps1")
if (-not $ProjectRoot) { $ProjectRoot = Get-WindroseModProjectRoot }
$replacements = @{
    '#include "GameplayEffectSpec.h"' = '#include "GameplayEffectTypes.h"'
    '#include "Abilities/Tasks/AbilityTask_ApplyRootMotion.h"' = '#include "Abilities/Tasks/AbilityTask_ApplyRootMotion_Base.h"'
}

$changed = 0
foreach ($root in $roots) {
    if (-not (Test-Path $root)) { continue }
    foreach ($file in (Get-ChildItem -Path $root -Recurse -Include *.h,*.cpp -File)) {
        $text = Get-Content -Path $file.FullName -Raw
        $newText = $text
        foreach ($pair in $replacements.GetEnumerator()) {
            $newText = $newText.Replace($pair.Key, $pair.Value)
        }
        if ($newText -ne $text) {
            Set-Content -Path $file.FullName -Value $newText -NoNewline
            $changed++
        }
    }
}

# Drop duplicate consecutive ApplyRootMotion includes.
foreach ($root in $roots) {
    if (-not (Test-Path $root)) { continue }
    foreach ($file in (Get-ChildItem -Path $root -Recurse -Include *.h,*.cpp -File)) {
        $text = Get-Content -Path $file.FullName -Raw
        $pattern = '(#include "Abilities/Tasks/AbilityTask_ApplyRootMotion_Base\.h"\r?\n)(#include "Abilities/Tasks/AbilityTask_ApplyRootMotion_Base\.h"\r?\n)+'
        $newText = [regex]::Replace($text, $pattern, '$1')
        if ($newText -ne $text) {
            Set-Content -Path $file.FullName -Value $newText -NoNewline
            $changed++
        }
    }
}

Write-Host "Fixed bad engine includes in $changed files."
