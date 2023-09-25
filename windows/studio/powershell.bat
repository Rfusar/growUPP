@echo off

:docPowershell
cls
echo.
echo 1. base
echo 2. active directory
echo 3. documentazione microsoft
echo 4. base_2
echo.
echo.
echo # appunti
echo.
echo.
echo.
echo.
echo 5. esci
echo.
echo.
echo.

set /p doc=": "

if "%doc%" == "5" (
    cls

) else if "%doc%" == "appunti" (
    call appunti\powershellBATCH.bat

) else if "%doc%" == "4" (
    start msedge "https://youtube.com/playlist?list=PLlVtbbG169nFq_hR7FcMYg32xsSAObuq8&si=5yEMjmCU061vO8FU"
    
) else if "%doc%" == "3" (
    start msedge "https://learn.microsoft.com/en-us/powershell/scripting/learn/ps101/05-formatting-aliases-providers-comparison?view=powershell-5.1"

) else if "%doc%" == "2" (
    start msedge "https://youtu.be/-zDXTLiX_wk?si=W4tFO9cfDD2afTQL"    

) else if "%doc%" == "1" (
    start msedge "https://youtu.be/ZOoCaWyifmI?si=J9DzC5dkn4DV5y_M"

) else (
    goto :docPowershell
)