@echo off
:ini
cls
echo.
echo 1. hardware
echo 2. altro --playlist
echo.
echo 3. esci
echo.
echo.
choice /c 123 /n /m "Scegli: "

if errorlevel 3 (
    cls

) else if errorlevel 2 (
    start msedge "https://youtube.com/playlist?list=PL6rx9p3tbsMsZ9hUvU-kDOXc8Fot04Hhu"

) else if errorlevel 1 (
    start msedge "https://youtu.be/d86ws7mQYIg"
    
) else (
    goto:ini
)
