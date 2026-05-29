param(
    [string]$PublicDir = ""
)


. (Join-Path $PSScriptRoot "ProjectRoot.ps1")
if (-not $PublicDir) { $PublicDir = Get-WindroseModR5PublicDir }
$ability = "    virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;"
$tags = "    virtual void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override;"
$fixed = 0

foreach ($file in (Get-ChildItem -Path $PublicDir -Filter *.h -File)) {
    $lines = [System.Collections.Generic.List[string]]@(Get-Content -Path $file.FullName)
    $changed = $false

    for ($i = 0; $i -lt $lines.Count; $i++) {
        $decl = $null
        if ($lines[$i] -eq $ability) { $decl = $ability }
        elseif ($lines[$i] -eq $tags) { $decl = $tags }
        else { continue }

        if ($i + 1 -ge $lines.Count -or $lines[$i + 1] -notmatch "GENERATED_BODY") { continue }

        $lines.RemoveAt($i)
        $genIdx = $i
        $insertAt = $genIdx + 1
        if ($insertAt -lt $lines.Count -and $lines[$insertAt] -eq "public:") {
            $insertAt++
        } else {
            $lines.Insert($insertAt, "public:")
            $insertAt++
        }
        $lines.Insert($insertAt, $decl)
        $changed = $true
        $i = $insertAt
    }

    if ($changed) {
        Set-Content -Path $file.FullName -Value $lines
        $fixed++
    }
}

Write-Host "Fixed GENERATED_BODY order in $fixed files."
