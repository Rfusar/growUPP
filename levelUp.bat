@echo off
rem HOMEPAGE

setlocal enabledelayedexpansion
:inizio
cls
set /p nome="Come va? "


if "%nome%" == "novita" (
    call windows\novita.bat

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

) else if "%nome%" == "internet" (
    call windows\connessione\connessione.bat

) else if "%nome%" == "lavoro" (
    call windows\lavoro.bat

) else if "!nome!" == "appunti" (
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




