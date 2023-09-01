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
    echo ""
    echo "1. C++ base"
    echo "2. GUI"
    echo "3. project..."
    echo ""
    echo "4. esci"
    echo ""
    echo ""
    read -p "Scegli: " ris2
    
    if [ "$ris2" = "1" ]; then
        firefox "https://youtube.com/playlist?list=PLFk1_lkqT8MbVOcwEppCPfjGOGhLvcf9G"
        break

    elif [ "$ris2" = "2" ]; then
        firefox "https://youtu.be/-TkoO8Z07hI"
        break
    elif [ "$ris2" = "3" ]; then
        firefox "https://youtube.com/playlist?list=PLRJuRxIsYMUX3iSmvyWPdKFaCooL455YQ"
        break

    elif [ "$ris2" = "4" ]; then
        clear
        break

    else
        clear 
    fi

done