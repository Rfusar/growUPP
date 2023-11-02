@echo off
:menu
cls
echo.
echo 1. Check-in-admin --prova
echo 2. API in GOlang
echo.
echo.
echo *********************************
echo.
echo 3. web-server --fatture e F24
echo 4. chatGPT
echo.
echo.
echo 5. esci

choice /c 12345 /n /m "Inserisci il numero dell'opzione desiderata: "

if errorlevel 5 goto :option5
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
cd C:\Users\Utente\Desktop\presenze_lavoro\esercizi\progetto_api_GO
start code C:\Users\Utente\Desktop\presenze_lavoro\esercizi\progetto_api_GO


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
cls
cd C:\Users\Utente\Desktop\presenze_lavoro\esercizi\modelloAPI_chatGPT
start code C:\Users\Utente\Desktop\presenze_lavoro\esercizi\modelloAPI_chatGPT
echo. 
echo insersici:
echo cd chatGPT e poi python API.py
echo. 
echo. 
C:\Users\Utente\Desktop\presenze_lavoro\esercizi\modelloAPI_chatGPT\venv\Scripts\activate 


pause
goto :menu

:option5
exit /b