@echo off

REM Imposta il server da pingare e tracciare
set "server=www.google.com"

REM Numero di ping da eseguire
set "numero_ping=5"

REM Test di ping
echo Test di ping verso %server%...
ping %server% -n %numero_ping%


REM Traceroute (tracert)
echo Traceroute verso %server%...
tracert %server%





