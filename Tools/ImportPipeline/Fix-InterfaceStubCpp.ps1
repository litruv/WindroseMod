param(
    [string]$PrivateDir = ""
)


. (Join-Path $PSScriptRoot "ProjectRoot.ps1")
if (-not $PrivateDir) { $PrivateDir = Get-WindroseModR5PrivateDir }
$fixedAbility = 0
$fixedTags = 0

foreach ($file in (Get-ChildItem -Path $PrivateDir -Filter *.cpp -File)) {
    $content = Get-Content -Path $file.FullName -Raw
    $original = $content

    if ($content -match '(\w+)\* (\w+)::GetAbilitySystemComponent\(\) const') {
        $className = $Matches[2]
        $content = [regex]::Replace(
            $content,
            "$className\* $className::GetAbilitySystemComponent",
            "UAbilitySystemComponent* $className::GetAbilitySystemComponent"
        )
        $fixedAbility++
    }

    if ($content -match 'FGameplayTagContainer \w+::BP_GetOwnedGameplayTags') {
        $content = [regex]::Replace(
            $content,
            "(?ms)\r?\nFGameplayTagContainer \w+::BP_GetOwnedGameplayTags\(\) const\r?\n\{\r?\n\s*return FGameplayTagContainer\(\);\r?\n\}\r?\n?",
            "`n"
        )
        $fixedTags++
    }

    if ($content -ne $original) {
        Set-Content -Path $file.FullName -Value $content -NoNewline
    }
}

Write-Host "Fixed ability return types in $fixedAbility files; trimmed duplicate BP_GetOwnedGameplayTags in $fixedTags files."
