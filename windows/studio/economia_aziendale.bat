@echo off
:ini
cls
echo.   cose vecchie, pero ce roba utile
echo.
echo          ECONOMIA AZIENDALE
echo.
echo.
echo    1. Acconto IVA
echo    2. Esercizi contabilita pratica
echo    3. Fatturazione e regime iva
echo    4. Le vendite e il regolamento
echo    5. Metodo partita doppia 
echo    6. Operzioni di vendita e regolamento 
echo    7. Quaderno appunti 
echo    8. Stato patrimoniale 
echo    9. Un anno in azienda 
echo.
echo *******************************************************
echo    10.  esci
echo.
echo.
echo.

set /p n=": "
if "%n%" == "10" (
    cls

) else if "%n%" == "1" (
    start msedge C:\Users\Utente\Desktop\presenze_lavoro\ECONOMIA_AZIENDALE\acconto_iva.pdf
    pause
    goto :ini
) else if "%n%" == "2" (
    start msedge C:\Users\Utente\Desktop\presenze_lavoro\ECONOMIA_AZIENDALE\esercizi_contabilita_pratica.pdf
    pause
    goto :ini    
) else if "%n%" == "3" (
    start msedge C:\Users\Utente\Desktop\presenze_lavoro\ECONOMIA_AZIENDALE\fatturazione_e_regime_iva.pdf
    pause
    goto :ini    
) else if "%n%" == "4" (
    start msedge C:\Users\Utente\Desktop\presenze_lavoro\ECONOMIA_AZIENDALE\le_vendite_e_il_regolamento.pdf
    pause
    goto :ini    
) else if "%n%" == "5" (
    start msedge C:\Users\Utente\Desktop\presenze_lavoro\ECONOMIA_AZIENDALE\metodo_partita_doppia.pdf
    pause
    goto :ini    
) else if "%n%" == "6" (
    start msedge C:\Users\Utente\Desktop\presenze_lavoro\ECONOMIA_AZIENDALE\Operazioni_di_vendita_e_regolamento.pdf
    pause
    goto :ini    
) else if "%n%" == "7" (
    start msedge C:\Users\Utente\Desktop\presenze_lavoro\ECONOMIA_AZIENDALE\quaderno_appunti.pdf
    pause
    goto :ini    
) else if "%n%" == "8" (
    start msedge C:\Users\Utente\Desktop\presenze_lavoro\ECONOMIA_AZIENDALE\stato_patrimoniale.pdf
    pause
    goto :ini    
) else if "%n%" == "9" (
    start msedge C:\Users\Utente\Desktop\presenze_lavoro\ECONOMIA_AZIENDALE\Un_anno_in_azienda.pdf
    pause
    goto :ini    
)