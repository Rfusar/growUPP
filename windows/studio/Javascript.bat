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
echo.
echo ***************************
echo.
echo BUONE PRATICHE
echo.
echo 4. JavaScript Pro Tips - Code This, NOT That
echo.
echo.
echo 5. esci
echo.
echo.

choice /c 12345 /n /m "Cosa vuoi studiare? "

if errorlevel 5 (
    cls
  
) else if errorlevel 4 (
    start msedge "https://youtu.be/Mus_vwhTCq0?si=RGM8rcDC6J0chgk2"

)  else if errorlevel 3 (
    start msedge "https://youtube.com/playlist?list=PL0qAPtx8YtJceyk5_NpNvLbbkrmfX9kkw"

) else if errorlevel 2 (
    start msedge "https://youtube.com/playlist?list=PLillGF-RfqbbnEGy3ROiLWk7JMCuSyQtX"
 
) else if errorlevel 1 (
    start msedge "https://youtu.be/8dWL3wF_OMw"
   
) else (
    goto :start
)


