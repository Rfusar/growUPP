@echo off
:ini
cls
echo.
echo :q per uscire
echo.
echo.
echo ***************************** SINTASSI *********************************************
echo.
echo.
echo.
echo     variabili                  funzioni                 policy
echo.
echo                 estensioni                  condizioni
echo.
echo.
echo ****************************** METODI ************************************************
echo.
echo     internet
echo.

set /p "domanda1=cosa vuoi sapere di POWERSHELL? "

:: Switch per domanda1
if "%domanda1%"=="policy" (
    cls 
    type appunti\linguaggi\powershell\policy.txt | more
    pause
    goto :ini

) else if "%domanda1%"=="variabili" (
    cls 
    type appunti\linguaggi\powershell\variabili.txt | more
    pause
    goto :ini

) else if "%domanda1%"=="estensioni" (
    cls 
    type appunti\linguaggi\powershell\estensioni.txt | more
    pause
    goto :ini

) else if "%domanda1%"=="funzioni" (
    cls 
    type appunti\linguaggi\powershell\funzioni.txt | more
    pause
    goto :ini

) else if "%domanda1%"=="internet" (
    cls 
    type appunti\linguaggi\powershell\internet.txt | more
    pause
    goto :ini

) else if "%domanda1%"==":q" (
    cls

) else if "%domanda1%"=="condizioni" (
    :ini1
    cls
    echo     if-else
    echo     switch
    echo     while
    echo     for
    echo.
    echo     :q per uscire
    echo     :Q per uscire
    echo.
    echo.
    echo.
    
    set /p "domanda2=cosa vuoi sapere? "
    
    if "%domanda2%"=="if-else" (
        cls 
        type appunti\linguaggi\powershell\if-else.txt | more
        pause
        goto :ini1

    ) else if "%domanda2%"=="switch" (
        cls 
        type appunti\linguaggi\powershell\switch.txt | more
        pause
        goto :ini1

    ) else if "%domanda2%"=="while" (
        cls 
        type appunti\linguaggi\powershell\while.txt | more
        pause
        goto :ini1
    ) else if "%domanda2%"=="for" (
        cls 
        type appunti\linguaggi\powershell\for.txt | more
        pause
        goto :ini1

    ) else if "%domanda2%"==":q" (
        cls 
        goto :ini

    ) else if "%domanda2%"==":Q" (
        cls 

    ) else (

        goto :ini1
    )

) else (
    goto :ini
)



