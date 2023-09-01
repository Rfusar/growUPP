@echo off

:docPowershell
cls
echo.
echo per vedere Video 'Powershell -video'
echo.
echo.

set /p doc="Vuoi vedere gli appunti? [Y/N]  "
if "!doc!" == "Y" (
    cls
    powershell -NoProfile -ExecutionPolicy Bypass -Command "Start-Process powershell -ArgumentList '-NoExit' -Verb RunAs"
    pause
    Powershell -file windows\studio\power.ps1

) else if "!doc!" == "N" (
    start msedge "https://learn.microsoft.com/en-us/powershell/scripting/learn/ps101/05-formatting-aliases-providers-comparison?view=powershell-5.1"

) else if "!doc!" == "Powershell -video" (
    start msedge "https://youtu.be/-zDXTLiX_wk?si=FuSYCFk7xU-hVu2N"

) else (
    goto :docPowershell
)