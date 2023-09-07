#!/bin/bash

while true; do
    clear
    echo ""
    echo "1. corso matematica -- Professore Antonio Corbo"
    echo "2. lezioni specifiche -- Elia Bombardelli"
    echo ""
    echo ""

    read -p "Scegli: " n

    if [ "$n" = "1" ]; then
        firefox "https://youtube.com/playlist?list=PLUL1bzfXcbX14C_LblfpQx_VHMHzO1nL6&si=TlpsuqbHsXBBgkdV"
        break

    elif [ "$n" = "2" ]; then
        firefox "https://www.youtube.com/@EliaBombardelli"
        break

    else
        continue
    fi
done
