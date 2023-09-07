#!/bin/bash

while true; do
    clear
    echo ""
    echo "cap_1 -- introduzione"
    echo "cap_2 -- concetti base delle reti"
    echo "cap_3 -- concetti base delle reti"
    echo ""
    echo ""

    read -p "Quale capitolo? " n

    if [ "$n" = "cap_1" ]; then
        clear
        more appunti/reti_e_internet/capitolo_1.txt

    elif [ "$n" = "cap_2" ]; then
        clear
        more appunti/reti_e_internet/capitolo_2.txt

    elif [ "$n" == "cap_3" ]; then
        while true; do
            clear
            echo "3A -- collegamenti punto-a-punto"
            echo
            echo

            read -p "Scegli: " n1

            if [ "$n1" = "3A" ]; then
                clear
                more appunti/reti_e_internet/capitolo_3/collegamenti_punto-a-punto.txt
                break
            fi
        done

    else
        continue
    fi
done
