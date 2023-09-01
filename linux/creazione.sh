#!/bin/bash

directory="/home/Utente/Desktop/esperimenti/prove"

while true; do
    clear
    echo ""
    echo "1. C"
    echo "2. C++"
    echo "3. Javascript"
    echo "4. Java"
    echo "5. Python"
    echo ""
    echo "6. esci"
    echo ""
    echo ""
    read -p "Seleziona una scelta: " scelta

    case $scelta in
        1)
            if [ ! -d "$directory/C" ]; then
                mkdir "$directory/C"
            fi
            cd "$directory/C"
            if [ ! -f "prova.c" ]; then
                touch "prova.c"
            fi
            cd "$directory"
            ;;
        2)
            if [ ! -d "$directory/C++" ]; then
                mkdir "$directory/C++"
            fi
            cd "$directory/C++"
            if [ ! -f "prova.cpp" ]; then
                touch "prova.cpp"
            fi
            cd "$directory"
            ;;
        3)
            if [ ! -d "$directory/Javascript" ]; then
                mkdir "$directory/Javascript"
            fi
            cd "$directory/Javascript"
            if [ ! -f "prova.js" ]; then
                touch "prova.js"
            fi
            cd "$directory"
            ;;
        4)
            if [ ! -d "$directory/Java" ]; then
                mkdir "$directory/Java"
            fi
            cd "$directory/Java"
            if [ ! -f "prova.java" ]; then
                touch "prova.java"
            fi
            cd "$directory"
            ;;
        5)
            if [ ! -d "$directory/Python" ]; then
                mkdir "$directory/Python"
            fi
            cd "$directory/Python"
            if [ ! -f "prova.py" ]; then
                touch "prova.py"
            fi
            cd "$directory"
            ;;
        6)
            clear
            exit
            ;;
        *)
            ;;
    esac
done
