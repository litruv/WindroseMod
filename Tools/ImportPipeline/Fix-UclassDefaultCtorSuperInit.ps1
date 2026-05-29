param(
    [string]$ModuleRoot = ""
)


. (Join-Path $PSScriptRoot "ProjectRoot.ps1")
if (-not $ModuleRoot) { $ModuleRoot = Get-WindroseModR5ModuleRoot }
$publicDir = Join-Path $ModuleRoot "Public"
$privateDir = Join-Path $ModuleRoot "Private"
$fixed = 0

$uclassRx = 'UCLASS\([^)]*\)\s*\r?\nclass\s+(?:\w+_API\s+)?(\w+)\s*:\s*public\s+(\w+)'
$foiSuperInitBases = @(
    'UUserWidget', 'UListView', 'UTileView', 'UWidget',
    'UAITask', 'UAITask_MoveTo'
)


. (Join-Path $PSScriptRoot "ProjectRoot.ps1")
if (-not $ModuleRoot) { $ModuleRoot = Get-WindroseModR5ModuleRoot }
foreach ($header in (Get-ChildItem -Path $publicDir -Filter *.h -File)) {
    $text = Get-Content -Path $header.FullName -Raw
    $m = [regex]::Match($text, $uclassRx)
    if (-not $m.Success) { continue }

    $className = $m.Groups[1].Value
    $baseName = $m.Groups[2].Value
    if ($foiSuperInitBases -notcontains $baseName) { continue }
    if ($text -match [regex]::Escape("$className(const FObjectInitializer")) { continue }
    if ($text -notmatch [regex]::Escape("$className()")) { continue }

    $cppPath = Join-Path $privateDir ($header.BaseName + ".cpp")
    if (-not (Test-Path $cppPath)) { continue }

    $cpp = Get-Content -Path $cppPath -Raw
    $plainOld = "$className::$className()`r`n{`r`n}"
    $plainNew = "$className::$className()`r`n    : Super(FObjectInitializer::Get())`r`n{`r`n}"
    if ($cpp -notlike "*$plainOld*") { continue }

    $cpp = $cpp.Replace($plainOld, $plainNew)
    Set-Content -Path $cppPath -Value $cpp -NoNewline
    $fixed++
}

Write-Host "Fixed default ctor Super init for $fixed classes."
