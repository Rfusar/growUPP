@echo off
:ini
cls
echo decidi quale app compilare:
echo.
echo home_page
echo.
echo.
echo    subnet
echo.
set /p n=": "

if "%n%" == "home_page" (
    cd apps\code
    g++ home_page.cpp -o home_page
    move home_page.exe ..\..
    cd ..\..

) else if "%n%" == "subnet" (

    cd apps\code\subnet 
    g++ ^
    logica\checkIP.cpp ^
    logica\ip.cpp ^
    logica\subnet_mask.cpp ^
    schermo\schermo.cpp ^
    main_subnet.cpp  ^
    -o subnet 
    move subnet.exe ..\..
    cd ..\..\..

) else (
    goto :ini
)