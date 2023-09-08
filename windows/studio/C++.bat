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
echo 1. C++ base
echo 2. GUI
echo 3. project...
echo.
echo 4. esci
echo.
echo.

choice /c 1234 /n /m "Cosa uoi studiare?"

if errorlevel 4 (
    cls

) else if errorlevel 3 (
    start msedge "https://youtube.com/playlist?list=PLRJuRxIsYMUX3iSmvyWPdKFaCooL455YQ"

) else if errorlevel 2 (
    start msedge "https://youtube.com/playlist?list=PLFk1_lkqT8MbVOcwEppCPfjGOGhLvcf9G"
   
) else if errorlevel 1 (
    start msedge "https://youtu.be/-TkoO8Z07hI"

) else (
    goto :start
)
