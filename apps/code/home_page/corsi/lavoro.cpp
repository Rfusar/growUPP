#include "..\home_page.hpp"

Dataset Lavoro, AppuntiLavoro, Strumenti;

vector<std::pair<string, std::pair<vector<string>, vector<Dataset>>>> LAVORO(){
    Lavoro.link = {
        {"DashboardVersatile", 
            "cd C:\\Users\\Utente\\Desktop\\presenze_lavoro\\esercizi\\progettiAndrea\\DashboardVersatile && "
            "start code C:\\Users\\Utente\\Desktop\\presenze_lavoro\\esercizi\\progettiAndrea\\DashboardVersatile && "
            "start msedge http://127.0.0.1:5000 && "
            "C:\\Users\\Utente\\Desktop\\presenze_lavoro\\esercizi\\progettiAndrea\\DashboardVersatile\\venv\\Scripts\\activate && "
            "python run.py"},

        {"Repository_GDPR", 
            "cd C:\\Users\\Utente\\Desktop\\presenze_lavoro\\esercizi\\progettiAndrea\\Repository_GDPR && "
            "start code C:\\Users\\Utente\\Desktop\\presenze_lavoro\\esercizi\\progettiAndrea\\Repository_GDPR___conClasse && "
            "start msedge http://127.0.0.1:5000 && " 
            "C:\\Users\\Utente\\Desktop\\presenze_lavoro\\esercizi\\progettiAndrea\\Repository_GDPR___conClasse\\venv\\Scripts\\activate && "
            "python run.py"},
    };
    AppuntiLavoro.link = {
        {"Benetton", 
            "cls && "
            "echo C:\\Users\\Utente\\Desktop\\presenze_lavoro\\esercizi\\progettiAndrea\\Benetton\\programma && "
            "code C:\\Users\\Utente\\Desktop\\presenze_lavoro\\esercizi\\progettiAndrea\\Benetton\\programma"}
    };
    Strumenti.link = {
        {"linux", "\"C:\\Program Files\\Oracle\\VirtualBox\\VirtualBox.exe\""},
        {"putty", "C:\\Users\\Utente\\Desktop\\"+nome_cartella+"\\apps\\putty.exe"},
        {"conn_remoto", "C:\\Users\\Utente\\Desktop\\"+nome_cartella+"\\apps\\AnyDesk.exe"},
        {"Kofax_docs", "start msedge https://docshield.kofax.com/complete-list.htm"},
    };


    vector<std::pair<string, std::pair<vector<string>, vector<Dataset>>>> Menu = {
        //{nome campo, {titoli campi}, {dataset} }
        {"LAVORO", { {"Lavoro", "Appunti","Strumenti"}, {Lavoro, AppuntiLavoro,Strumenti} } }
    };

    return Menu;
}