@echo off
rem HOMEPAGE
cls
cd windows\script && python gestioneNovita.py
cd ..\..
pause
:inizio
cls
set /p nome="Come va? "


if "%nome%" == "novita" (
    call windows\novita.bat

) else if "%nome%" == "q" (
    cls
    goto :end
) else if "%nome%" == "PS" (
    cls 
    powershell Get-ExecutionPolicy
    pause
    echo Set-ExecutionPolicy Restricted
    timeout /t 10
    powershell -NoProfile -ExecutionPolicy Bypass -Command "Start-Process powershell -ArgumentList '-NoExit' -Verb RunAs"
    pause

) else if "%nome%" == "chatGPT" (
    start msedge "https://chat.openai.com/"

) else if "%nome%" == "app" (
    call C:\Users\Utente\Desktop\esperimenti-master\tkinter2\dist\app.exe

) else if "%nome%" == "notizie" (
    call C:\Users\Utente\Desktop\esperimenti-master\tkinter2\risultatoRicerche\checkNotizie.bat

) else if "%nome%" == "voglioCreare" (
    call windows\creazione.bat

) else if "%nome%" == "comeva?" (
    call windows\stato.bat

) else if "%nome%" == "giochiamo -a" (
    call windows\game\game.c 

) else if "%nome%" == "giochiamo" (
    call windows\game\game.exe

) else if "%nome%" == "studiamo" (
    call windows\studio\studio.bat

) else if "%nome%" == "ricerca" (
    start msedge "https://www.google.com/advanced_search"

) else if "%nome%" == "lavoro" (
    call windows\lavoro.bat

) else if "%nome%" == "appunti" (
    call appunti\appunti.bat

) else if "%nome%" == "matematica" (
    call appunti\math.bat

) else if "%nome%" == "formulario" (
    cls
    call appunti\reti_e_internet\MATEMATICA\FORMULARIO\a.html

) else if "%nome%" == "cosaHoDaFare?" (
    cd C:\Users\Utente\Desktop\esperimenti-master\windows\game\cosaDAFARE && python cosadafare.py
    cd C:\Users\Utente\Desktop\esperimenti-master
    
) else if "%nome%" == "-h" (
    type help.txt
    pause
    goto :inizio

) else (
    goto :inizio
)





