#!/bin/bash

while true; do
    clear
    echo ""
    echo "1. networking"
    echo "2. protocolli --wikipedia"
    echo ""
    echo "3. esci"
    echo ""
    echo ""
    read -p "Scegli: " ris2

    if [ "$ris2" = "1" ]; then
        firefox "https://youtu.be/xmpYfyNmWbw"
        break

    elif [ "$ris2" = "2" ]; then
        firefox "https://it.wikipedia.org/wiki/Protocollo_di_rete"
        break
    elif [ "$ris2" = "3" ]; then
        clear
        break
    
    else
        clear
    fi
done