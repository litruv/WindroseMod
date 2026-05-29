@echo off
setlocal EnableDelayedExpansion

set "PROJECT_ROOT=%~dp0"
set "PROJECT_ROOT=%PROJECT_ROOT:~0,-1%"
set "LAUNCHER_INSTALLED=%ProgramData%\Epic\UnrealEngineLauncher\LauncherInstalled.dat"

set "PROJECT_PATH="
for %%F in ("%PROJECT_ROOT%\*.uproject") do (
    set "PROJECT_PATH=%%~fF"
    goto :found_project
)
echo ERROR: No .uproject in %PROJECT_ROOT%
pause
exit /b 1

:found_project
for %%N in ("%PROJECT_PATH%") do set "PROJECT_NAME=%%~nN"

for /f "usebackq delims=" %%a in (`powershell -NoProfile -Command "$j = Get-Content -Raw -LiteralPath '%PROJECT_PATH%' | ConvertFrom-Json; $j.EngineAssociation"`) do set "ENGINE_VERSION=%%a"

for /f "usebackq delims=" %%a in (`powershell -NoProfile -Command "$j = Get-Content -Raw -LiteralPath '%LAUNCHER_INSTALLED%' | ConvertFrom-Json; $app = if ('%ENGINE_VERSION%' -match '^\d') { 'UE_%ENGINE_VERSION%' } else { '%ENGINE_VERSION%' }; ($j.InstallationList | Where-Object AppName -eq $app | Select-Object -First 1).InstallLocation"`) do set "ENGINE_PATH=%%a"

if not defined ENGINE_PATH (
    if defined UE_ROOT (
        set "ENGINE_PATH=%UE_ROOT%"
    ) else (
        echo ERROR: Could not find UE %ENGINE_VERSION%. Install via Epic Launcher or set UE_ROOT.
        pause
        exit /b 1
    )
)

if not exist "%ENGINE_PATH%\Engine\Build\BatchFiles\Build.bat" (
    echo ERROR: Engine not found at: %ENGINE_PATH%
    pause
    exit /b 1
)

for /f "usebackq delims=" %%m in (`powershell -NoProfile -Command "$j = Get-Content -Raw -LiteralPath '%PROJECT_PATH%' | ConvertFrom-Json; ($j.Modules | Select-Object -First 1).Name"`) do set "PROJECT_MODULE=%%m"

echo === Building %PROJECT_MODULE%Editor ===
call "%ENGINE_PATH%\Engine\Build\BatchFiles\Build.bat" -Project="%PROJECT_PATH%" -Target="%PROJECT_MODULE%Editor" Win64 Development
if errorlevel 1 (
    echo Build failed.
    pause
    exit /b 1
)

echo === Launching editor ===
start "" "%PROJECT_PATH%"
exit /b 0
