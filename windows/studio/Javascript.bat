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
echo 1. Javascript generale
echo 2. vanilla Javascript
echo 3. ES6
echo.
echo 4. esci
echo.
echo.

choice /c 1234 /n /m "Cosa vuoi studiare? "

if errorlevel 4 (
    cls
  
) else if errorlevel 3 (
    start msedge "https://youtube.com/playlist?list=PL0qAPtx8YtJceyk5_NpNvLbbkrmfX9kkw"

) else if errorlevel 2 (
    start msedge "https://youtube.com/playlist?list=PLillGF-RfqbbnEGy3ROiLWk7JMCuSyQtX"
 
) else if errorlevel 1 (
    start msedge "https://youtu.be/8dWL3wF_OMw"
   
) else (
    goto :start
)


