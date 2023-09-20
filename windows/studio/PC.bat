@echo off
:ini
cls
echo.
echo 1. hardware
echo 2. SSD
echo 3. bluetooth
echo 4. tastiera
echo.
echo 5. esci
echo.
echo.
choice /c 12345 /n /m ": "

if errorlevel 5 (
    cls

) else if errorlevel 4 (
    start msedge "https://youtu.be/h-NM1xSSzHQ?si=Yr42KCAUJav19rUj"

) else if errorlevel 3 (
    start msedge "https://youtu.be/1I1vxu5qIUM?si=aitFWZo9j6jGDHfo"

) else if errorlevel 2 (
    start msedge "https://youtu.be/5Mh3o886qpg?si=tRv55Q1FdrDBhSJi"

) else if errorlevel 1 (
    start msedge "https://youtu.be/d86ws7mQYIg"
    
) else (
    goto:ini
)
