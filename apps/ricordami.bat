@echo off 
rem per l'utf-8
chcp 65001 > nul

set "file=C:\Users\Utente\Desktop\info\variabili\.env"

if exist "%file%" (
    cls
    type "%file%"
    pause
    del "%file%"

) else (
    cd C:\Users\Utente\Desktop\Superhero\apps\code\notizie 
    .\venv\Scripts\activate && cd logica\credenziali && python credenziali.py
)


