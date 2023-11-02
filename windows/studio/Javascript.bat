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
echo.
echo.
echo.
echo 3. React
echo 4. Angular
echo.
echo ***************************
echo.
echo BUONE PRATICHE
echo.
echo 5. JavaScript Pro Tips - Code This, NOT That
echo.
echo.
echo 6. esci
echo.
echo.

choice /c 123456 /n /m ": "

if errorlevel 6 (
    cls
  
) else if errorlevel 5 (
    start msedge "https://youtu.be/Mus_vwhTCq0?si=RGM8rcDC6J0chgk2"

) else if errorlevel 4 (
    start msedge "https://youtu.be/3dHNOWTI7H8?si=dtFhrdb9zEGDq-kO"

) else if errorlevel 3 (
    start msedge "https://youtu.be/w7ejDZ8SWv8?si=ew-z7l-L8GhlSQft"

) else if errorlevel 2 (
    start msedge "https://youtube.com/playlist?list=PLillGF-RfqbbnEGy3ROiLWk7JMCuSyQtX"
 
) else if errorlevel 1 (
    start msedge "https://youtu.be/BI1o2H9z9fo?si=aqOw_SCKfHH9PGXt"
   
) else (
    goto :start
)


