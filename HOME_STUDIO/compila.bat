@echo off
cls 
echo ESECUZIONE DELLA COMPILAZIONE
cd apps\code\home_page
g++ ^
home_page.cpp ^
funcs.cpp ^
corsi\appunti.cpp ^
corsi\internet.cpp ^
corsi\lavoro.cpp ^
corsi\linguaggi.cpp ^
corsi\OS.cpp ^
corsi\programmi.cpp ^
corsi\tecnologie.cpp ^
corsi\documentazione.cpp ^
corsi\profili_upgrade.cpp -o home_page.exe

move home_page.exe ..\..\..
cd ..\..\..\..
cls
echo AVVIO PROGRAMMA
.\home_page.exe

