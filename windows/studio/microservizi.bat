@echo off
cls
echo.
echo ================ MICROSERVIZI =========================
echo.
echo 1. video DOKER e KUBERNETES
echo.
echo 2. github di DOKER
echo 3. github di KUBERNETES
echo.
echo.
echo 4. esci
echo.
echo.

set /p n=": "

if "%n%" == "1" (
    start msedge "https://youtu.be/kTp5xUtcalw?si=gtTlIsJJDebue-Zl"

) else if "%n%" == "2" (
    start msedge "https://github.com/docker"

) else if "%n%" == "3" (
    start msedge "https://github.com/kubernetes"

) else if "%n%" == "4" (
    cls
)