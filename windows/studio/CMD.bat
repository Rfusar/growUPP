@echo off
:ini
cls
echo.
echo.
echo 1. base
echo 2. 40 comandi...
echo 3. documentazione microsoft
echo.
echo.
echo 4. esci
echo.
echo.
echo.
echo.

choice /c 1234 /n /m ": "

if errorlevel 4 (
    cls

) else if errorlevel 3 (
    start msedge "https://learn.microsoft.com/en-us/windows-server/administration/windows-commands/windows-commands"  

) else if errorlevel 2 (
    start msedge "https://youtu.be/Jfvg3CS1X3A?si=TL_4rYwEqt_LJfct"  

) else if errorlevel 1 (
    start msedge "https://youtu.be/qnXe1gecux8?si=OjoQJcp3STqEu3O8" 
       
) else (
    goto :ini
)