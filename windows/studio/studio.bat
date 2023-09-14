@echo off
:ini
cls
echo ---web
echo. 
echo html css
echo.
echo.
echo ----------------------LINGUAGGI
echo.
echo 1. C
echo 2. C++
echo 3. Java
echo 4. Javascript
echo 5. Python
echo.
echo.
echo -----------------------MOBILE
echo.
echo 6. Kotlin
echo 7. Dart
echo.
echo.
echo -----------------------DATABASE
echo.
echo 8. SQL
echo 9. MongoDB
echo.
echo.
echo ---------------------------++
echo.
echo 10. Bash
echo 11. CMD --DOCUMENTAZIONE
echo 12. Powershell --per utilizare andare su powershell e eseguire:
echo                                            Set-ExecutionPolicy RemoteSigned 
echo.
echo 13. Internet
echo 14. PC
echo.
echo ******************************************************************************************
echo.
echo 15. esci
echo.
echo.
echo.

set /p  n="cosa vuoi studiare oggi? "


if "%n%" == "15" (
    cls

) else if "%n%" == "html" (
    start msedge "https://youtu.be/kUMe1FH4CHE?feature=shared"

) else if "%n%" == "css" (
    start msedge "https://youtu.be/OXGznpKZ_sA?feature=shared" 

) else if "%n%" == "html css" (
    start msedge "https://youtu.be/HGTJBPNC-Gw?feature=shared"



) else if "%n%" == "12" (
    call windows\studio\powershell.bat

) else if "%n%" == "14" (
    call windows\studio\PC.bat

rem -----------CMD
) else if "%n%" == "11" (
    :docCMD
    cls
    echo.
    echo per vedere Video 'CMD -video'
    echo.
    echo.
    set /p doc="Vuoi vedere gli appunti? [Y/N]  "
    if "%doc%" == "Y" (
        cls
        call studio\CMD.bat

    ) else if "%doc%" == "N" (
        cls
        start msedge "https://learn.microsoft.com/en-us/windows-server/administration/windows-commands/windows-commands"

    ) else if "%doc%" == "CMD -video" (
        start msedge "https://youtu.be/qnXe1gecux8?si=OjoQJcp3STqEu3O8"

    ) else (
        goto :docCMD
    )

) else if "%n%" == "13" (
    call windows\studio\network.bat  

) else if "%n%" == "10" (
    start msedge "https://youtube.com/playlist?list=PLT98CRl2KxKGj-VKtApD8-zCqSaN2mD4w&si=qm8o-6Vmx5pzzTON"

) else if "%n%" == "9" (
    start msedge "https://youtu.be/c2M-rlkkT5o?si=EYxVmI_aWLJYG06K"

) else if "%n%" == "8" (
    start msedge "https://youtu.be/5OdVJbNCSso?si=LkFaEiLIf52Tr-mR"

) else if "%n%" == "7" (
    start msedge "https://youtu.be/WxuViERlkyE?si=CWBIK-WyR4965j3X"

) else if "%n%" == "6" (
    call windows\studio\mobile\kotline.bat

) else if "%n%" == "5" (
    call windows\studio\Python.bat

) else if "%n%" == "4" (
    call windows\studio\Javascript.bat

) else if "%n%" == "3" (
    call windows\studio\Java.bat

) else if "%n%" == "2" (
    call windows\studio\C++.bat

)  else if "%n%" == "1" (
    call windows\studio\C.bat

) 
rem else (
rem  goto :ini
rem )
