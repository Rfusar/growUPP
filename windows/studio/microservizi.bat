@echo off
:ini
cls
echo per informazioni: -info -comando-
echo ESEMPIO: -info -cobra
echo.
echo.
echo ================ MICROSERVIZI ==================================
echo.
echo.
echo 1. video DOKER e KUBERNETES
echo.
echo.
echo 2. github di DOCKER
echo 3. github di KUBERNETES
echo.
echo.
echo.
echo ================ GO ============================================
echo.
echo.
echo # github.com/compose-spec/compose-go/cli      -cli
echo # github.com/spf13/cobra                      -cobra
echo # github.com/docker/cli                       -docker
echo # k8s.io/component-base/cli                   -kubernetes
echo.
echo.
echo.
echo =============== LIBRERIE GO (github) ===========================
echo.
echo.
echo # analisi e caricamento dei file di composizione     -compose-go
echo.
echo.
echo.
echo ================ DOCKER ==========================================
echo.
echo.
echo # BASE                                         -docker base
echo # regole di costruzioni del Dockefile          -Dockerfile
echo.
echo.
echo.
echo.
echo 4. esci
echo.
echo.

set /p n=": "

if "%n%" == "1" (
    start msedge "https://youtu.be/kTp5xUtcalw?si=gtTlIsJJDebue-Zl"
    goto :fine

) else if "%n%" == "2" (
    start msedge "https://github.com/docker"
    goto :fine

) else if "%n%" == "3" (
    start msedge "https://github.com/kubernetes"
    goto :fine





) else if "%n%" == "-info -cli" (
    goto :infovuoto

) else if "%n%" == "-info -docker" (
    goto :infovuoto

) else if "%n%" == "-info -compose-go" (
    goto :infovuoto

) else if "%n%" == "-info -cobra" (
    goto :infocobra






 
) else if "%n%" == "-cli" (
    start msedge "https://pkg.go.dev/github.com/compose-spec/compose-go/cli"
    goto :fine

) else if "%n%" == "-cobra" (
    start msedge "https://pkg.go.dev/github.com/spf13/cobra"
    goto :fine

) else if "%n%" == "-doker" (
    start msedge "https://pkg.go.dev/github.com/docker/cli"
    goto :fine

) else if "%n%" == "-kubernetes" (
    start msedge "https://pkg.go.dev/k8s.io/component-base/cli"
    goto :fine






) else if "%n%" == "-compose-go" (
    start msedge "https://github.com/compose-spec/compose-go/tree/v1.20.0"
    goto :fine






) else if "%n%" == "-Dockerfile" (
    start msedge "https://docs.docker.com/engine/reference/builder/#parser-directives"
    goto :fine

) else if "%n%" == "-docker base" (
    start msedge "https://youtu.be/RqTEHSBrYFw?si=lheMncbmxt4tTg7M"
    goto :fine







) else if "%n%" == "4" (
    goto :fine
)

 ::informazioni
:infovuoto
cls
echo vuoto, spiace
echo.
echo.
echo.
pause
goto :ini

:infocobra
cls
echo Il pacchetto cobra è un comandante che fornisce un'interfaccia semplice per creare potenti interfacce CLI moderne. 
echo Oltre a fornire un'interfaccia, Cobra fornisce contemporaneamente un controller per organizzare il codice dell'applicazione
echo.
echo.
echo.
pause
goto :ini



:fine
cls