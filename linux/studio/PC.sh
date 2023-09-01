#!/bin/bash

while true; do
    clear
    echo ""
    echo "1. hardware"
    echo "2. altro --playlist"
    echo ""
    echo "3. esci"
    echo ""
    echo ""
    read -p "Scegli: " ris2

    if [ "$ris2" = "1" ]; then
        firefox "https://youtu.be/d86ws7mQYIg"
        break

    elif [ "$ris2" = "2" ]; then
        firefox "https://youtube.com/playlist?list=PL6rx9p3tbsMsZ9hUvU-kDOXc8Fot04Hhu"
        break
    elif [ "$ris2" = "3" ]; then
        clear
        break
    
    else
        clear
    fi
done