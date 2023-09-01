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
    clear
    echo ""
    echo "1. flask"
    echo "2. OOP" 
    echo "3. django"
    echo "4. selenium --interazioni con pagine web"
    echo ""
    echo "5. esci"
    echo ""
    echo ""


    read -p "Scegli: " ris2

    if [ "$ris2" = "1" ]; then
        firefox "https://youtu.be/Qr4QMBUPxWo"
        break

    elif [ "$ris2" = "2" ]; then
        firefox "https://youtu.be/JeznW_7DlB0"
        break
    elif [ "$ris2" = "3" ]; then
        firefox "https://youtu.be/F5mRW0jo-U4"
        break

    elif [ "$ris2" = "4" ]; then
        firefox "https://youtube.com/playlist?list=PLzMcBGfZo4-n40rB1XaJ0ak1bemvlqumQ"
        break

    elif [ "$ris2" = "5" ]; then
        clear
        break
    
    else
        clear
    fi
done