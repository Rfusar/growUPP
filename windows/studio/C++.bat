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

:ini1
cls
echo.
echo 1. C++ base
echo 2. GUI
echo 3. project...
echo 4. documentazione
echo 5. pointer
echo 6. OOP
echo.
echo ****************************
echo.
echo 7. come funziona la CPU con C++...
echo.
echo.
echo.
echo 8. esci
echo.
echo.

choice /c 12345678 /n /m ": "

if errorlevel 8 (
    cls

) else if errorlevel 7 (
    start msedge "https://youtu.be/qJgsuQoy9bc?si=4APGIB_8tm5xuuRz"	


) else if errorlevel 6 (
    start msedge "https://youtu.be/0NwsayeOsd4?si=ieY3PiIEfcBKK4UZ"

) else if errorlevel 5 (
    start msedge "https://youtu.be/zuegQmMdy8M?si=-GIMiPqH72o2d6V5"

) else if errorlevel 4 (
    start msedge "https://devdocs.io/cpp/"

) else if errorlevel 3 (
    start msedge "https://youtube.com/playlist?list=PLRJuRxIsYMUX3iSmvyWPdKFaCooL455YQ"

) else if errorlevel 2 (
    start msedge "https://youtube.com/playlist?list=PLFk1_lkqT8MbVOcwEppCPfjGOGhLvcf9G"
   
) else if errorlevel 1 (
    start msedge "https://youtu.be/P2jVybFyh3A?si=U5Il3JGQPu6vZi-S"

) else (
    goto :ini1
)
