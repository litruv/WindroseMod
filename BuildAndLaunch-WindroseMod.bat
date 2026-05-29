@echo off
setlocal EnableExtensions

set "PROJECT_ROOT=%~dp0"
set "PROJECT_ROOT=%PROJECT_ROOT:~0,-1%"
set "PACK_SCRIPT=%PROJECT_ROOT%\Pack-WindroseMod.ps1"
set "RESOLVE_GAME=%PROJECT_ROOT%\Resolve-WindroseGameExe.ps1"

REM UE4SS mod id / pak base name (must match config.lua Mods["..."] key)
set "PAK_BASENAME=windrosemod"

REM Default: incremental cook (skip clean). Pass -clean for a full wipe of Saved\Cooked.
set "PACK_ARGS="
:ParseArgs
if "%~1"=="" goto ArgsDone
if /I "%~1"=="-clean" set "PACK_ARGS=-Clean"
shift
goto ParseArgs
:ArgsDone

if not exist "%PACK_SCRIPT%" goto ErrPackScript

for /f "usebackq delims=" %%G in (`powershell -NoProfile -ExecutionPolicy Bypass -Command ". '%RESOLVE_GAME%'; Resolve-WindroseGameExe"`) do set "GAME_EXE=%%G"

if not exist "%GAME_EXE%" goto ErrGameExe

echo === Building mod pak and installing to LogicMods (pak name: %PAK_BASENAME%) ===
powershell -NoProfile -ExecutionPolicy Bypass -File "%PACK_SCRIPT%" -InstallToLogicMods -PakBaseName "%PAK_BASENAME%" %PACK_ARGS%
if errorlevel 1 goto ErrBuild

echo.
echo === Launching Windrose ===
start "" "%GAME_EXE%"
echo Started. Check UE4SS console for BPModLoaderMod / windrosemod.
exit /b 0

:ErrPackScript
echo ERROR: Pack script not found: %PACK_SCRIPT%
pause
exit /b 1

:ErrGameExe
echo ERROR: Could not find Windrose. Set WINDROSE_GAME_EXE to Windrose-Win64-Shipping.exe
pause
exit /b 1

:ErrBuild
echo.
echo Build failed. Game not launched.
pause
exit /b 1
