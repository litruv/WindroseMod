param(
    [string]$PublicDir = "",
    [string]$PrivateDir = ""
)

. (Join-Path $PSScriptRoot "ProjectRoot.ps1")
if (-not $PublicDir) { $PublicDir = Get-WindroseModR5PublicDir }
if (-not $PrivateDir) { $PrivateDir = Get-WindroseModR5PrivateDir }

if (-not (Test-Path $PrivateDir)) {
    New-Item -ItemType Directory -Path $PrivateDir | Out-Null
}

$tagDecl = "    virtual void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override;"
$created = 0

foreach ($header in (Get-ChildItem -Path $PublicDir -Filter *.h -File)) {
    $content = Get-Content -Path $header.FullName -Raw
    if ($content -notmatch 'IGameplayTagAssetInterface') { continue }
    if ($content -notmatch 'BP_GetOwnedGameplayTags') { continue }

    $classMatch = [regex]::Match($content, 'class\s+R5_API\s+(\w+)')
    if (-not $classMatch.Success) { continue }
    $className = $classMatch.Groups[1].Value

    $lines = Get-Content -Path $header.FullName
    if ($lines -notcontains $tagDecl) {
        $out = New-Object System.Collections.Generic.List[string]
        $done = $false
        foreach ($line in $lines) {
            $out.Add($line) | Out-Null
            if (-not $done -and $line -match '^\s*GENERATED_BODY\(\)') {
                $out.Add("public:") | Out-Null
                $out.Add($tagDecl) | Out-Null
                $done = $true
            }
        }
        if ($done) {
            Set-Content -Path $header.FullName -Value $out
        }
    }

    $cppPath = Join-Path $PrivateDir ($header.BaseName + ".cpp")
    $cpp = @"
#include "$($header.BaseName).h"

void $className::GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const
{
    TagContainer = BP_GetOwnedGameplayTags();
}

FGameplayTagContainer $className::BP_GetOwnedGameplayTags() const
{
    return FGameplayTagContainer();
}

"@
    Set-Content -Path $cppPath -Value $cpp
    $created++
}

Write-Host "Added gameplay tag stubs for $created classes."
