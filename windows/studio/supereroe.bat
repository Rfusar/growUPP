@echo off
:ini
cls
echo 1. linux
echo 2. etichal hacker
echo.
echo.
echo 3. esci
echo.
echo.
set /p n=": "

if "%n%" == "3" (
    cls

) else if "%n%" == "2" (
    start msedge "https://youtube.com/playlist?list=PLKZZXjqZrqQtKGgJuAYhzYczf1KIdswvO&si=T-B0_NzU2Q1yEG3D"
    
) else if "%n%" == "1" (
    start msedge "https://youtube.com/playlist?list=PLKZZXjqZrqQvfAhgY7Nit5ynpK3kN_3tx&si=C4SkxLHFLgJ8VrxA"
    
) else (
    goto :ini
)