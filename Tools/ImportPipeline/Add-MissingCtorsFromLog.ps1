param(
    [string]$LogPath = "",
    [string]$ModuleRoot = ""
)


. (Join-Path $PSScriptRoot "ProjectRoot.ps1")
if (-not $ModuleRoot) { $ModuleRoot = Get-WindroseModR5ModuleRoot }
if (-not $LogPath) { $LogPath = Get-WindroseModImportLog 'build-continue39.log' }
$publicDir = Join-Path $ModuleRoot "Public"
$privateDir = Join-Path $ModuleRoot "Private"

$ctorRx = 'unresolved external symbol "[^"]*?(\w+)::\1\('
$foiRx = '(\w+)::\1\(class FObjectInitializer const &\)'
$added = 0

$classes = @{}
foreach ($line in (Get-Content -Path $LogPath)) {
    if ($line -notmatch 'LNK2019|LNK2001') { continue }
    if ($line -like '*__imp_*') { continue }
    if ($line -match '(\w+)::\1\(class FObjectInitializer const &\)') {
        $classes[$Matches[1]] = $true
        continue
    }
    if ($line -notmatch 'InternalConstructor|__DefaultConstructor') { continue }
    $m = [regex]::Match($line, 'InternalConstructor<class (\w+)>|__DefaultConstructor@(\w+)')
    if (-not $m.Success) { continue }
    $className = if ($m.Groups[1].Success) { $m.Groups[1].Value } else { $m.Groups[2].Value }
    $classes[$className] = $true
}

foreach ($className in $classes.Keys) {
    $header = Get-ChildItem -Path $publicDir -Filter *.h -File | Where-Object {
        (Get-Content $_.FullName -Raw) -match "UCLASS\s*\((?:[^()]|\([^()]*\))*\)\s*\r?\nclass\s+(?:\w+_API\s+)?$className\b"
    } | Select-Object -First 1
    if (-not $header) { continue }

    $text = Get-Content -Path $header.FullName -Raw
    $cppPath = Join-Path $privateDir ($header.BaseName + ".cpp")
    $includeLine = "#include `"$($header.BaseName).h`""

    $needsFoi = $text -match [regex]::Escape("$className(const FObjectInitializer")
    if (-not $needsFoi) {
        $baseM = [regex]::Match($text, "class\s+(?:\w+_API\s+)?$className\s*:\s*public\s+(\w+)")
        $foiBases = @('AActor','APawn','ACharacter','UActorComponent','USceneComponent','UPrimitiveComponent','UMeshComponent','UStaticMeshComponent','USkeletalMeshComponent','UGameplayAbility','UAbilityTask','UAbilityAsync','UAnimNotify','UAnimNotifyState')
        if ($baseM.Success -and ($foiBases -contains $baseM.Groups[1].Value)) { $needsFoi = $true }
    }

    $cpp = if (Test-Path $cppPath) { Get-Content -Path $cppPath -Raw } else { "$includeLine`r`n" }
    if ($cpp -notmatch [regex]::Escape($includeLine)) { $cpp = "$includeLine`r`n$cpp" }

    if ($needsFoi) {
        $sig = "$className::$className(const FObjectInitializer& ObjectInitializer)"
        if ($cpp -match [regex]::Escape($sig)) { continue }
        $cpp += "`r`n$sig`r`n    : Super(ObjectInitializer)`r`n{`r`n}`r`n"
    } else {
        $sig = "$className::$className()"
        if ($cpp -match [regex]::Escape($sig)) { continue }
        $cpp += "`r`n$sig`r`n{`r`n}`r`n"
    }

    Set-Content -Path $cppPath -Value $cpp -NoNewline
    $added++
}

Write-Host "Added missing ctor stubs for $added classes."
