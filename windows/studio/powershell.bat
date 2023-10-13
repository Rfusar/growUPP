@echo off

:docPowershell
cls
echo.
echo 1. base
echo 2. active directory
echo 3. documentazione microsoft
echo 4. base_2
echo 5. GUI
echo.
echo.
echo # appunti
echo.
echo.
echo.
echo.
echo 6. esci
echo.
echo.
echo.

set /p doc=": "

if "%doc%" == "6" (
    cls

) else if "%doc%" == "5" (
    start msedge "https://youtube.com/playlist?list=PLnK11SQMNnE5_cl8n54h6OXNMnGl5Odtq&si=aI18J93ZmnkvuqLr"
    
) else if "%doc%" == "appunti" (
    call appunti\powershellBATCH.bat

) else if "%doc%" == "4" (
    start msedge "https://youtube.com/playlist?list=PLlVtbbG169nFq_hR7FcMYg32xsSAObuq8&si=5yEMjmCU061vO8FU"
    
) else if "%doc%" == "3" (
    start msedge C:\Users\Utente\Desktop\info\powershell-scripting-powershell-5.1.pdf

) else if "%doc%" == "2" (
    start msedge "https://youtu.be/-zDXTLiX_wk?si=W4tFO9cfDD2afTQL"    

) else if "%doc%" == "1" (
    start msedge "https://youtu.be/ZOoCaWyifmI?si=J9DzC5dkn4DV5y_M"

) else (
    goto :docPowershell
)
