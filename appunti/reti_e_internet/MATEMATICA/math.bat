@echo off
:ini
cls
echo.
echo 1. corso matematica --Professore Antonio Corbo
echo 2. lezioni specifiche --Elia Bombardelli
echo.
echo.

set /p n="Scegli: "

if "!n!" == "1" (
    start msedge "https://youtube.com/playlist?list=PLUL1bzfXcbX14C_LblfpQx_VHMHzO1nL6&si=TlpsuqbHsXBBgkdV"

) else if "!n!" == "2" (
    start msedge "https://www.youtube.com/@EliaBombardelli"

) else (
    goto :ini

)