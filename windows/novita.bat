rem .NET, PC --freecodecamp, FRONTEND base, flutter, curl, arp, VIM, GIT
@echo off
:start
cls
echo Quello che passa...
echo.
echo.
echo 1. .NET
echo 2. PC --freecodecamp
echo 3. frontend --HTML --CSS --JAVASCRIPT
echo 4. flutter
echo 5. curl
echo 6. arp
echo.
echo **********************************************
echo.
echo 7. VIM
echo 8. GIT
echo.
echo 9. esci
echo.


choice /c 123456789 /n /m "scegli: "


if errorlevel 9 (
    cls
    
) else if errorlevel 8 (
    start msedge "https://youtu.be/RGOj5yH7evk?si=qgbDubs8OJYUrN_e"

) else if errorlevel 7 (
    start msedge "https://youtu.be/RZ4p-saaQkc?si=E68YG27bxAIZ0fsZ"

) else if errorlevel 6 (
    start msedge "https://www.fortinet.com/it/resources/cyberglossary/what-is-arp"

) else if errorlevel 5 (
    :re
    set /p  ris= "con documentazione? [Y/N] "
    if "%ris%" == "Y" (
        start msedge "https://4sysops.com/archives/how-to-use-curl-on-windows/"

    ) else if "%ris%" == "N" (
        start msedge "https://curl.se/docs/manpage.html"

    ) else (
        goto :re
    )
    
) else if errorlevel 4 (
    start msedge "https://youtu.be/VPvVD8t02U8"

) else if errorlevel 3 (
    start msedge "https://youtu.be/zJSY8tbf_ys"

) else if errorlevel 2 (
    start msedge "https://youtu.be/8mAITcNt710"

) else if errorlevel 1 (
    start msedge "https://www.youtube.com/live/kdPtNMb8tPw?feature=share"
    
) else (
    goto :start
)