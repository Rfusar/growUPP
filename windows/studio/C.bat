@echo off
cls 
:ini
set /p pratica="Vuoi fare anche pratica? [Y/N]"

if "%pratica%" == "Y" (
    start code

) else if "%pratica%" == "N" (
    echo.

) else (
    call :ini
)

:start
cls
echo 1. C base
echo.
echo 2. esci
echo.
echo.

choice /c 12 /n /m "cosa vuoi studiare? "

if errorlevel 2 (
    cls

) else if errorlevel 2 (
    start msedge "https://youtu.be/87SH2Cn0s9A"
    
) else (
    goto :start
)