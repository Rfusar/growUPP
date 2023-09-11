@echo off
:ini
echo.
echo 1. internet e reti
echo 2. powershell
echo 3. markdown
echo.
echo.
echo 4 esci
echo.

set /p n="Scegli: "

if "!n!" == "4" (
    cls

) else if "!n!" == "3" (
    cls
    type appunti\linguaggi\markdown.txt | more
    
) else if "!n!" == "2" (
    call appunti\powershellBATCH.bat
    
) else if "!n!" == "1" (
    cls
    call appunti\reti_e_internet\reti.bat
    
) else (
    goto :ini
)