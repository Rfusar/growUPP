#!/bin/source

while true; do

    clear
    echo Quello che passa...
    echo ""
    echo "1. .NET"  
    echo "2. PC corso"
    echo "3. curl"
    echo "4. arp"
    echo ""
    echo "5. esci"
    echo ""
    echo ""

    read -p "Scegli: " risposta

    if [ "$risposta" = "5" ]; then
        clear
        break

    elif [ "$risposta" = "4" ]; then
        firefox "https://www.fortinet.com/it/resources/cyberglossary/what-is-arp"
        break

    elif [ "$risposta" = "3" ]; then
        firefox "https://curl.se/docs/manpage.html"
        break

    elif [ "$risposta" = "2" ]; then
        firefox "https://youtu.be/8mAITcNt710"
        break

    elif [ "$risposta" = "1" ]; then
        firefox "https://www.youtube.com/live/kdPtNMb8tPw?feature=share"
        break
    else 
        clear

done