#include <stdio.h>
#include <stdlib.h>
#include "others\header.h"

void menu_homepage();

//PROGRAMMA
int main(){ 
    menu_homepage();
    return 0;
}


//*HELP
void menu_help(){
    system("cls");
    printf("LISTA COMANDI:\n\n\n");
    printf("\tnotizie\tricerca\tidea\n\n");
    printf("\tps2\tfl\tlinux\n\n");
    printf("\tstudiamo\tlavoro\tmusica\n\n\n");

    system("pause");
    menu_homepage();
}

//*MENU HOMEPAGE
void menu_homepage(){
    char risposta[9];
    struct ComandoSTRINGA comandi[] = {
        {"notizie", "C:\\Users\\Utente\\Desktop\\growup\\others\\notizie\\logica\\checkNotizie.bat"},
        {"ricerca","start msedge https://www.google.com/advanced_search"},
        {"idea", "https://app.diagrams.net/"},
        //PROGRAMMI
        {"ps2", "\"C:\\Program Files (x86)\\PCSX2\\pcsx2.exe\""},
        {"fl", "\"C:\\Program Files (x86)\\Image-Line\\FL Studio 20\\FL64.exe\""},
        {"linux", "\"C:\\Program Files\\Oracle\\VirtualBox\\VirtualBox.exe\""},
        {"musica", "C:\\Users\\Utente\\Desktop\\growup\\others\\musica_studio.exe"},
    };
    int numComandi = sizeof(comandi) / sizeof(comandi[0]);

    struct Comando comandi2[] = {  
        {"help",menu_help},  
        {"studiamo", menu_studio},
        {"lavoro", menu_lavoro},
    };
    int numComandi2 = sizeof(comandi2) / sizeof(comandi2[0]);
    
    system("cls");
    printf("come va? ");
    scanf("%s", risposta);

    iterazione(risposta,comandi2,numComandi2);
    apri_link(risposta,comandi,numComandi);
}

