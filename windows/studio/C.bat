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
echo 2. pointer
echo.
echo 3. esci
echo.
echo.

choice /c 123 /n /m ": "

if errorlevel 3 (
    cls

) else if errorlevel 2 (
    start msedge "https://youtu.be/zuegQmMdy8M?si=-GIMiPqH72o2d6V5"
    
) else if errorlevel 1 (
    start msedge "https://youtu.be/Bz4MxDeEM6k?si=J_YPBNmXu5rS_Wll"
    
) else (
    goto :start
)