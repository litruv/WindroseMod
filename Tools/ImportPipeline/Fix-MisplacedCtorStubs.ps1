param(
    [string]$ModuleRoot = ""
)


. (Join-Path $PSScriptRoot "ProjectRoot.ps1")
if (-not $ModuleRoot) { $ModuleRoot = Get-WindroseModR5ModuleRoot }
$publicDir = Join-Path $ModuleRoot "Public"
$privateDir = Join-Path $ModuleRoot "Private"
$uclassRx = 'UCLASS\s*\((?:[^()]|\([^()]*\))*\)\s*\r?\nclass\s+(?:\w+_API\s+)?(\w+)'
$totalRemoved = 0

foreach ($header in (Get-ChildItem -Path $publicDir -Filter *.h -File)) {
    $text = Get-Content -Path $header.FullName -Raw
    $allowed = @([regex]::Matches($text, $uclassRx) | ForEach-Object { $_.Groups[1].Value })
    if ($allowed.Count -eq 0) { continue }

    $cppPath = Join-Path $privateDir ($header.BaseName + ".cpp")
    if (-not (Test-Path $cppPath)) { continue }

    $lines = @(Get-Content -Path $cppPath)
    $out = New-Object System.Collections.Generic.List[string]
    $fileRemoved = 0
    $i = 0
    while ($i -lt $lines.Count) {
        $line = $lines[$i]
        $m = [regex]::Match($line, '^\s*(\w+)::(\w+)\s*\(')
        if ($m.Success -and $m.Groups[1].Value -eq $m.Groups[2].Value -and ($allowed -notcontains $m.Groups[1].Value)) {
            $i++
            while ($i -lt $lines.Count -and $lines[$i] -notmatch '\}') { $i++ }
            if ($i -lt $lines.Count) { $i++ }
            $fileRemoved++
            continue
        }
        [void]$out.Add($line)
        $i++
    }

    if ($fileRemoved -gt 0) {
        $content = ($out -join "`r`n")
        if ($content.Length -gt 0) { $content += "`r`n" }
        Set-Content -Path $cppPath -Value $content -NoNewline
        $totalRemoved += $fileRemoved
    }
}

Write-Host "Removed $totalRemoved misplaced constructor stubs."
