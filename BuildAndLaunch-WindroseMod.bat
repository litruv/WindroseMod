@echo off
setlocal EnableExtensions

set "PROJECT_ROOT=%~dp0"
set "PROJECT_ROOT=%PROJECT_ROOT:~0,-1%"
set "PACK_SCRIPT=%PROJECT_ROOT%\Pack-WindroseMod.ps1"
set "CONFIG_SCRIPT=%PROJECT_ROOT%\Get-WindroseModConfig.ps1"

for /f "tokens=*" %%a in ('powershell -NoProfile -ExecutionPolicy Bypass -File "%CONFIG_SCRIPT%" -EmitBatVars') do %%a

REM Default: incremental cook (skip clean). Pass -clean for a full wipe of Saved\Cooked.
set "PACK_ARGS="
:ParseArgs
if "%~1"=="" goto ArgsDone
if /I "%~1"=="-clean" set "PACK_ARGS=-Clean"
shift
goto ParseArgs
:ArgsDone

if not exist "%PACK_SCRIPT%" goto ErrPackScript
if not exist "%CONFIG_SCRIPT%" goto ErrConfigScript

for /f "usebackq delims=" %%G in (`powershell -NoProfile -ExecutionPolicy Bypass -Command ". '%PROJECT_ROOT%\Resolve-WindroseGameExe.ps1'; Resolve-WindroseGameExe -ProjectRoot '%PROJECT_ROOT%'"`) do set "GAME_EXE=%%G"

if not exist "%GAME_EXE%" goto ErrGameExe

echo === Building mod pak and installing to LogicMods (pak: %WINDROSE_PAK_BASENAME%) ===
powershell -NoProfile -ExecutionPolicy Bypass -File "%PACK_SCRIPT%" -InstallToLogicMods %PACK_ARGS%
if errorlevel 1 goto ErrBuild

echo.
echo === Launching Windrose ===
start "" "%GAME_EXE%"
echo Started. Check UE4SS console for BPModLoaderMod / %WINDROSE_PAK_BASENAME%.
exit /b 0

:ErrPackScript
echo ERROR: Pack script not found: %PACK_SCRIPT%
pause
exit /b 1

:ErrConfigScript
echo ERROR: Config script not found: %CONFIG_SCRIPT%
echo Create config.ini in the project root.
pause
exit /b 1

:ErrGameExe
echo ERROR: Could not find Windrose. Set GameExe in config.ini
pause
exit /b 1

:ErrBuild
echo.
echo Build failed. Game not launched.
pause
exit /b 1
