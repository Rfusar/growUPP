@echo off
:menu
cls
echo.
echo 1. Check-in-admin
echo 2. tkinter
echo 3. progettoAndrea
echo.
echo.
echo.
echo 4. esci

choice /c 1234 /n /m "Inserisci il numero dell'opzione desiderata: "

if errorlevel 4 goto :option4
if errorlevel 3 goto :option3
if errorlevel 2 goto :option2
if errorlevel 1 goto :option1

:option1 
cd C:\Users\Utente\Desktop\presenze_lavoro\esercizi\Check-in_admin
start  code C:\Users\Utente\Desktop\presenze_lavoro\esercizi\Check-in_admin
start msedge "http://127.0.0.1:5000"
C:\Users\Utente\Desktop\presenze_lavoro\esercizi\Check-in_admin\dashboard\venv\scripts\activate && python run.py

pause
goto :menu

:option2
cd C:\Users\Utente\Desktop\presenze_lavoro\esercizi\tkinter
start code C:\Users\Utente\Desktop\presenze_lavoro\esercizi\tkinter
C:\Users\Utente\Desktop\presenze_lavoro\esercizi\tkinter\venv\Scripts\activate && python app.py

pause
goto :menu

:option3 
cd C:\Users\Utente\Desktop\presenze_lavoro\esercizi\progettoAndrea2
start code C:\Users\Utente\Desktop\presenze_lavoro\esercizi\progettoAndrea2
start msedge "http://127.0.0.1:5000"
C:\Users\Utente\Desktop\presenze_lavoro\esercizi\progettoAndrea2\venv\Scripts\activate && python run.py

pause
goto :menu

:option4
exit /b