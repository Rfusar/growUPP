@echo off
:ini
cls
echo ========================== INFORMAZIONI ===================================    
echo.                         
echo                                               esempio ^<opzione^> nome_file
echo.
echo.
echo    -c -^> compila
echo    -s -^> ^start eseguibile scelto
echo.
echo.
echo =========================================================================== 
echo.
echo.
echo.
echo home_page
echo.
echo.
echo    subnet
echo.
echo.
echo.
echo.
set /p n=": "

if "%n%" == "-c home_page" (
    cd apps\code
    g++ home_page.cpp -o home_page
    move home_page.exe ..\..
    cd ..\..
    echo.
    echo.
    echo.
    pause
    goto :ini

) else if "%n%" == "-s home_page" (
    .\home_page.exe




) else if "%n%" == "-c subnet" (
    cd apps\code\subnet 
    g++ ^
    logica\checkIP.cpp ^
    logica\ip.cpp ^
    logica\subnet_mask.cpp ^
    schermo\schermo.cpp ^
    schermo\menu.cpp ^
    main_subnet.cpp  ^
    -o subnet 
    move subnet.exe ..\..
    cd ..\..\..
    echo.
    echo.
    echo.
    pause
    goto :ini

) else if "%n%" == "-s subnet" (
    .\apps\subnet.exe




) else (
    goto :ini
)