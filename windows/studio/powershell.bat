@echo off

:docPowershell
cls
echo.
echo 1. base
echo 2. active directory
echo 3. documentazione microsoft
echo.
echo 4. esci
echo.

set /p doc="Scegli: "
if "%doc%" == "4" (
    cls

) else if "%doc%" == "3" (
    start msedge "https://learn.microsoft.com/en-us/powershell/scripting/learn/ps101/05-formatting-aliases-providers-comparison?view=powershell-5.1"

) else if "%doc%" == "2" (
    start msedge "https://youtu.be/-zDXTLiX_wk?si=W4tFO9cfDD2afTQL"    

) else if "%doc%" == "1" (
    start msedge "https://youtu.be/ZOoCaWyifmI?si=J9DzC5dkn4DV5y_M"

) else (
    goto :docPowershell
)