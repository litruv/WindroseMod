@echo off
setlocal EnableExtensions

cd /d "%~dp0"

REM Args: -clean (full recook), -NoLaunch (pack only, no game)
powershell -NoProfile -ExecutionPolicy Bypass -File "%~dp0BuildAndLaunch-WindroseMod.ps1" %*
set "EXITCODE=%ERRORLEVEL%"

if %EXITCODE% neq 0 (
    echo.
    echo Build failed ^(exit %EXITCODE%^). See errors above.
    pause
    exit /b %EXITCODE%
)

exit /b 0
