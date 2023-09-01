#!/bin/bash
while true; do
    clear
    echo ""
    echo "1. base"
    echo "2. android"
    echo ""
    echo ""
    echo "3. esci"
    echo ""

    read -p "Scegli: " ris

    if [ "$ris" = "3" ]; then
        clear
        break

    elif [ "$ris" = "2" ]; then
        firefox "https://youtu.be/9-pFPGAOSZQ?si=iKlrE4Fzax6RPofP"
        break

    elif [ "$ris" = "1" ]; then
        firefox "https://youtu.be/EExSSotojVI?si=2mO28d4wex88QPxi"
        break

    else
        clear

    fi

done