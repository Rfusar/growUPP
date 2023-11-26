#include <iostream>
#include <cstdlib>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::vector;

class Dataset {
    public:
        vector<vector<string>> link;
        vector<vector<string>> RITORNO() const { return link; } 
};
//*LAYOUT
void MENU(Dataset dati, string titolo){
    cout << "---------------" << titolo << "---------------\n";
    for(int i = 0; i < dati.RITORNO().size(); i++){ cout << dati.RITORNO()[i][0] << "\n"; }
    cout << "\n\n\n";
}
void risposta(Dataset dati, string risposta){
    for(int i = 0; i < dati.RITORNO().size(); i++){
        if(dati.RITORNO()[i][0] == risposta){
            system(dati.RITORNO()[i][1].c_str());
        }
    }
}
void iterazione(vector<Dataset> totale, string titoli[]){
    string INPUT1; 
    system("cls");
    for(int i = 0; i < totale.size(); i++){ MENU(totale[i], titoli[i]); };
    std::cin >> INPUT1;
    system("cls");
    for(int i = 0; i < totale.size(); i++){risposta(totale[i], INPUT1); }
}
Dataset C, Cpp, Java, Javascript, Kotlin, Go, Durt;
Dataset Database;
Dataset Linux, Windows;
Dataset Docker, Kubernetes;
Dataset Programmi;
Dataset Web, Menu_appunti, Internet, PC, Economia_aziendale, Libri, Lavoro;
string INPUT;
//scegli il browser
string cmd = "start msedge ";

int main(){
    Web.link = {
        {"html_W3school", cmd+"https://www.w3schools.com/html/default.asp" },
        {"css_W3school", cmd+"https://www.w3schools.com/css/default.asp"},
        {"css_video",cmd+"https://youtu.be/OXGznpKZ_sA?si=Fc_CdIKeXmdf5jFo"},
        {"html_e_css___video",cmd+"https://youtu.be/dX8396ZmSPk?si=NBL_RYc5B8vNOZ0X"},
    };
    C.link = {
        {"C_base", cmd+"https://youtu.be/Bz4MxDeEM6k?si=J_YPBNmXu5rS_Wll"},
        {"C_Pointer", cmd+"https://youtu.be/zuegQmMdy8M?si=-GIMiPqH72o2d6V5"}
    };
    Cpp.link = {
        {"Cpp_base", cmd+"https://youtu.be/P2jVybFyh3A?si=U5Il3JGQPu6vZi-S"},
        {"Cpp_GUI", cmd+"https://youtube.com/playlist?list=PLFk1_lkqT8MbVOcwEppCPfjGOGhLvcf9G"},
        {"Cpp_Project...", cmd+"https://youtube.com/playlist?list=PLRJuRxIsYMUX3iSmvyWPdKFaCooL455YQ"},
        {"Cpp_Documentazione", cmd+"https://devdocs.io/cpp/"},
        {"Cpp_Pointer", cmd+"https://youtu.be/zuegQmMdy8M?si=-GIMiPqH72o2d6V5"},
        {"Cpp_OOP", cmd+"https://youtu.be/0NwsayeOsd4?si=ieY3PiIEfcBKK4UZ"},
        {"come_funziona_la_CPU_con_C++...", cmd+"https://youtu.be/qJgsuQoy9bc?si=4APGIB_8tm5xuuRz"},
    };
    Java.link = {
        {"Java_base", cmd+"https://youtu.be/xk4_1vDrzzo"},
        {"Java_GUI", cmd+"https://youtu.be/Kmgo00avvEw"},
        {"Java_springboot", cmd+"https://youtu.be/9SGDpanrc8U?si=PNODKfbLYG-IE3Tr"},
        {"Java_Documentazione", cmd+"https://docs.oracle.com/en/java/javase/21/docs/api/index.html"}
    };
    Javascript.link = {
        {"Javascript_generale", cmd+"https://youtu.be/BI1o2H9z9fo?si=aqOw_SCKfHH9PGXt"},
        {"vanilla_Javascript", cmd+"https://youtube.com/playlist?list=PLFk1_lkqT8MbVOcwEppCPfjGOGhLvcf9G"},
        {"React", cmd+"https://youtu.be/w7ejDZ8SWv8?si=ew-z7l-L8GhlSQft"},
        {"Angular", cmd+"https://youtu.be/3dHNOWTI7H8?si=dtFhrdb9zEGDq-kO"},
        {"JavaScript_Pro_Tips", cmd+"https://youtu.be/Mus_vwhTCq0?si=RGM8rcDC6J0chgk2"},
    };
    Kotlin.link = {
        {"Kotlin_base", cmd+"https://youtu.be/9-pFPGAOSZQ?si=iKlrE4Fzax6RPofP"},
        {"androidStudio", cmd+"https://youtu.be/EExSSotojVI?si=2mO28d4wex88QPxi"}
    };
    Go.link = {
        {"Go base", cmd+"https://youtu.be/YS4e4q9oBaU?si=kzyRGtpfI6lqa75O"},
        //documentazione
        {"github.com/compose-spec/compose-go/cli", cmd+"https://pkg.go.dev/github.com/compose-spec/compose-go/cli"},
        {"github.com/spf13/cobra", cmd+"https://pkg.go.dev/github.com/spf13/cobra"},
        {"github.com/docker/cli", cmd+"https://pkg.go.dev/github.com/docker/cli"},
        {"k8s.io/component-base/cli", cmd+"https://pkg.go.dev/k8s.io/component-base/cli"},
        //github
        {"compose-go", cmd+"https://github.com/compose-spec/compose-go/tree/v1.20.0"},
    };
    Durt.link = {
        {"Durt", cmd+"https://youtu.be/WxuViERlkyE?si=CWBIK-WyR4965j3X"},
    };
    Linux.link = {
        {"bash", cmd+"https://youtube.com/playlist?list=PLT98CRl2KxKGj-VKtApD8-zCqSaN2mD4w&si=qm8o-6Vmx5pzzTON"},
        {"linux", cmd+"https://youtube.com/playlist?list=PLKZZXjqZrqQvfAhgY7Nit5ynpK3kN_3tx&si=C4SkxLHFLgJ8VrxA"},
        {"etichal_hacker", cmd+"https://youtube.com/playlist?list=PLKZZXjqZrqQtKGgJuAYhzYczf1KIdswvO&si=T-B0_NzU2Q1yEG3D"},
    };
    Windows.link = {
        //POWERSHELL    
        {"Powershell_base_1", cmd+"https://youtu.be/ZOoCaWyifmI?si=J9DzC5dkn4DV5y_M"},
        {"Powershell_base_2", cmd+"https://youtube.com/playlist?list=PLlVtbbG169nFq_hR7FcMYg32xsSAObuq8&si=5yEMjmCU061vO8FU"},
        {"GUI_Poweshell", cmd+"https://youtube.com/playlist?list=PLnK11SQMNnE5_cl8n54h6OXNMnGl5Odtq&si=aI18J93ZmnkvuqLr"},
        {"Powershell_documentazione", cmd+"C:\\Users\\Utente\\Desktop\\info\\powershell-scripting-powershell-5.1.pdf"},
        //CMD
        {"CMD_base", cmd+"https://youtu.be/qnXe1gecux8?si=OjoQJcp3STqEu3O8"},
        {"CMD_40_comandi...", cmd+"https://youtu.be/Jfvg3CS1X3A?si=TL_4rYwEqt_LJfct"},
        {"CMD_documentazione", cmd+"C:\\Users\\Utente\\Desktop\\info\\windows-server-administration-windows-commands.pdf"},
        {"windows_server_documentazione", cmd+"C:\\Users\\Utente\\Desktop\\info\\windows-server-get-started.pdf"},
    };
    Menu_appunti.link = {
        //CORSI
        {"informatica", cmd+"C:\\Users\\Utente\\Desktop\\growUPP\\apps\\appunti\\corsi\\informatica.html"},
        {"matematica", cmd+"C:\\Users\\Utente\\Desktop\\growUPP\\apps\\appunti\\corsi\\matematica.html"},
        {"Concetti", cmd+"C:\\Users\\Utente\\Desktop\\growUPP\\apps\\appunti\\appuntiMATH\\conceti.html"},
        {"pagina_musica", cmd+"C:\\Users\\Utente\\Desktop\\growUPP\\apps\\appunti\\corsi\\musica.html"},
        //INFORMATICA
        {"git","type C:\\Users\\Utente\\Desktop\\growUPP\\apps\\appunti\\linguaggi\\git.txt | more"},
        {"javascript","type C:\\Users\\Utente\\Desktop\\growUPP\\apps\\appunti\\linguaggi\\javascript.txt | more"},
        {"windows","type C:\\Users\\Utente\\Desktop\\growUPP\\apps\\appunti\\linguaggi\\windows.txt | more"},
        {"linux","type C:\\Users\\Utente\\Desktop\\growUPP\\apps\\appunti\\linguaggi\\linux.txt | more"},
        //RETI E INTERNET
        {"RETI_E_INTERNET___cap_1","cls && type C:\\Users\\Utente\\Desktop\\growUPP\\apps\\appunti\\reti_e_internet\\capitolo_1.txt | more"},
        {"RETI_E_INTERNET___cap_2","cls && type C:\\Users\\Utente\\Desktop\\growUPP\\apps\\appunti\\reti_e_internet\\capitolo_2.txt | more"},
        {"RETI_E_INTERNET___cap_3_A","cls && type C:\\Users\\Utente\\Desktop\\growUPP\\apps\\appunti\\reti_e_internet\\capitolo_3\\collegamenti_punto-a-punto.txt | more"},
        {"RETI_E_INTERNET___cap_3_B","cls && type C:\\Users\\Utente\\Desktop\\growUPP\\apps\\appunti\\reti_e_internet\\capitolo_3\\reti_multipunto.txt | more"}
    };
    Internet.link = {
        {"networking", cmd+"https://youtu.be/xmpYfyNmWbw"},
        {"protocolli", cmd+"https://it.wikipedia.org/wiki/Protocollo_di_rete"},
    };
    PC.link = {
        {"hardware", cmd+"https://youtu.be/d86ws7mQYIg"},
        {"SSD", cmd+"https://youtu.be/5Mh3o886qpg?si=tRv55Q1FdrDBhSJi"},
        {"bluetooth", cmd+"https://youtu.be/1I1vxu5qIUM?si=aitFWZo9j6jGDHfo"},
        {"tastiera", cmd+"https://youtu.be/h-NM1xSSzHQ?si=Yr42KCAUJav19rUj"},
    };
    Database.link = {
        {"sql", cmd+"https://youtu.be/5OdVJbNCSso?si=LkFaEiLIf52Tr-mR"},
        {"mongoDB", cmd+"https://youtu.be/c2M-rlkkT5o?si=EYxVmI_aWLJYG06K"},
    };
    Docker.link = {
        {"Base_DOCKER", cmd+"https://youtu.be/RqTEHSBrYFw?si=lheMncbmxt4tTg7M"},
        {"Github_di_DOCKER", cmd+"https://github.com/docker"},
    };
    Kubernetes.link = {
        {"Video_DOCKER_e_KUBERNETES", cmd+"https://youtu.be/kTp5xUtcalw?si=gtTlIsJJDebue-Zl"},
        {"github_di_KUBERNETES", cmd+"https://github.com/kubernetes"},
    };
    Programmi.link = {
        {"notizie", "C:\\Users\\Utente\\Desktop\\growUPP\\apps\\checkNotizie.bat"},
        {"ricerca", cmd+"https://www.google.com/advanced_search"},
        {"idea", cmd+"https://app.diagrams.net/"},
        //PROGRAMMI
        {"ps2", "\"C:\\Program Files (x86)\\PCSX2\\pcsx2.exe\""},
        {"fl", "\"C:\\Program Files (x86)\\Image-Line\\FL Studio 20\\FL64.exe\""},
        {"linux", "\"C:\\Program Files\\Oracle\\VirtualBox\\VirtualBox.exe\""},
        {"musica", "C:\\Users\\Utente\\Desktop\\growUPP\\apps\\musica_studio.exe"},
        {"subnet", "C:\\Users\\Utente\\Desktop\\growUPP\\apps\\subnet.exe"}
    };
    Economia_aziendale.link = {
        {"Acconto_IVA",cmd+"C:\\Users\\Utente\\Desktop\\presenze_lavoro\\ECONOMIA_AZIENDALE\\acconto_iva.pdf"},
        {"Esercizi_contabilita_pratica",cmd+"C:\\Users\\Utente\\Desktop\\presenze_lavoro\\ECONOMIA_AZIENDALE\\esercizi_contabilita_pratica.pdf"},
        {"Fatturazione_e_regime_iva",cmd+"C:\\Users\\Utente\\Desktop\\presenze_lavoro\\ECONOMIA_AZIENDALE\\fatturazione_e_regime_iva.pdf"},
        {"Le_vendite_e_il_regolamento",cmd+"C:\\Users\\Utente\\Desktop\\presenze_lavoro\\ECONOMIA_AZIENDALE\\le_vendite_e_il_regolamento.pdf"},
        {"Metodo_partita_doppia",cmd+"C:\\Users\\Utente\\Desktop\\presenze_lavoro\\ECONOMIA_AZIENDALE\\metodo_partita_doppia.pdf"},
        {"Operzioni_di_vendita_e_regolamento",cmd+"C:\\Users\\Utente\\Desktop\\presenze_lavoro\\ECONOMIA_AZIENDALE\\Operazioni_di_vendita_e_regolamento.pdf"},
        {"Quaderno_appunti",cmd+"C:\\Users\\Utente\\Desktop\\presenze_lavoro\\ECONOMIA_AZIENDALE\\quaderno_appunti.pdf"},
        {"Stato_patrimoniale",cmd+"C:\\Users\\Utente\\Desktop\\presenze_lavoro\\ECONOMIA_AZIENDALE\\stato_patrimoniale.pdf"},
        {"Un_anno_in_azienda",cmd+"C:\\Users\\Utente\\Desktop\\presenze_lavoro\\ECONOMIA_AZIENDALE\\Un_anno_in_azienda.pdf"},
    };
    Libri.link = {
        //LIBRI
        {"Matematica_superiori",cmd+"https://www.matematicamente.it/staticfiles/matematica-C3/MatematicaC3-Algebra1-3ed-completo.pdf"},
        {"Algebra",cmd+"https://people.dm.unipi.it/martelli/Alg Lin.pdf"},
        {"Fisica",cmd+"https://www0.mi.infn.it/~fanti/FisicaGenerale/fanti_FisGen.pdf"},
        {"Elettronica",cmd+"http://www.energiazero.org/libri_elettronica_80/Corso_di_elettronica_fondamentale.pdf"},
        {"Biologia",cmd+"https://www.dotto.me/0/ld/argomento/biologia/ebook/Biologia-Teoria-Esercizi-Edises.pdf"},
    };
    Lavoro.link = {
        {"API_GO", "cd C:\\Users\\Utente\\Desktop\\presenze_lavoro\\esercizi\\progetto_api_GO && start code C:\\Users\\Utente\\Desktop\\presenze_lavoro\\esercizi\\progetto_api_GO"},
        {"WEB_PAGE", "cd C:\\Users\\Utente\\Desktop\\presenze_lavoro\\esercizi\\progettoAndrea2 && start code C:\\Users\\Utente\\Desktop\\presenze_lavoro\\esercizi\\progettoAndrea2 && start msedge http://127.0.0.1:5000 && C:\\Users\\Utente\\Desktop\\presenze_lavoro\\esercizi\\progettoAndrea2\\venv\\Scripts\\activate && python run.py"},
        {"conn_remoto", "C:\\Users\\Utente\\Desktop\\growUPP\\apps\\AnyDesk.exe"},
    };
    //*MOSTRA A SCHERMO
    system("cls");
    cout << "LINGUAGGI\t\t\t DATABASE\t\t\t PROGRAMMI\t\t\t OS\t\t\t MICROSERVIZI\t\t\t ALTRO\n\n";
    std::cin >> INPUT;
    if(INPUT == "LINGUAGGI"){
        vector<Dataset> totale = {C, Cpp, Java, Javascript, Kotlin, Go, Durt}; 
        string titoli[] = {"C", "Cpp", "Java", "Javascript", "Kotlin", "Go", "Durt"};
        iterazione(totale, titoli);
    }
    else if(INPUT == "DATABASE"){
        vector<Dataset> totale = {Database}; 
        string titoli[] = {"Database"};
        iterazione(totale, titoli);
    }
    else if(INPUT == "PROGRAMMI"){
        vector<Dataset> totale = {Programmi}; 
        string titoli[] = {"Programmi"};
        iterazione(totale, titoli);
    }
    else if(INPUT == "OS"){
        vector<Dataset> totale = {Linux, Windows}; 
        string titoli[] = {"Linux", "Windows"};
        iterazione(totale, titoli);
    }
    else if(INPUT == "MICROSERVIZI"){
        vector<Dataset> totale = {Docker, Kubernetes}; 
        string titoli[] = {"Docker", "Kubernetes"};
        iterazione(totale, titoli);
    }
    else if(INPUT == "ALTRO"){
        vector<Dataset> totale = {Web, Menu_appunti, Internet, PC, Economia_aziendale, Libri, Lavoro}; 
        string titoli[] = {"Web", "Menu_appunti", "Internet", "PC", "Economia_aziendale", "Libri", "Lavoro"}; 
        iterazione(totale, titoli);
    }
    return 0;
}