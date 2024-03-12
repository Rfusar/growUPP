@echo off

rem PROGRAMMA
if "%1" == "update" goto :update
if "%1" == "start" goto :avvio
if "%1" == "github" call C:\Users\Utente\Desktop\Superhero\HOME_STUDIO\github.bat && goto :eof

rem LAVORO
if "%1" == "work" goto :work

rem STUDIO
if "%1" == "studio" goto :studio

rem TOOLS
if "%1" == "tool" goto :tool
if "%1" == "help" goto :help


:update
cls && cd C:\Users\Utente\Desktop\Superhero && code .
goto :eof

:avvio
C:\Users\Utente\Desktop\Superhero\HOME_STUDIO\home_page.exe
goto :eof




:work
cls
echo Quale lavoro vuoi aggiornare? q per uscire
echo.
echo    1. benetton
echo    2. GDPR
echo    3. Allianz
echo    4. TestApi
echo    5. Visualizza appunti
echo.
echo.   PROGETTI
echo        1a. GDPR_v2 (potenzialmente puo essere uno stampino per le dashboard)
echo.       2a. GUI_Java (programma GUI per lavorare... v0.0.0.0.0.0.0.0.001)
echo        3a. crea testo 
echo        4a. Obbiettivi 2024
echo.
echo.   API
echo        1b. MongoDB   
echo        2b. Intelligenza artificiale   
echo        3b. Documenti 
echo.
set /p n="Scegli [utilizza l'indice]: "

if "%n%" == "q" (
    cls && goto :eof

) else if "%n%" == "1" (
    title Benetton && cls
    cd C:\Users\Utente\Desktop\presenze_lavoro\esercizi\progettiAndrea\benetton && .\venv\Scripts\activate && code .
    goto :eof

) else if "%n%" == "2" (
    title Repository_GDPR && cls
    cd C:\Users\Utente\Desktop\presenze_lavoro\esercizi\progettiAndrea\Repository_GDPR___conClasse && .\venv\Scripts\activate && code .
    goto :eof

) else if "%n%" == "3" (
    title DashboardVersatile && cls
    cd C:\Users\Utente\Desktop\presenze_lavoro\esercizi\progettiAndrea\Allianz && .\venv\Scripts\activate && code .
    goto :eof

) else if "%n%" == "4" ( 
    title TestApi && cls
    cd C:\Users\Utente\Desktop\presenze_lavoro\esercizi\progettiAndrea\SERVICES\Test && code .
    goto :eof

) else if "%n%" == "5" (
    notepad C:\Users\Utente\Desktop\Superhero\lavoro.txt
    goto :eof



) else if "%n%" == "1a" (
    title Repository_GDPR___v2 && cls
    cd C:\Users\Utente\Desktop\proveProgetti\prove_NodeJS\prova_GUI && code .
    goto :eof

) else if "%n%" == "2a" (
    title GUI_Java && cls
    cd C:\Users\Utente\Desktop\proveProgetti\prove_Java\GUI_Java && code .
    goto :eof

) else if "%n%" == "3a" (
    title Testo && cls
    cd C:\Users\Utente\Desktop\altro\testi_ahaha && code .
    goto :eof

) else if "%n%" == "4a" (
    cls && notepad C:\Users\Utente\Desktop\Superhero\2024.txt
    goto :eof



) else if "%n%" == "1b" (
    title API_mongoDB && cls
    echo descrizione:
    echo    route: ^/edit ^/view ^/insert ^/delete
    
    cd C:\Users\Utente\Desktop\presenze_lavoro\esercizi\progettiAndrea\SERVICES\API_mongoDB && .\venv\Scripts\activate && code .
    goto :eof

) else if "%n%" == "2b" (
    title API_AI && cls
    cd C:\Users\Utente\Desktop\presenze_lavoro\esercizi\progettiAndrea\SERVICES\API_AI && .\venv\Scripts\activate && code .
    goto :eof

) else if "%n%" == "3b" (
    title API_Documenti && cls
    cd C:\Users\Utente\Desktop\presenze_lavoro\esercizi\progettiAndrea\SERVICES\API_Documenti && .\venv\Scripts\activate && code .
    goto :eof

) else (
    goto :work
)






:studio
title studio && cls 
if "%2" == "GUI-update" (
    cd C:\Users\Utente\Desktop\proveProgetti\prove_Go\provaServer && code .
    goto :eof 

) else if "%2" == "GUI-run" (
    cd C:\Users\Utente\Desktop\proveProgetti\prove_Go\provaServer && run.bat
    goto :eof 

) else if "%2" == "WEB-ms" (
    start firefox https://learn.microsoft.com/it-it/training/?source=learn
    goto :eof 

) else if "%2" == "" (
    goto :help

) else ( goto :help )







:tool
if "%2" == "-conn" (
    cls && C:\Users\Utente\Desktop\Superhero\HOME_STUDIO\apps\AnyDesk.exe
    goto :eof 

) else if "%2" == "-linux" (
    cls && "C:\Program Files\Oracle\VirtualBox\VirtualBox.exe"
    goto :eof 

) else if "%2" == "-putty" (
    cls && C:\Users\Utente\Desktop\Superhero\HOME_STUDIO\apps\putty.exe
    goto :eof 

) else if "%2" == "" (
    goto :help

) else ( goto :help )    








rem HELP
:menuHelp
    cls 
    echo Sintassi: home 
    echo.
    echo    ^start                     Avvia programma 
    echo    update                    Aggiorna programma 
    echo    work                      Apri menu_work 
    echo    github                    Aggiorna repository growUPP
    echo.
    echo    studio 
    echo.       GUI-update            Apri VSc per aggiornare il codice
    echo.       GUI-run               Accendi il server 
    echo.       WEB-ms                Apri il bowser, e vai alla sezione trainer di Microsoft 
    echo.
    echo.   tool
    echo.       -conn                 Utilizza AnyDesk
    echo.       -linux                Utilizza VirtualBox
    echo.       -putty                Utilizza putty
    echo.
    echo.   help                      Visualizza help
    echo.       -examples             Visualizza esempi di utilizzo
    echo.
    goto :eof

:help
if "%2" == "" (
    goto :menuHelp
)
if "%2" == "-examples" (
    echo.
    echo ***Examples
    echo.
    echo.   home start
    echo.   home work
    echo.   home github
    echo.   home studio GUI-update
    echo.   home studio GUI-run
    echo.   home studio WEB-ms
    echo.   home tool -conn
    echo.   home tool -linux
    echo.   home tool -putty
    echo.
    goto :eof

) else ( goto :menuHelp )