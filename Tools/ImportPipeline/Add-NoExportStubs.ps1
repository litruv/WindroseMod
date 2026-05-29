param(
    [string]$ProjectRoot = ""
)


. (Join-Path $PSScriptRoot "ProjectRoot.ps1")
if (-not $ProjectRoot) { $ProjectRoot = Get-WindroseModProjectRoot }
$roots = @(
    Join-Path $ProjectRoot "Source"
    Join-Path $ProjectRoot "Plugins"
)


. (Join-Path $PSScriptRoot "ProjectRoot.ps1")
if (-not $ProjectRoot) { $ProjectRoot = Get-WindroseModProjectRoot }
$classRx = 'UCLASS\([^)]*NoExport[^)]*\)\s*\r?\nclass\s+(?:\w+_API\s+)?(\w+)'
$added = 0
$skipped = 0
$already = 0

foreach ($root in $roots) {
    if (-not (Test-Path $root)) { continue }

    $headers = Get-ChildItem -Path $root -Recurse -Filter *.h -File | Where-Object { $_.FullName -match '\\Public\\' }
    foreach ($header in $headers) {
        $text = Get-Content -Path $header.FullName -Raw
        $m = [regex]::Match($text, $classRx)
        if (-not $m.Success) { continue }

        $className = $m.Groups[1].Value
        $stubName = "StaticRegisterNatives$className"

        $cppPath = $header.FullName -replace '\\Public\\', '\Private\' -replace '\.h$', '.cpp'
        if (-not (Test-Path $cppPath)) {
            $skipped++
            continue
        }

        $cpp = Get-Content -Path $cppPath -Raw
        if ($cpp -match [regex]::Escape($stubName)) {
            $already++
            continue
        }

        $includeLine = "#include `"$($header.BaseName).h`""
        if ($cpp -notmatch [regex]::Escape($includeLine)) {
            $cpp = "$includeLine`r`n$cpp"
        }

        $stub = "void $className::$stubName()`r`n{`r`n}`r`n`r`n"
        if ($cpp -match '(?m)^#include') {
            $lastInclude = [regex]::Matches($cpp, '(?m)^#include[^\r\n]*\r?\n') | Select-Object -Last 1
            if ($lastInclude) {
                $insertAt = $lastInclude.Index + $lastInclude.Length
                $cpp = $cpp.Insert($insertAt, "`r`n$stub")
            } else {
                $cpp = $stub + $cpp
            }
        } else {
            $cpp = $stub + $cpp
        }

        Set-Content -Path $cppPath -Value $cpp -NoNewline
        $added++
    }
}

Write-Host "Added NoExport stubs: $added (already had stub: $already, no cpp: $skipped)."
