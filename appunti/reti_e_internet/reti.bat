@echo off
cls
echo.
echo cap_1 --introduzione
echo cap_2 --concetti base delle reti

set /p n="Quale capitolo? "

if "!n!" == "cap_1" (
    type appunti\reti_e_internet\capitolo_1.txt | more

) else if "!n!" == "cap_2" (
    type appunti\reti_e_internet\capitolo_1.txt | more

)