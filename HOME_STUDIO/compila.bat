@echo off
cls 
echo ESECUZIONE DELLA COMPILAZIONE
cd apps\code\home_page
g++ ^
home_page.cpp ^
funcs.cpp ^
corsi\appunti.cpp ^
corsi\linguaggi.cpp ^
corsi\OS.cpp ^
corsi\programmi.cpp ^
corsi\tecnologie.cpp ^
corsi\documentazione.cpp ^
corsi\aggiornamenti.cpp -o home_page.exe

move home_page.exe ..\..\..
cd ..\..\..

:compila
echo vuoi avviare il programma? Y/N
echo.
echo.
echo.
set /p res=": "

if "%res%" == "Y" (
    .\home_page.exe

) else if "%res%" == "N" (
    cls

) else (
    goto :compila
)

