@echo off
:ini
cls
echo ---------------------------------------------------MATERIE
ECHO.
ECHO.
echo MATEMATICA
echo.
echo 1. concetti matematica 
echo 2. libro algebra lineare -esempio 1
echo 3. libro matematica -esempio 2
echo.
echo.
echo.
echo ###########################################
echo.
echo.
echo FISICA
echo.
echo 4. fisica generale
echo.
echo.
echo.
echo ###########################################
echo.
echo.
echo INFORMATICA
echo.
echo 5. concetti informatica
echo.
echo.
echo.
echo ###########################################
echo.
echo.
echo BIOLOGIA
echo.
echo 6. concetti biologia
echo.
echo.
echo.
echo ###########################################
echo.
echo 7. esci
echo.
echo.

set /p n=": "

if "%n%" == "1" (
    start msedge "C:/Users/Utente/Desktop/esperimenti-master/appunti/corsi/matematica.html"

) else if "%n%" == "2" (
    start msedge "https://people.dm.unipi.it/martelli/Alg Lin.pdf"

) else if "%n%" == "3" (
    start msedge "https://www.matematicamente.it/staticfiles/matematica-C3/MatematicaC3-Algebra1-3ed-completo.pdf"

) else if "%n%" == "4" (
    start msedge "https://www0.mi.infn.it/~fanti/FisicaGenerale/fanti_FisGen.pdf"

) else if "%n%" == "5" (
    start msedge "C:/Users/Utente/Desktop/esperimenti-master/appunti/corsi/informatica.html"

) else if "%n%" == "6" (
    start msedge "https://www.dotto.me/0/ld/argomento/biologia/ebook/Biologia-Teoria-Esercizi-Edises.pdf"

) else if "%n%" == "7" (
    cls

) else (
    goto :ini
)
