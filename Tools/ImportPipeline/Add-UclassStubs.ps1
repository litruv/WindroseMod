param(
    [string]$ModuleRoot = ""
)


. (Join-Path $PSScriptRoot "ProjectRoot.ps1")
if (-not $ModuleRoot) { $ModuleRoot = Get-WindroseModR5ModuleRoot }
$publicDir = Join-Path $ModuleRoot "Public"
$privateDir = Join-Path $ModuleRoot "Private"
if (-not (Test-Path $privateDir)) {
    New-Item -ItemType Directory -Path $privateDir | Out-Null
}

$uclassRx = 'UCLASS\([^)]*\)\s*\r?\nclass\s+(?:\w+_API\s+)?(\w+)\s*:\s*public\s+(\w+)'
$foiCtorRx = '(\w+)\s*\(\s*const\s+FObjectInitializer\s*&\s*ObjectInitializer\s*\)'
$defaultCtorRx = '(\w+)\s*\(\s*\)\s*;'
$foiBases = @(
    'AActor', 'APawn', 'ACharacter', 'AHUD', 'AController', 'APlayerController',
    'UActorComponent', 'USceneComponent', 'UPrimitiveComponent', 'UMeshComponent',
    'UStaticMeshComponent', 'USkeletalMeshComponent', 'UCameraComponent',
    'UUserWidget', 'UWidget', 'UAnimInstance', 'UAnimNotify', 'UAnimNotifyState',
    'UGameplayAbility', 'UGameplayTask', 'UAbilityTask', 'UAbilityAsync',
    'UEnvQueryContext', 'UEnvQueryTest', 'UEnvQueryGenerator', 'UBTTaskNode',
    'UBTService', 'UBTDecorator', 'UStateTreeTaskBlueprintBase', 'UStateTreeConditionBlueprintBase'
)


. (Join-Path $PSScriptRoot "ProjectRoot.ps1")
if (-not $ModuleRoot) { $ModuleRoot = Get-WindroseModR5ModuleRoot }
$created = 0
$updated = 0

function Get-CtorKind {
    param([string]$Text, [string]$ClassName, [string]$BaseName)
    if ($Text -match [regex]::Escape("$ClassName(const FObjectInitializer")) { return 'FObjectInitializer' }
    if ($Text -match [regex]::Escape("$ClassName()")) { return 'Default' }
    if ($foiBases -contains $BaseName) { return 'FObjectInitializer' }
    return 'Default'
}

foreach ($header in (Get-ChildItem -Path $publicDir -Filter *.h -File)) {
    $text = Get-Content -Path $header.FullName -Raw
    $m = [regex]::Match($text, $uclassRx)
    if (-not $m.Success) { continue }

    $className = $m.Groups[1].Value
    $baseName = $m.Groups[2].Value
    $ctorKind = Get-CtorKind -Text $text -ClassName $className -BaseName $baseName

    $cppPath = Join-Path $privateDir ($header.BaseName + ".cpp")
    $cpp = if (Test-Path $cppPath) { Get-Content -Path $cppPath -Raw } else { "" }

    $includeLine = "#include `"$($header.BaseName).h`""
    if ($cpp -notmatch [regex]::Escape($includeLine)) {
        $cpp = "$includeLine`r`n$cpp"
    }

    $changed = $false

    if ($ctorKind -eq 'FObjectInitializer') {
        $sig = "$className::$className(const FObjectInitializer& ObjectInitializer)"
        if ($cpp -notmatch [regex]::Escape($sig)) {
            $cpp += "`r`n$sig`r`n    : Super(ObjectInitializer)`r`n{`r`n}`r`n"
            $changed = $true
        }
    } else {
        $sig = "$className::$className()"
        if ($cpp -notmatch [regex]::Escape($sig)) {
            $cpp += "`r`n$sig`r`n{`r`n}`r`n"
            $changed = $true
        }
    }

    if ($text -match 'NoExport') {
        $stubName = "void $className::StaticRegisterNatives$className()"
        if ($cpp -notmatch 'StaticRegisterNatives') {
            $cpp += "`r`nvoid $className::StaticRegisterNatives$className()`r`n{`r`n}`r`n"
            $changed = $true
        }
    }

    if (-not $changed) { continue }

    Set-Content -Path $cppPath -Value $cpp -NoNewline
    if (Test-Path $cppPath) { $updated++ }
}

Write-Host "UCLASS constructor stubs touched $updated cpp files."
