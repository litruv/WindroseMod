@echo off
setlocal EnableExtensions

set "PROJECT_ROOT=%~dp0"
set "PROJECT_ROOT=%PROJECT_ROOT:~0,-1%"
set "PACK_SCRIPT=%PROJECT_ROOT%\Pack-WindroseMod.ps1"
set "GAME_EXE=C:\Program Files (x86)\Steam\steamapps\common\Windrose\R5\Binaries\Win64\Windrose-Win64-Shipping.exe"

REM Default: incremental cook (skip clean). Pass -clean for a full wipe of Saved\Cooked.
set "PACK_ARGS="
:ParseArgs
if "%~1"=="" goto ArgsDone
if /I "%~1"=="-clean" set "PACK_ARGS=-Clean"
shift
goto ParseArgs
:ArgsDone

if not exist "%PACK_SCRIPT%" goto ErrPackScript
if not exist "%GAME_EXE%" goto ErrGameExe

echo === Building mod pak and installing to LogicMods ===
powershell -NoProfile -ExecutionPolicy Bypass -File "%PACK_SCRIPT%" -InstallToLogicMods %PACK_ARGS%
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
echo ERROR: Game not found:
echo   %GAME_EXE%
echo Edit GAME_EXE in this .bat if Windrose is installed elsewhere.
pause
exit /b 1

:ErrBuild
echo.
echo Build failed. Game not launched.
pause
exit /b 1
