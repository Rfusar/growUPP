#!/bin/bash
count=0
while true; do

    while ["$count" -le 0]; do
        clear
        ((count++))
        read -p "vuoi fare pratica? [Y/N] " ris1

        if [ "$ris1" = "Y" ]; then
            code
            break

        elif [ "$ris1" = "N" ]; then
            echo.
            break

        else
            clear
        fi
    done
    cls
    echo.
    echo "1. Java base"
    echo "2. GUI"
    echo. 
    echo "3. esci"
    echo.
    echo.

    read -p "Scegli: " ris2

    if [ "$ris2" = "1" ]; then
        firefox "https://youtu.be/xk4_1vDrzzo"
        break

    elif [ "$ris2" = "2" ]; then
        firefox "https://youtu.be/Kmgo00avvEw"
        break
    elif [ "$ris2" = "3" ]; then
        clear
        break

    else
        clear
    fi
done