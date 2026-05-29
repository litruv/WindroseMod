param(
    [string]$ModuleRoot = ""
)


. (Join-Path $PSScriptRoot "ProjectRoot.ps1")
if (-not $ModuleRoot) { $ModuleRoot = Get-WindroseModR5ModuleRoot }
$publicDir = Join-Path $ModuleRoot "Public"
$privateDir = Join-Path $ModuleRoot "Private"

$foiSuperInitBases = @(
    'AActor', 'APawn', 'ACharacter', 'AHUD', 'AController', 'APlayerController', 'ALevelInstance',
    'UActorComponent', 'USceneComponent', 'UPrimitiveComponent', 'UMeshComponent',
    'UStaticMeshComponent', 'USkeletalMeshComponent', 'UCameraComponent',
    'UUserWidget', 'UListView', 'UTileView', 'UWidget',
    'UAnimInstance', 'UAnimNotify', 'UAnimNotifyState',
    'UGameplayAbility', 'UGameplayTask', 'UAbilityTask', 'UAbilityAsync',
    'UAITask', 'UAITask_MoveTo',
    'UEnvQueryContext', 'UEnvQueryTest', 'UEnvQueryGenerator',
    'UBTTaskNode', 'UBTService', 'UBTDecorator',
    'UStateTreeTaskBlueprintBase', 'UStateTreeConditionBlueprintBase', 'UStateTreeComponentSchema'
)


. (Join-Path $PSScriptRoot "ProjectRoot.ps1")
if (-not $ModuleRoot) { $ModuleRoot = Get-WindroseModR5ModuleRoot }
$uclassRx = 'UCLASS\([^)]*\)\s*\r?\nclass\s+(?:\w+_API\s+)?(\w+)\s*:\s*public\s+(\w+)'
$fixed = 0

function Test-NeedsFoiSuperInit {
    param([string]$BaseName)
    if ($foiSuperInitBases -contains $BaseName) { return $true }
    return $false
}

foreach ($header in (Get-ChildItem -Path $publicDir -Filter *.h -File)) {
    $text = Get-Content -Path $header.FullName -Raw
    $m = [regex]::Match($text, $uclassRx)
    if (-not $m.Success) { continue }

    $className = $m.Groups[1].Value
    $baseName = $m.Groups[2].Value
    if ($text -match [regex]::Escape("$className(const FObjectInitializer")) { continue }
    if ($text -notmatch [regex]::Escape("$className()")) { continue }
    if (Test-NeedsFoiSuperInit -BaseName $baseName) { continue }

    $cppPath = Join-Path $privateDir ($header.BaseName + ".cpp")
    if (-not (Test-Path $cppPath)) { continue }

    $cpp = Get-Content -Path $cppPath -Raw
    $withSuper = "$className::$className()`r`n    : Super(FObjectInitializer::Get())`r`n{`r`n}"
    $plain = "$className::$className()`r`n{`r`n}"
    if ($cpp -notlike "*$withSuper*") { continue }

    $cpp = $cpp.Replace($withSuper, $plain)
    Set-Content -Path $cppPath -Value $cpp -NoNewline
    $fixed++
}

Write-Host "Reverted Super(FObjectInitializer::Get()) for $fixed plain default ctors."
