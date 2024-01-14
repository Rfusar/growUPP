@echo off

if "%1" == "update" ( 
    cd C:\Users\Utente\Desktop\Superhero
    code .

) else if "%1" == "start" ( 
    C:\Users\Utente\Desktop\Superhero\HOME_STUDIO\home_page.exe

) else if "%1" == "workout" (
    cls
    type C:\Users\Utente\Desktop\Superhero\cose_da_fare.txt







)   else if "%1" == "benetton" (
    title Benetton && cls
    cd C:\Users\Utente\Desktop\presenze_lavoro\esercizi\progettiAndrea\Benetton\programma && .\venv\Scripts\activate
    code C:\Users\Utente\Desktop\presenze_lavoro\esercizi\progettiAndrea\Benetton\programma

) else if "%1" == "GDPR" (
    title Repository_GDPR && cls
    cd C:\Users\Utente\Desktop\presenze_lavoro\esercizi\progettiAndrea\Repository_GDPR___conClasse && .\venv\Scripts\activate
    code C:\Users\Utente\Desktop\presenze_lavoro\esercizi\progettiAndrea\Repository_GDPR___conClasse

) else if "%1" == "DashboardVersatile" (
    title DashboardVersatile && cls
    cd C:\Users\Utente\Desktop\presenze_lavoro\esercizi\progettiAndrea\DashboardVersatile && .\venv\Scripts\activate
    code C:\Users\Utente\Desktop\presenze_lavoro\esercizi\progettiAndrea\DashboardVersatile






) else if "%1" == "GDPR_v2" (
    title Repository_GDPR___v2 && cls
    cd C:\Users\Utente\Desktop\proveProgetti\prove_NodeJS\prova_GUI
    code C:\Users\Utente\Desktop\proveProgetti\prove_NodeJS\prova_GUI

) else if "%1" == "studio" (
    title studio && cls 
    cd C:\Users\Utente\Desktop\proveProgetti\prove_Go\provaServer
    code C:\Users\Utente\Desktop\proveProgetti\prove_Go\provaServer

) else if "%1" == "GUI_Java" (
    title GUI_Java && cls
    cd C:\Users\Utente\Desktop\proveProgetti\prove_Java\GUI_Java
    code C:\Users\Utente\Desktop\proveProgetti\prove_Java\GUI_Java





) else if "%1" == "kube" (
    start msedge https://kubernetes.io/docs/concepts/overview/working-with-objects/labels/

) else if "%1" == "cloudRun" (
    start msedge https://cloud.google.com/run/docs/quickstarts?hl=en






) else if "%1" == "/?" (
    cls 
    echo.
    echo DOCS ---^> kube, cloudRun
    echo.
    echo.
    echo LAVORO ---^> benetton, GDPR, DashboardVersatile
    echo. 
    echo ESPERIMANTI ---^> GDPR_v2, studio, GUI_Java 
    echo. 
    echo STANDARD ---^> update, ^start, workout
    echo.
    echo.
    echo.
    echo.
)

