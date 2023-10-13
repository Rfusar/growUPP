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
echo 5. EXCEL
echo 6. data anayist
echo.
echo *********************************************
echo.
echo BUONE PRATICHE
echo.
echo 7. 50 Python Tips and Tricks for Beginners
echo 8. 10 Python Tips and Tricks For Writing Better Code
echo.
echo 9. esci
echo.


set /p n="Cosa vuoi studiare? "


if "%n%" == "9" (
    cls

) else if "%n%" == "8" (
    start msedge "https://youtu.be/C-gEQdGVXbk?si=CqXyjHxB-hWFPtdY"

) else if "%n%" == "7" (
    start msedge "https://youtu.be/F3T8tg2tVKM?si=WUPBe10BeoEJ-KAj"

) else if "%n%" == "6" (
    start msedge "https://youtu.be/1PAy6d16ADQ?si=vYn1_94H2-bP10cQ"

) else if "%n%" == "5" (
    start msedge "https://youtube.com/playlist?list=PLQ_2ttwmRlIirJXyymxKqODisk0ocKGFv&si=VJqsfbDqYwoeTeTi"

) else if "%n%" == "4" (
    start msedge "https://youtube.com/playlist?list=PLzMcBGfZo4-n40rB1XaJ0ak1bemvlqumQ"

) else if "%n%" == "3" (
    start msedge "https://youtu.be/F5mRW0jo-U4"

) else if "%n%" == "2" (
    start msedge "https://youtu.be/JeznW_7DlB0"
     
)  else if "%n%" == "1" (
    start msedge "https://youtu.be/Qr4QMBUPxWo"
    
) else (
    goto :inizio
)

