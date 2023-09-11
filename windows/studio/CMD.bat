cls 
:inizio
echo 1. base
echo 2. internet
echo.
echo 3. esci
echo.
echo.

choice /c 123 /n /m "Scegli: "

if errorlevel 3 (
    cls
) else if errorlevel 2 (
    cls
    type prove\CMDLine\base.txt | more
    pause
    goto :inizio

) else if errorlevel 1 (
    cls
    type prove\CMDLine\internet.txt | more
    pause
    goto :inizio

) else (
    goto :inizio
)