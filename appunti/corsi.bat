@echo off
:ini
cls
echo 1. MIEI APPUNTI
echo.
echo.
echo 2. universita
echo.
echo.
echo.
echo.
echo 3. esci
echo.
set /p n=": "

if "%n%" == "1" (
    call appunti\appunti.bat

) else if "%n%" == "2" (
    call appunti\math.bat

) else if "%n%" == "3" (
    cls

) else (
    goto :ini
)
