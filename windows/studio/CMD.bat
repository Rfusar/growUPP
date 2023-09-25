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
echo # Comandi specifici
echo.
echo.
echo        netstat
echo        netsh
echo        curl --manual
echo.
echo.
echo 4. esci
echo.
echo.
echo.
echo.

set /p n=": "

if "%n%" ==  "4" (
    cls

) else if "%n%" == "curl" (
    start msedge "https://curl.se/docs/manual.html"

) else if "%n%" == "netsh" (
    start msedge "https://youtu.be/vYbtiY3bnTM?si=-vvzN3cb3ph9p4ap"
    
) else if "%n%" == "netstat" (
    start msedge "https://youtu.be/bxFwpm4IobU?si=9CYsN4wTCPfe1q3b"



) else if "%n%" == "3" (
    start msedge "https://learn.microsoft.com/en-us/windows-server/administration/windows-commands/windows-commands"  

) else if "%n%" == "2" (
    start msedge "https://youtu.be/Jfvg3CS1X3A?si=TL_4rYwEqt_LJfct"  

) else if "%n%" == "1" (
    start msedge "https://youtu.be/qnXe1gecux8?si=OjoQJcp3STqEu3O8" 
       
) else (
    goto :ini
)