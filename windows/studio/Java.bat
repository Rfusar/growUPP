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
echo.
echo 1. Java base
echo 2. GUI
echo. 
echo 3. esci
echo.
echo.

choice /c 123 /n /m ": "

if errorlevel 3 (
    cls
 
) else if errorlevel 2 (
    start msedge "https://youtu.be/Kmgo00avvEw"

) else if errorlevel 1 (
   start msedge "https://youtu.be/xk4_1vDrzzo"

) else (
    goto :start
)

