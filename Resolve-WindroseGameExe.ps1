function Resolve-WindroseGameExe {
    param(
        [string]$GameExe = "",
        [string]$ProjectRoot = ""
    )

    if (-not $GameExe -and $ProjectRoot) {
        $configScript = Join-Path $ProjectRoot "Get-WindroseModConfig.ps1"
        if (Test-Path -LiteralPath $configScript) {
            . $configScript
            $cfg = Get-WindroseModConfig -ProjectRoot $ProjectRoot
            if ($cfg.GameExe) { $GameExe = $cfg.GameExe }
        }
    }

    if ($GameExe) {
        if (Test-Path -LiteralPath $GameExe) { return (Resolve-Path -LiteralPath $GameExe).Path }
        throw "Game exe not found: $GameExe"
    }

    if ($env:WINDROSE_GAME_EXE) {
        if (Test-Path -LiteralPath $env:WINDROSE_GAME_EXE) {
            return (Resolve-Path -LiteralPath $env:WINDROSE_GAME_EXE).Path
        }
    }

    $rel = "common\Windrose\R5\Binaries\Win64\Windrose-Win64-Shipping.exe"
    $steamRoots = @(
        (Join-Path ${env:ProgramFiles(x86)} "Steam\steamapps")
        (Join-Path $env:ProgramFiles "Steam\steamapps")
    )

    foreach ($root in $steamRoots) {
        $direct = Join-Path $root $rel
        if (Test-Path -LiteralPath $direct) { return (Resolve-Path -LiteralPath $direct).Path }

        $vdf = Join-Path $root "libraryfolders.vdf"
        if (-not (Test-Path -LiteralPath $vdf)) { continue }

        $text = Get-Content -Raw -LiteralPath $vdf
        foreach ($m in [regex]::Matches($text, '"path"\s+"([^"]+)"')) {
            $lib = $m.Groups[1].Value -replace '\\\\', '\'
            $candidate = Join-Path $lib "steamapps\$rel"
            if (Test-Path -LiteralPath $candidate) { return (Resolve-Path -LiteralPath $candidate).Path }
        }
    }

    throw @"
Could not find Windrose-Win64-Shipping.exe.
Set GameExe in config.ini (or config.local.ini), or WINDROSE_GAME_EXE, or install Windrose on Steam.
"@
}
