#!/bin/bash
while true; do
    clear
    echo ""
    echo "1. base"
    echo ""
    echo ""
    echo "2. esci"
    echo ""

    read -p "Scegli: " ris


    if [ "$ris" = "2" ]; then
        clear
        break

    elif [ "$ris" = "1" ]; then
        firefox "https://youtu.be/VPvVD8t02U8"
        break

    else
        clear
    fi
done