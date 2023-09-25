@echo off 
rem per l'utf-8
chcp 65001 > nul
:ini
cls
echo.
echo 1. agenzie delle entrate
echo 2. sito governo italiano
echo 3. indici banche 
echo.
echo # 
echo    -a aggiorna 
echo.
echo.
echo.
echo 4. esci
echo.
echo.
echo.
echo.
set /p n=": "

if "%n%" == "-a" (
    cd C:\Users\Utente\Desktop\esperimenti-master\tkinter2\app && python update.py
    cd C:\Users\Utente\Desktop\esperimenti-master
    pause
    goto :ini
    

) else if "%n%" == "1" (
    cls 
    type C:\Users\Utente\Desktop\esperimenti-master\tkinter2\risultatoRicerche\AE.txt
    pause
    goto :ini

) else if "%n%" == "2" (
    cls 
    type C:\Users\Utente\Desktop\esperimenti-master\tkinter2\risultatoRicerche\notizia.txt
    pause
    goto :ini

) else if "%n%" == "3" (
    cls
    type C:\Users\Utente\Desktop\esperimenti-master\tkinter2\risultatoRicerche\checkPROVAA.txt
    pause
    goto :ini

) else if "%n%" == "4" (
    cls

) else (
    goto :ini
)