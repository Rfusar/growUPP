#!/bin/bash

while true; do
    clear
    echo ""
    echo "1. Processi in corso"
    echo "2. CPU"
    echo "3. RAM"
    echo "4. Hardisk"
    echo "5. Scheda rete"
    echo ""
    echo "6. mostra tutto --generico"
    echo ""
    echo "7. Esci"
    echo ""

    read -p "Scegli: " scelta

    case $scelta in
        1)
            clear
            htop
            ;;
        2)
            clear
            echo "---------------------- CPU:"
            echo ""
            lscpu
            echo ""
            echo ""
            echo ""
            echo ""
            read -p "Premi Invio per continuare..."
            ;;
        3)
            clear
            echo "---------------------- RAM:"
            echo ""
            free -h
            echo ""
            echo ""
            echo ""
            echo ""
            read -p "Premi Invio per continuare..."
            ;;
        4)
            clear
            echo "---------------------- HARDISK:"
            echo ""
            df -h
            echo ""
            echo ""
            echo ""
            echo ""
            read -p "Premi Invio per continuare..."
            ;;
        5)
            clear
            echo "---------------------- SCHEDA RETE:"
            echo ""
            ip a
            echo ""
            echo ""
            echo ""
            echo ""
            read -p "Premi Invio per continuare..."
            ;;
        6)
            clear
            echo "---------------------- SCHEDA RETE:"
            echo ""
            ip a
            echo ""
            echo "---------------------- SCHEDA GRAFICA:"
            echo ""
            lshw -C display
            echo ""
            echo "---------------------- HARDISK:"
            echo ""
            lsblk
            echo ""
            echo "---------------------- RAM:"
            echo ""
            dmidecode -t memory
            echo ""
            echo "---------------------- CPU:"
            echo ""
            lscpu
            echo ""
            echo ""
            echo ""
            echo ""
            read -p "Premi Invio per continuare..."
            ;;
        7)
            clear
            exit
            ;;
        *)
            ;;
    esac
done
