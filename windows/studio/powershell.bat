@echo off

:docPowershell
cls
echo.
echo 1. Video 'Powershell '
echo 2. appunti(su file .ps1)
echo 3. pagina microsoft
echo.
echo 4. esci
echo.

set /p doc="Scegli: "
if "!doc!" == "4" (
    cls

) else if "!doc!" == "3" (
    cls
    powershell -NoProfile -ExecutionPolicy Bypass -Command "Start-Process powershell -ArgumentList '-NoExit' -Verb RunAs"
    pause
    Powershell -file windows\studio\power.ps1

) else if "!doc!" == "2" (
    start msedge "https://learn.microsoft.com/en-us/powershell/scripting/learn/ps101/05-formatting-aliases-providers-comparison?view=powershell-5.1"

) else if "!doc!" == "1" (
    start msedge "https://youtu.be/-zDXTLiX_wk?si=FuSYCFk7xU-hVu2N"

) else (
    goto :docPowershell
)