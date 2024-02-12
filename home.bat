@echo off

rem PROGRAMMA
if "%1" == "update" goto :update
if "%1" == "start" goto :avvio
if "%1" == "workout" goto :workout
if "%1" == "testo" goto  :testo

rem LAVORO
if "%1" == "benetton" goto :benetton
if "%1" == "GDPR" goto :GDPR
if "%1" == "DashboardVersatile" goto :dash
if "%1" == "appunti_lavoro" goto :appunti_lavoro

rem ESPREIMENTI
if "%1" == "GDPR_v2" goto :GDPR_v2
if "%1" == "studio" goto :studio
if "%1" == "GUI_Java" goto :GUI_Java

rem TECNOLOGIA
if "%1" == "kube" goto :kube
if "%1" == "cloudRun" goto :cloudRun 

rem TOOLS
if "%1" == "call" goto :call

if "%1" == "help" goto :help

rem COSE DA FARE
if "%1" == "whatShouldIDO" goto :DO




rem PROGRAMMA
:update
cls && cd C:\Users\Utente\Desktop\Superhero && code .
goto :eof

:avvio
C:\Users\Utente\Desktop\Superhero\HOME_STUDIO\home_page.exe
goto :eof

:workout
cls && type C:\Users\Utente\Desktop\Superhero\2024.txt
goto :eof

:testo
cd C:\Users\Utente\Desktop\altro\testi_ahaha
goto :eof


rem LAVORO
:benetton
title Benetton && cls
cd C:\apps\benetton && .\venv\Scripts\activate && code .
goto :eof

:GDPR
title Repository_GDPR && cls
cd C:\Users\Utente\Desktop\presenze_lavoro\esercizi\progettiAndrea\Repository_GDPR___conClasse && .\venv\Scripts\activate && code .
goto :eof

:dash
title DashboardVersatile && cls
cd C:\Users\Utente\Desktop\presenze_lavoro\esercizi\progettiAndrea\DashboardVersatile && .\venv\Scripts\activate && code .
goto :eof

:appunti_lavoro
start msedge https://cloud.google.com/storage/docs/json_api
goto :eof



rem ESPERIMENTI
:GDPR_v2
title Repository_GDPR___v2 && cls
cd C:\Users\Utente\Desktop\proveProgetti\prove_NodeJS\prova_GUI && code .
goto :eof

:studio
title studio && cls 
cd C:\Users\Utente\Desktop\proveProgetti\prove_Go\provaServer && code .
goto :eof

:GUI_Java
title GUI_Java && cls
cd C:\Users\Utente\Desktop\proveProgetti\prove_Java\GUI_Java && code .
goto :eof



rem TECNOLOGIE
:kube
start msedge https://kubernetes.io/docs/concepts/overview/working-with-objects/labels/
goto :eof

:cloudRun
start msedge https://cloud.google.com/run/docs/quickstarts?hl=en
goto :eof



rem TOOLS
:call
start firefox %2
goto :eof

rem COSE DA FARE
:DO
cls && type C:\Users\Utente\Desktop\Superhero\lavoro.txt
goto :eof

:help
cls 
echo.
echo DOCS ---^> kube, cloudRun
echo.
echo.
echo.
echo LAVORO ---^> benetton, GDPR, DashboardVersatile, 
echo                    call
echo. 
echo. 
echo ESPERIMENTI ---^> GDPR_v2, studio, GUI_Java 
echo. 
echo. 
echo. 
echo STANDARD ---^> update, ^start, workout
echo.
echo.
echo COSA DEVI FARE ---^> whatShouldIDO
echo.
echo.
echo.
goto :eof
