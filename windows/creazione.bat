@echo off

:inizio
cls
echo.
echo 1. C 
echo 2. C++ 
echo 3. Javascript 
echo 4. Java 
echo 5. Python 
echo.
echo 6. esci
echo.
echo.
cd /d C:\Users\Utente\Desktop\esperimenti\prove

choice /c 12345 /n /m "Seleziona una scelta: "

if errorlevel 6 (
    cls

) else if errorlevel 5 (
    if not exist Python ( 
        md Python  
    )
    cd /d C:\Users\Utente\Desktop\esperimenti\prove\Python 
    if not exist prova.py (
        echo. > prova.py
    )
    cd /d C:\Users\Utente\Desktop\esperimenti\prove
    goto :inizio

)
else if errorlevel 4 (
    if not exist Java ( 
        md Java  
    )
    cd /d C:\Users\Utente\Desktop\esperimenti\prove\Java 
    if not exist prova.java (
        echo. > prova.java
    )
    cd /d C:\Users\Utente\Desktop\esperimenti\prove
    goto :inizio

) else if errorlevel 3 (
    if not exist Javascript ( 
        md Javascript  
    )
    cd C:\Users\Utente\Desktop\esperimenti\prove\Javascript
    if not exist prova.js (
        echo. > prova.js
    )
    cd C:\Users\Utente\Desktop\esperimenti\prove
    goto :inizio

) else if errorlevel 2 (
    if not exist C++ ( 
        md C++
    )
    cd C:\Users\Utente\Desktop\esperimenti\prove\C++
    if not exist prova.cpp (
        echo. > prova.cpp
    )
    cd C:\Users\Utente\Desktop\esperimenti\prove
    goto :inizio

) else if errorlevel 1 (
    if not exist C ( 
        md C
    )
    cd C:\Users\Utente\Desktop\esperimenti\prove\C
    if not exist prova.c (
        echo. > prova.c
    )
    cd C:\Users\Utente\Desktop\esperimenti\prove
    goto :inizio

) else (
    goto :inizio
)

   