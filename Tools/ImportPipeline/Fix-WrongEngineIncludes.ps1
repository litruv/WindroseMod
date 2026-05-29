param(
    [string]$ProjectRoot = ""
)


. (Join-Path $PSScriptRoot "ProjectRoot.ps1")
if (-not $ProjectRoot) { $ProjectRoot = Get-WindroseModProjectRoot }
$fixes = @{
    'Animation/AnimNotifies/AnimNotify.h' = 'Animation/AnimNotifies/AnimNotifyState.h'
    'BehaviorTree/Blackboard/BlackboardData.h' = 'BehaviorTree/BlackboardData.h'
    'EnvironmentQuery/EnvQueryTest_Project.h' = 'EnvironmentQuery/Tests/EnvQueryTest_Project.h'
    'GameFeatures/DefaultGameFeaturesProjectPolicies.h' = 'GameFeaturesProjectPolicies.h'
}

$roots = @(
    Join-Path $ProjectRoot "Source"
    Join-Path $ProjectRoot "Plugins"
)


. (Join-Path $PSScriptRoot "ProjectRoot.ps1")
if (-not $ProjectRoot) { $ProjectRoot = Get-WindroseModProjectRoot }
$changed = 0
foreach ($root in $roots) {
    if (-not (Test-Path $root)) { continue }
    foreach ($file in (Get-ChildItem -Path $root -Recurse -Include *.h, *.cpp -File)) {
        $content = Get-Content -Path $file.FullName -Raw
        $original = $content
        foreach ($key in $fixes.Keys) {
            $content = $content.Replace("#include `"$key`"", "#include `"$($fixes[$key])`"")
        }
        if ($content -ne $original) {
            Set-Content -Path $file.FullName -Value $content -NoNewline
            $changed++
        }
    }
}

Write-Host "Fixed wrong engine includes in $changed files."
