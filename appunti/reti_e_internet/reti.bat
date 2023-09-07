@echo off
:ini
cls
echo.
echo cap_1 --introduzione
echo cap_2 --concetti base delle reti
echo cap_3 --concetti base delle reti
echo.
echo.

set /p n="Quale capitolo? "

if "!n!" == "cap_1" (
    cls
    type appunti\reti_e_internet\capitolo_1.txt | more

) else if "!n!" == "cap_2" (
    cls
    type appunti\reti_e_internet\capitolo_2.txt | more

) else if "!n!" == "cap_3" (
    :ini1
    cls
    echo 3A --collegamenti_punto-a-punto
    echo.
    echo.
    
    set /p n1="Scegli: "

    if "!n1!" == "3A" (
        cls
        type appunti\reti_e_internet\capitolo_3\collegamenti_punto-a-punto.txt | more

    ) else (
        goto :ini1
    )
    

) else (
    goto :ini
)