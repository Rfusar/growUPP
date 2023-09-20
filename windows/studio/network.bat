@echo off 
:ini
cls
echo.
echo 1. networking
echo 2. protocolli --wikipedia
echo.
echo 3. esci
echo.
echo.
choice /c 123 /n /m ": "

if errorlevel 3 (
    cls
) else if errorlevel 2 (
    start msedge "https://it.wikipedia.org/wiki/Protocollo_di_rete"

) else if errorlevel 1 (
    start msedge "https://youtu.be/xmpYfyNmWbw"

) else (
    goto:ini
)