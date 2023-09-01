#!/bin/bash
count=0
while true; do

    while [ "$count" -le 0 ]; do
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
    
    clear
    echo ""
    echo "1. C base"
    echo ""
    echo "2. esci"
    echo ""
    echo ""
    read -p "Scegli: " ris2
    if [ "$ris2" = "1" ]; then
        firefox "https://youtu.be/87SH2Cn0s9A"
        break

    elif [ "$ris2" = "2" ]; then
        clear
        break
    
    else
        clear
    fi

done