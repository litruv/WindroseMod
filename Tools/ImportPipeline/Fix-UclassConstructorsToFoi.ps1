param(
    [string]$ModuleRoot = ""
)


. (Join-Path $PSScriptRoot "ProjectRoot.ps1")
if (-not $ModuleRoot) { $ModuleRoot = Get-WindroseModR5ModuleRoot }
$publicDir = Join-Path $ModuleRoot "Public"
$privateDir = Join-Path $ModuleRoot "Private"

$defaultCtorBases = @(
    'UObject', 'UBlueprintFunctionLibrary', 'UDataAsset', 'UPrimaryDataAsset',
    'UDeveloperSettings', 'UAssetUserData', 'UEngineSubsystem', 'UWorldSubsystem',
    'UGameInstanceSubsystem', 'ULocalPlayerSubsystem', 'UEdGraphNode', 'UBlueprintCore'
)


. (Join-Path $PSScriptRoot "ProjectRoot.ps1")
if (-not $ModuleRoot) { $ModuleRoot = Get-WindroseModR5ModuleRoot }
$uclassRx = 'UCLASS\([^)]*\)\s*\r?\nclass\s+(?:\w+_API\s+)?(\w+)\s*:\s*public\s+(\w+)'
$fixed = 0

foreach ($header in (Get-ChildItem -Path $publicDir -Filter *.h -File)) {
    $text = Get-Content -Path $header.FullName -Raw
    $m = [regex]::Match($text, $uclassRx)
    if (-not $m.Success) { continue }

    $className = $m.Groups[1].Value
    $baseName = $m.Groups[2].Value
    if ($text -match [regex]::Escape("$className(const FObjectInitializer")) { continue }
    if ($defaultCtorBases -contains $baseName) { continue }

    $cppPath = Join-Path $privateDir ($header.BaseName + ".cpp")
    if (-not (Test-Path $cppPath)) { continue }

    $cpp = Get-Content -Path $cppPath -Raw
    $old = "$className::$className()`r`n{`r`n}"
    $new = "$className::$className(const FObjectInitializer& ObjectInitializer)`r`n    : Super(ObjectInitializer)`r`n{`r`n}"
    if ($cpp -notlike "*$old*") { continue }

    $cpp = $cpp.Replace($old, $new)
    Set-Content -Path $cppPath -Value $cpp -NoNewline
    $fixed++
}

Write-Host "Converted $fixed UCLASS constructors to FObjectInitializer form."
