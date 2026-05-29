param(
    [string]$LogPath = "",
    [string]$ModuleRoot = ""
)


. (Join-Path $PSScriptRoot "ProjectRoot.ps1")
if (-not $ModuleRoot) { $ModuleRoot = Get-WindroseModR5ModuleRoot }
if (-not $LogPath) { $LogPath = Get-WindroseModImportLog 'build-continue52.log' }
$publicDir = Join-Path $ModuleRoot "Public"
$privateDir = Join-Path $ModuleRoot "Private"
$replRx = 'GetLifetimeReplicatedProps@(\w+)@@'
$wantedRepl = [System.Collections.Generic.HashSet[string]]::new()
foreach ($line in Get-Content -Path $LogPath) {
    if ($line -match $replRx) { [void]$wantedRepl.Add($Matches[1]) }
}

$headers = Get-ChildItem -Path $publicDir -Filter *.h -File
$headerByClass = @{}
$uclassHeaderRx = 'UCLASS\s*\((?:[^()]|\([^()]*\))*\)\s*\r?\nclass\s+(?:\w+_API\s+)?(\w+)'
foreach ($h in $headers) {
    $text = Get-Content -Path $h.FullName -Raw
    foreach ($m in [regex]::Matches($text, $uclassHeaderRx)) {
        $headerByClass[$m.Groups[1].Value] = $h
    }
}

$replAdded = 0

foreach ($className in $wantedRepl) {
    if (-not $headerByClass.ContainsKey($className)) { continue }
    $header = $headerByClass[$className]
    $cppPath = Join-Path $privateDir ($header.BaseName + ".cpp")
    $stub = @"

void $className::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
}

"@
    if (Test-Path $cppPath) {
        $cpp = Get-Content -Path $cppPath -Raw
        if ($cpp -match [regex]::Escape("$className::GetLifetimeReplicatedProps")) { continue }
        if ($cpp -notmatch '#include\s+"Net/UnrealNetwork\.h"') {
            $cpp = "#include `"Net/UnrealNetwork.h`"`r`n" + $cpp
        }
        $cpp = $cpp.TrimEnd() + "`r`n" + $stub
    } else {
        $cpp = "#include `"$($header.BaseName).h`"`r`n#include `"Net/UnrealNetwork.h`"`r`n" + $stub
    }
    Set-Content -Path $cppPath -Value $cpp -NoNewline
    $replAdded++
}

Write-Host "Added GetLifetimeReplicatedProps stubs: $replAdded"
