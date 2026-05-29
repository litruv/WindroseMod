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
# UHT property registration requires public members (private/protected both fail in .gen.cpp).
$accessPattern = '(?m)^(private|protected):\r?\n((?:\s+UPROPERTY\([^\r\n]*\r?\n)+)'
$changed = 0

foreach ($root in $roots) {
    if (-not (Test-Path $root)) { continue }

    foreach ($file in (Get-ChildItem -Path $root -Recurse -Filter *.h -File)) {
        $text = Get-Content -Path $file.FullName -Raw
        if ($text -notmatch '(private|protected):\s*\r?\n\s+UPROPERTY\(') { continue }

        $newText = [regex]::Replace($text, $accessPattern, {
            param($m)
            $block = $m.Groups[2].Value
            if ($block -notmatch 'UPROPERTY\(') { return $m.Value }
            "public:`n$block"
        })


. (Join-Path $PSScriptRoot "ProjectRoot.ps1")
if (-not $ProjectRoot) { $ProjectRoot = Get-WindroseModProjectRoot }
        if ($newText -ne $text) {
            Set-Content -Path $file.FullName -Value $newText -NoNewline
            $changed++
        }
    }
}

Write-Host "Moved UPROPERTY blocks to public in $changed headers."
