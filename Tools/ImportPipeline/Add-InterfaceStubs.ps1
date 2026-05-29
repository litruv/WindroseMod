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

$abilityDecl = "    virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;"
$abilityCpp = @"
UAbilitySystemComponent* {0}::GetAbilitySystemComponent() const
{{
    return nullptr;
}}
"@

$tagDecl = "    virtual void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override;"
$tagCpp = @"
void {0}::GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const
{{
    TagContainer.Reset();
}}
"@

$headersChanged = 0
$cppsCreated = 0

foreach ($headerPath in (Get-ChildItem -Path $publicDir -Filter *.h -File)) {
    $lines = Get-Content -Path $headerPath.FullName
    $content = $lines -join "`n"
    if ($content -notmatch '^\s*class\s+R5_API\s+(\w+)') {
        $classMatch = [regex]::Match($content, 'class\s+R5_API\s+(\w+)')
        if (-not $classMatch.Success) { continue }
    } else {
        $classMatch = [regex]::Match($content, 'class\s+R5_API\s+(\w+)')
    }
    if (-not $classMatch.Success) { continue }

    $className = $classMatch.Groups[1].Value
    $needsAbility = $content -match 'IAbilitySystemInterface' -and $content -notmatch 'GetAbilitySystemComponent\s*\('
    $needsTags = $content -match 'IGameplayTagAssetInterface' -and $content -notmatch 'GetOwnedGameplayTags\s*\('
    if (-not $needsAbility -and -not $needsTags) { continue }

    $out = New-Object System.Collections.Generic.List[string]
        $inserted = $false
        $declAdded = $false
        foreach ($line in $lines) {
        $out.Add($line) | Out-Null
        if (-not $inserted -and $line -match '^\s*GENERATED_BODY\(\)') {
            $inserted = $true
            $headersChanged++
        } elseif ($inserted -and -not $declAdded -and $line -match '^\s*public:\s*$') {
            if ($needsAbility) { $out.Add($abilityDecl) | Out-Null }
            if ($needsTags) { $out.Add($tagDecl) | Out-Null }
            $declAdded = $true
        }
    }

    if ($inserted) {
        Set-Content -Path $headerPath.FullName -Value $out
    }

    $cppPath = Join-Path $privateDir ($headerPath.BaseName + ".cpp")
    $cppBody = "#include `"" + $headerPath.BaseName + ".h`"`n"
    if ($needsAbility) {
        $cppBody += "#include `"AbilitySystemComponent.h`"`n"
    }
    $implParts = @()
    if ($needsAbility) {
        $implParts += ($abilityCpp -f $className)
    }
    if ($needsTags) {
        $implParts += ($tagCpp -f $className)
    }

    if (Test-Path $cppPath) {
        $existing = Get-Content -Path $cppPath -Raw
        $newImpl = $implParts -join "`n`n"
        if ($needsAbility -and $existing -notmatch 'GetAbilitySystemComponent') {
            Add-Content -Path $cppPath -Value "`n$newImpl"
            $cppsCreated++
        } elseif ($needsTags -and $existing -notmatch 'GetOwnedGameplayTags') {
            Add-Content -Path $cppPath -Value "`n$newImpl"
            $cppsCreated++
        }
    } else {
        $cppBody += "`n" + ($implParts -join "`n`n") + "`n"
        Set-Content -Path $cppPath -Value $cppBody
        $cppsCreated++
    }
}

Write-Host "Updated $headersChanged headers, touched $cppsCreated cpp files."
