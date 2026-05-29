@echo off
setlocal EnableExtensions
set "SCRIPT=%~dp0Cleanup-WindroseModProject.ps1"

if "%~1"=="" (
    echo Preview only. Re-run with -Clean to apply.
    powershell -NoProfile -ExecutionPolicy Bypass -File "%SCRIPT%" -WhatIf
) else (
    powershell -NoProfile -ExecutionPolicy Bypass -File "%SCRIPT%" %*
)

pause
