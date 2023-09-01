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
    echo.
    echo "1. Javascript generale"
    echo "2. vanilla Javascript"
    echo "3. ES6"
    echo.
    echo "4. esci"
    echo.
    echo.


    read -p "Scegli: " ris2

    if [ "$ris2" = "1" ]; then
        firefox "https://youtu.be/8dWL3wF_OMw"
        break

    elif [ "$ris2" = "2" ]; then
        firefox "https://youtube.com/playlist?list=PLillGF-RfqbbnEGy3ROiLWk7JMCuSyQtX"
        break
    elif [ "$ris2" = "3" ]; then
        firefox "https://youtube.com/playlist?list=PL0qAPtx8YtJceyk5_NpNvLbbkrmfX9kkw"
        break
    
    elif [ "$ris2" = "4" ]; then
        clear
        break

    else
        clear
    fi
done