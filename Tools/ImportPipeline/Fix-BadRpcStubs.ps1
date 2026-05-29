param(
    [string]$PrivateDir = ""
)


. (Join-Path $PSScriptRoot "ProjectRoot.ps1")
if (-not $PrivateDir) { $PrivateDir = Get-WindroseModR5PrivateDir }
$removed = 0
$badRx = '(?ms)^void ([A-Z]\w+)\(([^)]*)\)\r?\n\{\r?\n\}\r?\n'
foreach ($cpp in Get-ChildItem -Path $PrivateDir -Filter *.cpp -File) {
    $text = Get-Content -Path $cpp.FullName -Raw
    if ($text -notmatch $badRx) { continue }
    $base = [System.IO.Path]::GetFileNameWithoutExtension($cpp.Name)
    $newText = $text
    foreach ($m in [regex]::Matches($text, $badRx)) {
        $fn = $m.Groups[1].Value
        if ($fn -match '_Implementation$') { continue }
        if ($text -match "\b\w+::$fn\s*\(") { continue }
        $newText = $newText.Replace($m.Value, '')
        $removed++
    }
    if ($newText -ne $text) {
        Set-Content -Path $cpp.FullName -Value $newText -NoNewline
    }
}
Write-Host "Removed $removed malformed RPC stub blocks."
