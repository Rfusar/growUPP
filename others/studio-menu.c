#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"


void iterazione(const char azione[], struct Comando comandi[], int numComandi) {
    for (int i = 0; i < numComandi; i++) {
        if (strcmp(azione, comandi[i].comando) == 0) {
            comandi[i].azione();
            return;
        }
    }
}
void apri_link(const char azione[], struct ComandoSTRINGA comandi[], int numComandi) {
    for (int i = 0; i < numComandi; i++) {
        if (strcmp(azione, comandi[i].comando) == 0) {
            system(comandi[i].azione);
            return;
        }
    }
}

//menu LINGUAGGI
void menu_C(){
    char azione[8];
    struct ComandoSTRINGA comandi[] =  {
        {"C base", "start msedge https://youtu.be/Bz4MxDeEM6k?si=J_YPBNmXu5rS_Wll"},
        {"Pointer", "start msedge https://youtu.be/zuegQmMdy8M?si=-GIMiPqH72o2d6V5"}
    };
    int numComandi = sizeof(comandi) / sizeof(comandi[0]);

    system("cls");
    printf("C base\n");
    printf("Pointer\n\n");

    scanf("%s", azione);
    apri_link(azione,comandi,numComandi);
}
void menu_Cpp(){
    char azione[15];
    struct ComandoSTRINGA comandi[] =  {
        {"C++ base", "start msedge https://youtu.be/P2jVybFyh3A?si=U5Il3JGQPu6vZi-S"},
        {"GUI", "start msedge https://youtube.com/playlist?list=PLFk1_lkqT8MbVOcwEppCPfjGOGhLvcf9G"},
        {"Project...", "start msedge https://youtube.com/playlist?list=PLRJuRxIsYMUX3iSmvyWPdKFaCooL455YQ"},
        {"Documentazione", "start msedge https://devdocs.io/cpp/"},
        {"Pointer", "start msedge https://youtu.be/zuegQmMdy8M?si=-GIMiPqH72o2d6V5"},
        {"OOP", "start msedge https://youtu.be/0NwsayeOsd4?si=ieY3PiIEfcBKK4UZ"},
        {"come funziona la CPU con C++...", "start msedge https://youtu.be/qJgsuQoy9bc?si=4APGIB_8tm5xuuRz"}
    };
    int numComandi = sizeof(comandi) / sizeof(comandi[0]);

    system("cls");
    printf("C++ base\n");
    printf("GUI\n");
    printf("Project\n");
    printf("Documentazione\n");
    printf("Pointer\n");
    printf("OOP\n");
    printf("come funziona la CPU con C++...\n\n\n");

    scanf("%s", azione);
    apri_link(azione,comandi,numComandi);
}
void menu_Java(){
    char azione[10];
    struct ComandoSTRINGA comandi[] =  {
        {"Java base", "start msedge https://youtu.be/xk4_1vDrzzo"},
        {"GUI", "start msedge https://youtu.be/Kmgo00avvEw"},
        {"Documentazione","start msedge https://docs.oracle.com/en/java/javase/21/docs/api/index.html"},
    };
    int numComandi = sizeof(comandi) / sizeof(comandi[0]);

    system("cls");
    printf("Java base\n");
    printf("GUI\n");
    printf("Documentazione\n\n\n");

    scanf("%s", azione);
    apri_link(azione,comandi,numComandi);
}
void menu_Javascript(){
    char azione[42];
    struct ComandoSTRINGA comandi[] =  {
        {"Javascript generale", "start msedge https://youtu.be/BI1o2H9z9fo?si=aqOw_SCKfHH9PGXt"},
        {"vanilla Javascript", "start msedge https://youtube.com/playlist?list=PLFk1_lkqT8MbVOcwEppCPfjGOGhLvcf9G"},
        {"React", "start msedge https://youtu.be/w7ejDZ8SWv8?si=ew-z7l-L8GhlSQft"},
        {"Angular", "start msedge https://youtu.be/3dHNOWTI7H8?si=dtFhrdb9zEGDq-kO"},
        {"JavaScript Pro Tips - Code This, NOT That", "start msedge https://youtu.be/Mus_vwhTCq0?si=RGM8rcDC6J0chgk2"},
    };
    int numComandi = sizeof(comandi) / sizeof(comandi[0]);

    system("cls");
    printf("Javascript generale\n");
    printf("vanilla Javascript\n");
    printf("React\n");
    printf("Angular\n");
    printf("come funziona la CPU con C++...\n\n\n");
    

    scanf("%s", azione);
    apri_link(azione,comandi,numComandi);
}
void menu_Kotlin(){
    char azione[14];
    struct ComandoSTRINGA comandi[] =  {
        {"Kotlin base", "start msedge https://youtu.be/9-pFPGAOSZQ?si=iKlrE4Fzax6RPofP"},
        {"androidStudio", "start msedge https://youtu.be/EExSSotojVI?si=2mO28d4wex88QPxi"}
    };
    int numComandi = sizeof(comandi) / sizeof(comandi[0]);

    system("cls");
    printf("Kotlin base\n");
    printf("androidStudio\n\n\n");

    scanf("%s", azione);
    apri_link(azione,comandi,numComandi);
}
void menu_Dart(){
    char azione[10];
    struct ComandoSTRINGA comandi[] =  {
        {"Dart base", "start msedge https://youtu.be/WxuViERlkyE?si=CWBIK-WyR4965j3X"},
    };
    int numComandi = sizeof(comandi) / sizeof(comandi[0]);

    system("cls");
    printf("Dart base\n\n\n");

    scanf("%s", azione);
    apri_link(azione,comandi,numComandi);
}
void menu_Golang(){
    char azione[39];
    struct ComandoSTRINGA comandi[] = {
        {"Go base", "start msedge https://youtu.be/YS4e4q9oBaU?si=kzyRGtpfI6lqa75O"},
        {"github.com/compose-spec/compose-go/cli", "start msedge https://pkg.go.dev/github.com/compose-spec/compose-go/cli"},
        {"github.com/spf13/cobra", "start msedge https://pkg.go.dev/github.com/spf13/cobra"},
        {"github.com/docker/cli", "start msedge https://pkg.go.dev/github.com/docker/cli"},
        {"k8s.io/component-base/cli", "start msedge https://pkg.go.dev/k8s.io/component-base/cli"},
        //LIBRERIE GO ---> github
        {"compose-go", "start msedge https://github.com/compose-spec/compose-go/tree/v1.20.0"},
    };
    int numComandi = sizeof(comandi) / sizeof(comandi[0]);

    system("cls");
    printf("-------- DOC ----------\n\n");
    printf("github.com/compose-spec/compose-go/cli\n");
    printf("github.com/spf13/cobra\n");
    printf("github.com/docker/cli\n");
    printf("k8s.io/component-base/cli\n");
    printf("------ lib github ------\n\n");
    printf("compose-go\n\n\n");

    scanf("%s", azione);
    apri_link(azione,comandi,numComandi);
}
//menu DB
void menu_SQL(){
    char azione[3];
    struct ComandoSTRINGA comandi[] =  {
        {"SQL", "start msedge https://youtu.be/5OdVJbNCSso?si=LkFaEiLIf52Tr-mR"},
    };
    int numComandi = sizeof(comandi) / sizeof(comandi[0]);

    system("cls");
    printf("SQL\n\n\n");

    scanf("%s", azione);
    apri_link(azione,comandi,numComandi);
}
void menu_Postgres(){}
void menu_MongoDB(){
    char azione[8];
    struct ComandoSTRINGA comandi[] =  {
        {"MongoDB", "start msedge https://youtu.be/c2M-rlkkT5o?si=EYxVmI_aWLJYG06K"},
    };
    int numComandi = sizeof(comandi) / sizeof(comandi[0]);

    system("cls");
    printf("MongoDB\n\n\n");

    scanf("%s", azione);
    apri_link(azione,comandi,numComandi);
}
//menu system
void system_Linux(){
    char azione[5];
    struct ComandoSTRINGA comandi[] =  {
        {"Bash", "start msedge https://youtube.com/playlist?list=PLT98CRl2KxKGj-VKtApD8-zCqSaN2mD4w&si=qm8o-6Vmx5pzzTON"},
    };
    int numComandi = sizeof(comandi) / sizeof(comandi[0]);

    system("cls");
    printf("Bash\n\n\n");

    scanf("%s", azione);
    apri_link(azione,comandi,numComandi);
}
void system_Windows(){
    char azione[30];
    struct ComandoSTRINGA comandi[] =  {
        //POWERSHELL
        {"Powershell base 1", "start msedge https://youtu.be/ZOoCaWyifmI?si=J9DzC5dkn4DV5y_M"},
        {"Powershell base 2", "start msedge https://youtube.com/playlist?list=PLlVtbbG169nFq_hR7FcMYg32xsSAObuq8&si=5yEMjmCU061vO8FU"},
        {"GUI Poweshell", "start msedge https://youtube.com/playlist?list=PLnK11SQMNnE5_cl8n54h6OXNMnGl5Odtq&si=aI18J93ZmnkvuqLr"},
        {"Documentazione", "start msedge C:\\Users\\Utente\\Desktop\\info\\powershell-scripting-powershell-5.1.pdf"},
        //CMD
        {"CMD base", "start msedge https://youtu.be/qnXe1gecux8?si=OjoQJcp3STqEu3O8"},
        {"40 comandi...", "start msedge https://youtu.be/Jfvg3CS1X3A?si=TL_4rYwEqt_LJfct"},
        {"documentazione microsoft", "start msedge C:\\Users\\Utente\\Desktop\\info\\windows-server-administration-windows-commands.pdf"},
        {"windows server documentazione", "start msedge C:\\Users\\Utente\\Desktop\\info\\windows-server-get-started.pdf"},
    };
    int numComandi = sizeof(comandi) / sizeof(comandi[0]);

    system("cls");
    printf("Powershell base 1\n");
    printf("Powershell base 2\n");
    printf("GUI Poweshell\n");
    printf("Documentazione\n\n");
    printf("CMD base\n");
    printf("40 comandi...\n");
    printf("Documentazione microsoft\n");
    printf("Windows server documentazione\n\n\n");

    scanf("%s", azione);
    apri_link(azione,comandi,numComandi);
}
//menu internet
void menu_appunti_internet(){
    char azione[8];
    struct ComandoSTRINGA comandi[] = {
        {"cap_1","cls && type C:\\Users\\Utente\\Desktop\\growup\\others\\appunti\\reti_e_internet\\capitolo_1.txt | more"},
        {"cap_2","cls && type C:\\Users\\Utente\\Desktop\\growup\\others\\appunti\\reti_e_internet\\capitolo_2.txt | more"},
        {"cap_3 A","cls && type C:\\Users\\Utente\\Desktop\\growup\\others\\appunti\\reti_e_internet\\capitolo_3\\collegamenti_punto-a-punto.txt | more"},
        {"cap_3 B","cls && type C:\\Users\\Utente\\Desktop\\growup\\others\\appunti\\reti_e_internet\\capitolo_3\\reti_multipunto.txt | more"}
    };
    int numComandi = sizeof(comandi) / sizeof(comandi[0]);

    system("cls");
    printf("cap_1\n");
    printf("cap_2\n");
    printf("cap_3 A\n");
    printf("cap_3 B\n\n\n");

    scanf("%s", azione);
    apri_link(azione,comandi,numComandi); 
}
void menu_internet(){
    char azione[11];
    struct ComandoSTRINGA comandi[] =  {
        {"networking", "start msedge https://youtu.be/xmpYfyNmWbw"},
        {"protocolli", "start msedge https://it.wikipedia.org/wiki/Protocollo_di_rete"},
    };
    int numComandi = sizeof(comandi) / sizeof(comandi[0]);

    struct Comando comandi2[] = {
        {"appunti", menu_appunti_internet},
    };
    int numComandi2 = sizeof(comandi2) / sizeof(comandi2[0]);

    system("cls");
    printf("networking\n");
    printf("protocolli\n\n\n");

    scanf("%s", azione);

    iterazione(azione,comandi2,numComandi2);
    apri_link(azione,comandi,numComandi);
    
    
}

void menu_PC(){
    char azione[10];
    struct ComandoSTRINGA comandi[] =  {
        {"hardware", "start msedge https://youtu.be/d86ws7mQYIg"},
        {"SSD", "start msedge https://youtu.be/5Mh3o886qpg?si=tRv55Q1FdrDBhSJi"},
        {"bluetooth", "start msedge https://youtu.be/1I1vxu5qIUM?si=aitFWZo9j6jGDHfo"},
        {"tastiera", "start msedge https://youtu.be/h-NM1xSSzHQ?si=Yr42KCAUJav19rUj"},
    };
    int numComandi = sizeof(comandi) / sizeof(comandi[0]);

    system("cls");
    printf("hardware\n");
    printf("SSD\n");
    printf("bluetooth\n");
    printf("tastiera\n\n\n");

    scanf("%s", azione);
    apri_link(azione,comandi,numComandi);
}
//menu altro
void menu_appunti(){
    char azione[5];
    struct ComandoSTRINGA comandi[] =  {
        {"git","type C:\\Users\\Utente\\Desktop\\growup\\others\\appunti\\linguaggi\\git.txt | more"},
        {"javascript","type C:\\Users\\Utente\\Desktop\\growup\\others\\appunti\\linguaggi\\javascript.txt | more"},
        {"windows","type C:\\Users\\Utente\\Desktop\\growup\\others\\appunti\\linguaggi\\windows.txt | more"},
        {"linux","type C:\\Users\\Utente\\Desktop\\growup\\others\\appunti\\linguaggi\\linux.txt | more"}
    };
    int numComandi = sizeof(comandi) / sizeof(comandi[0]);

    system("cls");
    printf("------------- APPUNTI --------------\n\n");
    printf("git\n");
    printf("javascript\n");
    printf("linux\n");
    printf("windows\n\n");

    scanf("%s", azione);
    system("cls");
    apri_link(azione,comandi,numComandi);
}
void menu_Microservizi(){
    char azione[26];
    struct ComandoSTRINGA comandi[] =  {
        //MICROSERVIZI
        {"Video DOCKER e KUBERNETES", "start msedge https://youtu.be/kTp5xUtcalw?si=gtTlIsJJDebue-Zl"},
        {"github di DOCKER", "start msedge https://github.com/docker"},
        {"github di KUBERNETES", "start msedge https://github.com/kubernetes"},
        //DOCKER
        {"Base DOCKER", "start msedge https://youtu.be/RqTEHSBrYFw?si=lheMncbmxt4tTg7M"},
        {"informazione Dockerfile", "start msedge https://docs.docker.com/engine/reference/builder/#parser-directives"}
    };
    int numComandi = sizeof(comandi) / sizeof(comandi[0]);

    system("cls");
    printf("------------- MICROSERVIZI --------------\n\n");
    printf("Video DOCKER e KUBERNETES\n\n");
    printf("github di DOCKER\n");
    printf("github di KUBERNETES\n\n");

    printf("------------ DOCKER ---------------------\n\n");
    printf("Base DOCKER\n");
    printf("informazione Dockerfile\n");

    scanf("%s", azione);
    apri_link(azione,comandi,numComandi);
}
void menu_Musica(){
    //aggiorna
    char azione[7];
    struct ComandoSTRINGA comandi[] =  {
        {"pagina", "C:\\Users\\Utente\\Desktop\\growup\\others\\appunti\\corsi\\musica.html"},
    };
    int numComandi = sizeof(comandi) / sizeof(comandi[0]);

    scanf("%s", azione);
    apri_link(azione,comandi,numComandi);
}
void menu_EconomiaAziendale(){
    char azione[35];
    struct ComandoSTRINGA comandi[] = {
        {"Acconto IVA","start msedge C:\\Users\\Utente\\Desktop\\presenze_lavoro\\ECONOMIA_AZIENDALE\\acconto_iva.pdf"},
        {"Esercizi contabilita pratica","start msedge C:\\Users\\Utente\\Desktop\\presenze_lavoro\\ECONOMIA_AZIENDALE\\esercizi_contabilita_pratica.pdf"},
        {"Fatturazione e regime iva","start msedge C:\\Users\\Utente\\Desktop\\presenze_lavoro\\ECONOMIA_AZIENDALE\\fatturazione_e_regime_iva.pdf"},
        {"Le vendite e il regolamento","start msedge C:\\Users\\Utente\\Desktop\\presenze_lavoro\\ECONOMIA_AZIENDALE\\le_vendite_e_il_regolamento.pdf"},
        {"Metodo partita doppia","start msedge C:\\Users\\Utente\\Desktop\\presenze_lavoro\\ECONOMIA_AZIENDALE\\metodo_partita_doppia.pdf"},
        {"Operzioni di vendita e regolamento","start msedge C:\\Users\\Utente\\Desktop\\presenze_lavoro\\ECONOMIA_AZIENDALE\\Operazioni_di_vendita_e_regolamento.pdf"},
        {"Quaderno appunti","start msedge C:\\Users\\Utente\\Desktop\\presenze_lavoro\\ECONOMIA_AZIENDALE\\quaderno_appunti.pdf"},
        {"Stato patrimoniale","start msedge C:\\Users\\Utente\\Desktop\\presenze_lavoro\\ECONOMIA_AZIENDALE\\stato_patrimoniale.pdf"},
        {"Un anno in azienda","start msedge C:\\Users\\Utente\\Desktop\\presenze_lavoro\\ECONOMIA_AZIENDALE\\Un_anno_in_azienda.pdf"},
    };

    int numComandi = sizeof(comandi) / sizeof(comandi[0]);

    system("cls");
    printf("cose vecchie, pero ce roba utile\n\n\n\n");
    printf("ECONOMIA AZIENDALE\n\n\n");
    printf("Acconto IVA\n");
    printf("Esercizi contabilita pratica\n");
    printf("Fatturazione e regime iva\n");
    printf("Le vendite e il regolamento\n");
    printf("Metodo partita doppia\n");
    printf("Operzioni di vendita e regolamento\n");
    printf("Quaderno appunti\n");
    printf("Stato patrimoniale\n");
    printf("Un anno in azienda\n\n\n");

    scanf("%s", azione);
    apri_link(azione,comandi,numComandi);
}
void menu_Universita(){
    char azione[7];
    struct ComandoSTRINGA comandi[] =  {
        {"informatica", "start msedge C:\\Users\\Utente\\Desktop\\growup\\others\\appunti\\corsi\\informatica.html"},
        {"matematica", "start msedge C:\\Users\\Utente\\Desktop\\growup\\others\\appunti\\corsi\\matematica.html"},
        {"Concetti", "start msedge C:\\Users\\Utente\\Desktop\\growup\\others\\appunti\\appuntiMATH\\conceti.html"},
        //LIBRI
        {"Inizio matematica","start msedge https://www.matematicamente.it/staticfiles/matematica-C3/MatematicaC3-Algebra1-3ed-completo.pdf"},
        {"Algebra","start msedge https://people.dm.unipi.it/martelli/Alg Lin.pdf"},
        {"Fisica","start msedge https://www0.mi.infn.it/~fanti/FisicaGenerale/fanti_FisGen.pdf"},
        {"Elettronica","start msedge http://www.energiazero.org/libri_elettronica_80/Corso_di_elettronica_fondamentale.pdf"},
        {"Biologia","start msedge https://www.dotto.me/0/ld/argomento/biologia/ebook/Biologia-Teoria-Esercizi-Edises.pdf"},
        
    };
    int numComandi = sizeof(comandi) / sizeof(comandi[0]);

    system("cls");
    printf("informatica\n");
    printf("protocolli\n\n\n");
    printf("------------- LIBRI --------------\n\n");
    printf("Inizio matematica\n");
    printf("Algebra\n");
    printf("Fisica\n");
    printf("Elettronica\n");
    printf("Biologia\n\n");
    printf("Concetti\n\n\n");

    scanf("%s", azione);
    apri_link(azione,comandi,numComandi);
}
void menu_Supereore(){
    char azione[15];
    struct ComandoSTRINGA comandi[] =  {
        {"linux", "start msedge https://youtube.com/playlist?list=PLKZZXjqZrqQvfAhgY7Nit5ynpK3kN_3tx&si=C4SkxLHFLgJ8VrxA"},
        {"etichal hacker", "start msedge https://youtube.com/playlist?list=PLKZZXjqZrqQtKGgJuAYhzYczf1KIdswvO&si=T-B0_NzU2Q1yEG3D"}
    };
    int numComandi = sizeof(comandi) / sizeof(comandi[0]);

    system("cls");
    printf("linux\n");
    printf("etichal hacker\n\n\n");

    scanf("%s", azione);
    apri_link(azione,comandi,numComandi);
}
//lavoro
void menu_lavoro(){
    char azione[9];
    struct ComandoSTRINGA comandi[] = {
        {"API_GO", "cd C:\\Users\\Utente\\Desktop\\presenze_lavoro\\esercizi\\progetto_api_GO && start code C:\\Users\\Utente\\Desktop\\presenze_lavoro\\esercizi\\progetto_api_GO"},
        {"WEB_PAGE", "cd C:\\Users\\Utente\\Desktop\\presenze_lavoro\\esercizi\\progettoAndrea2 && start code C:\\Users\\Utente\\Desktop\\presenze_lavoro\\esercizi\\progettoAndrea2 && start msedge http://127.0.0.1:5000 && C:\\Users\\Utente\\Desktop\\presenze_lavoro\\esercizi\\progettoAndrea2\\venv\\Scripts\\activate && python run.py"},
        {"conn_remoto", "C:\\Users\\Utente\\Desktop\\growup\\others\\AnyDesk.exe"},
    };
    int numComandi = sizeof(comandi)/ sizeof(comandi[0]);

    system("cls");
    printf("API_GO\n");
    printf("WEB_PAGE\n");
    printf("conn_remoto\n\n\n");

    scanf("%s", azione);
    apri_link(azione,comandi,numComandi);
}

//*MENU STUDIO
void menu_studio(){
    char azione[11];
    struct Comando comandi[] = {
        //LINGUAGGI
        {"C",menu_C},
        {"C++",menu_Cpp},
        {"Go",menu_Golang},
        {"Java",menu_Java},
        {"Javascript",menu_Javascript},
        {"Kotlin",menu_Kotlin},
        {"Dart",menu_Dart},
        //DB
        {"Postgres",menu_Postgres},
        {"SQL",menu_SQL},
        {"MongoDB",menu_MongoDB},
        //SYSTEM
        {"Linux",system_Linux},
        {"Windows",system_Windows},
        //ALTRO
        {"Internet",menu_internet},
        {"PC",menu_PC},
        //ALTRO +++
        {"-a", menu_appunti},
        {"-ms",menu_Microservizi},
        {"-m",menu_Musica},
        {"-ea",menu_EconomiaAziendale},
        {"-uni",menu_Universita},
        {"-sh",menu_Supereore},
    };
    int numComandi = sizeof(comandi) / sizeof(comandi[0]);

    system("cls");
    printf("---------LINGUAGGI\n\n");
    printf("C\n");
    printf("C++\n");
    printf("Go\n");
    printf("Java\n");
    printf("Javascript\n\n\n");
    printf("----MOBILE\n\n");
    printf("Kotlin\n");
    printf("Dart\n\n\n");
    printf("---------DATABSE\n\n");
    printf("SQL\n");
    printf("Postgres\n");
    printf("MongoDB\n\n\n");
    printf("---------+++\n");
    printf("Linux\n");
    printf("Windows\n\n");
    printf("Internet\n");
    printf("PC\n\n\n");
    printf("***********\n");
    printf("# Appunti -a\n");
    printf("# Microservizi -ms\n\n");
    printf("# Ripasso musica  -m\n");
    printf("# Economia aziendale  -ea\n");
    printf("# Universita  -uni\n");
    printf("# Supereore -sh\n\n\n");

    scanf("%s", azione);
    iterazione(azione,comandi,numComandi);
}



