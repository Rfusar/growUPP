@echo off
cls
echo.
echo 1. base
echo 2. androidStudio
echo.
echo.
echo 3. esci
echo.

choice /c 123 /n /m "Scegli: "
if errorlevel 3 (
    cls
) else if errorlevel 2 (
    start msedge "https://youtu.be/EExSSotojVI?si=2mO28d4wex88QPxi"

) else if errorlevel 1 (
    start msedge "https://youtu.be/9-pFPGAOSZQ?si=iKlrE4Fzax6RPofP"
)