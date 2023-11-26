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
    cd others\apps
    g++ home_page.cpp -o home_page
    move home_page.exe ..\..
    cd ..\..

) else if "%n%" == "subnet" (

    cd others\apps\subnet 
    g++ checkIP.cpp ip.cpp main_subnet.cpp subnet_mask.cpp -o subnet 
    move subnet.exe ..\..
    cd ..\..\..

) else (
    goto :ini
)