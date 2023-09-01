#!/bin/bash

while true; do
    clear
    read -p "Come va? " risposta

    if [ "$risposta" = "novita" ]; then
        clear
        break

    elif [ "$risposta" = "PS" ]; then
        clear
        break

    elif [ "$risposta" = "chatGPT" ]; then
        firefox "https://chat.openai.com/"
        break

    elif [ "$risposta" = "voglioCreare" ]; then
        clear
        break

    elif [ "$risposta" = "comeva?" ]; then
        source linux/stato.sh
        break

    elif [ "$risposta" = "giochiamo -a" ]; then
        code linux/game/prova.c
        break

    elif [ "$risposta" = "giochiamo" ]; then
        cd linux/game
        ./gioco
        break

    elif [ "$risposta" = "studiamo" ]; then
        source linux/studio/studio.sh
        break

    elif [ "$risposta" = "internet" ]; then
        source linux/connessione/connessione.sh
        break

    elif [ "$risposta" = "lavoro" ]; then
        clear
        break

    elif [ "$risposta" = "-h" ]; then
        clear
        cat help.txt
        break

    else
        clear
        echo "usa -h"
        sleep 5
    fi
done





