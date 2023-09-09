@echo off

:inizio
cls
echo.
echo 1. Processi in corso
echo 2. CPU
echo 3. RAM
echo 4. Hardisk
echo 5. Scheda rete
echo.
echo 6. mostra tutto --generico
echo.
echo 7. Esci
echo.

choice /c 1234567 /n /m "Scegli: "

if errorlevel 7 (
    cls

) else if errorlevel 6 (
    cls
    echo ---------------------- SCHEDA RETE:
    echo.
    wmic nic get adaptertype, macaddress, name, speed
    echo.
    echo.
    echo ---------------------- SCHEDA GRAFICA:
    echo.
    wmic path win32_videocontroller get caption, deviceid, driverdate, name, videomodeDescription
    echo.
    echo.
    echo ---------------------- HARDISK:
    echo.
    wmic diskdrive get caption, deviceid, mediatype, model, size
    echo.
    echo.
    echo ---------------------- RAM:
    echo.
    wmic memorychip get capacity, devicelocator, manufacturer, partnumber, speed
    echo.
    echo.
    echo ---------------------- CPU:
    echo.
    wmic cpu get caption, deviceid, maxclockspeed, name, numberofcores, numberoflogicalprocessors
    echo.
    echo.
    pause
    goto :inizio


) else if errorlevel 5 (
    cls
    wmic nic list full /format:list
    pause
    goto :inizio

) else if errorlevel 4 (
    cls
    wmic diskdrive list full  /format:list
    pause
    goto :inizio
) else if errorlevel 3 (
    cls
    wmic memorychip list full /format:list
    pause
    goto :inizio
) else if errorlevel 2 (
    cls
    wmic cpu list full  /format:list
    pause
    goto :inizio
) else if errorlevel 1 (
    cls
    tasklist
    pause
    goto :inizio
) else (
    goto :inizio
)
