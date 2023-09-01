#!/bin/bash

while true; do
	clear
	echo "---web"
	echo ""
	echo "html  css"
	echo ""
	echo "------------------LINGUAGGI"
	echo ""
	echo "1. C"
	echo "2. C++"
	echo "3. Java"
	echo "4. Javascript"
	echo "5. Python"
	echo ""
	echo ""
	echo "-------------------MOBILE"
	echo ""
	echo "6. Kotlin"
	echo "7. flutter"
	echo ""
	echo ""
	echo "-------------------DATABASE"
	echo ""
	echo "8. mongoDB"
	echo "9. SQL"
	echo ""
	echo "***************************************************************"
	echo ++
	echo ""
	echo "10. bash"
	echo "11. CDM"
	echo "12. powershell"
	echo ""
	echo ""
	echo ALTRO
	echo ""
	echo "13. internet"
	echo "14. PC"
	echo ""
	echo ""
	echo "15. esci"
	echo ""
	echo ""
	echo ""
	read -p "Cosa vuoi fare? " S

	if [ "$S" = "html"]; then
		firefox "https://youtu.be/kUMe1FH4CHE?feature=shared"
	
	elif [ "$S" = "css"]; then
		firefox "https://youtu.be/OXGznpKZ_sA?feature=shared"

	elif [ "$S" = "html + css"]; then
		firefox "https://youtu.be/HGTJBPNC-Gw?feature=shared"




	elif [ "$S" = "1" ]; then
		source linux/studio/C.sh
		break

	elif [ "$S" = "2" ]; then
		source linux/studio/C++.sh
		break
	
	elif [ "$S" = "3" ]; then
		source linux/studio/Java.sh
		break

	elif [ "$S" = "4" ]; then
		source linux/studio/Javascript.sh
		break
	
	elif [ "$S" = "5" ]; then
		source linux/studio/Python.sh
		break
	
	elif [ "$S" = "6" ]; then
		source linux/studio/mobile/kotlin.sh
		break
	
	elif [ "$S" = "7" ]; then
		source linux/studio/mobile/flutter.sh
		break

	elif [ "$S" = "8" ]; then
		firefox "https://youtu.be/c2M-rlkkT5o?si=EYxVmI_aWLJYG06K"
		break

	elif [ "$S" = "9" ]; then
		firefox "https://youtu.be/5OdVJbNCSso?si=LkFaEiLIf52Tr-mR"
		break
	
	elif [ "$S" = "10" ]; then
		firefox "https://youtu.be/tK9Oc6AEnR4?feature=shared"
		break

	elif [ "$S" = "11" ]; then
		firefox "https://learn.microsoft.com/en-us/windows-server/administration/windows-commands/windows-commands"
		break
	
	elif [ "$S" = "12" ]; then
		firefox "https://learn.microsoft.com/en-us/powershell/scripting/learn/ps101/05-formatting-aliases-providers-comparison?view=powershell-5.1"
		break
	
	elif [ "$S" = "13" ]; then
		source linux/studio/network.sh
		break

	elif [ "$S" = "14" ]; then
		source linux/studio/PC.sh
		break

	elif [ "$S" = "15" ]; then
		clear
		break
	
	
	else 
		clear

	fi

done

