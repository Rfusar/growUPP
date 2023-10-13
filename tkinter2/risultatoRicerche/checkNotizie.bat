@echo off 
rem per l'utf-8
chcp 65001 > nul
:ini
cls
echo.
echo 1. agenzie delle entrate
echo 2. sito governo italiano
echo 3. indici banche 
echo 4. notizie ISTAT 
echo.
echo # 
echo    -a aggiorna 
echo.   -r ricerca internt --separatore[+] --esempio ciao+mi+chiamo+jj
echo.
echo.
echo 5. esci
echo.
echo.
echo.
echo.
set /p n=": "

set a=%n:~0,2%
set b=%n:~3%


if "%a%" == "-r" (
    start msedge "https://www.google.com/search?q=%b%"

) else if "%n%" == "-a" (
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
    type C:\Users\Utente\Desktop\esperimenti-master\tkinter2\risultatoRicerche\ISTAT.txt
    pause
    goto :ini

) else if "%n%" == "5" (
    cls

) else (
    goto :ini
)