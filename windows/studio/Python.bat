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
:inizio
cls
echo.
echo 1. flask
echo 2. OOP
echo 3. django
echo 4. selenium --interazioni con pagine web
echo.
echo 5. esci
echo.
echo.

choice /c 12345 /n /m "Cosa vuoi studiare? "


if errorlevel 5 (
    cls

) else if errorlevel 4 (
    start msedge "https://youtube.com/playlist?list=PLzMcBGfZo4-n40rB1XaJ0ak1bemvlqumQ"

) else if errorlevel 3 (
    start msedge "https://youtu.be/F5mRW0jo-U4"

) else if errorlevel 2 (
    start msedge "https://youtu.be/JeznW_7DlB0"
     
)  else if errorlevel 1 (
    start msedge "https://youtu.be/Qr4QMBUPxWo"
    
) else (
    goto :inizio
)

