param(
    [string]$PrivateDir = ""
)


. (Join-Path $PSScriptRoot "ProjectRoot.ps1")
if (-not $PrivateDir) { $PrivateDir = Get-WindroseModR5PrivateDir }
# Only remove stubs that omit the return type (line begins with Class::Method, not Class::Class ctor).
$badRx = '(?ms)^[ \t]*([A-Z][A-Za-z0-9_]*)::(?!~)(?!\1\b)[A-Za-z0-9_]+\([^;{]*\)(?:\s*const)?\s*\r?\n\{\r?\n\}\r?\n'
$removed = 0

foreach ($file in (Get-ChildItem -Path $PrivateDir -Filter *.cpp -File)) {
    $cpp = Get-Content -Path $file.FullName -Raw
    $count = ([regex]::Matches($cpp, $badRx)).Count
    if ($count -eq 0) { continue }
    $cpp = [regex]::Replace($cpp, $badRx, '')
    Set-Content -Path $file.FullName -Value $cpp -NoNewline
    $removed += $count
}

Write-Host "Removed $removed malformed method stub blocks."
