@echo off
:inizio
cls
echo.
echo 1. connesso?
echo 2. guarda le reti disponibili
echo 3. connetti
echo 4. disconnetti
echo 5. add --prova
echo 6. ricerca
echo.
echo 7. informazioni rete
echo.
echo 8. esci
echo.


choice /c 1234567 /n /m "Scegli: "

if errorlevel 8 (
    cls
    echo.
    echo EXIT
    echo.
    timeout /t 2
    cls

) else if errorlevel 7 (
    cls
    ipconfig -all

) else if errorlevel 6 (
    cls
    set /p ricerca=" Cosa vuoi cercare: "

    curl -sI "https://www.google.com/search?q=!ricerca!"


) else if errorlevel 5 (

    set /p rete="nome rete: "
    set /p password="password: "
    netsh wlan add profile user=current ssid="!rete!" keyMaterial="!password!"
    pause
    goto :inizio


) else if errorlevel 4 (
    netsh wlan disconnect
    pause
    goto :inizio

) else if errorlevel 3 (
    set /p rete="inserisci nome: "
    netsh wlan connect name="!rete!"
    pause
    goto :inizio

) else if errorlevel 2 (
    netsh wlan show networks
    pause
    goto :inizio

) else if errorlevel 1 (
    call windows\connessione\provaConnessioneInternet.bat
    pause
    goto :inizio

)



