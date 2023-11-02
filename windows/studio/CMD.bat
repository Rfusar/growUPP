@echo off
:ini
cls
echo.
echo.
echo 1. base
echo 2. 40 comandi...
echo 3. documentazione microsoft --pdf
echo 4. windows server documentazione --pdf
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
echo 5. esci
echo.
echo.
echo.
echo.

set /p n=": "

if "%n%" ==  "5" (
    cls

) else if "%n%" == "4" (
    start msedge C:\Users\Utente\Desktop\info\windows-server-get-started.pdf

) else if "%n%" == "curl" (
    start msedge "https://curl.se/docs/manual.html"

) else if "%n%" == "netsh" (
    start msedge "https://youtu.be/vYbtiY3bnTM?si=-vvzN3cb3ph9p4ap"
    
) else if "%n%" == "netstat" (
    start msedge "https://youtu.be/bxFwpm4IobU?si=9CYsN4wTCPfe1q3b"



) else if "%n%" == "3" (
    start msedge C:\Users\Utente\Desktop\info\windows-server-administration-windows-commands.pdf 

) else if "%n%" == "2" (
    start msedge "https://youtu.be/Jfvg3CS1X3A?si=TL_4rYwEqt_LJfct"  

) else if "%n%" == "1" (
    start msedge "https://youtu.be/qnXe1gecux8?si=OjoQJcp3STqEu3O8" 
       
) else (
    goto :ini
)