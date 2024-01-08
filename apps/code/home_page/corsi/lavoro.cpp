#include "..\home_page.hpp"

Dataset Lavoro, AppuntiLavoro, Strumenti, myWork;

vector<std::pair<string, std::pair<vector<string>, vector<Dataset>>>> LAVORO(){
    Lavoro.link = {
        {"DashboardVersatile", 
            "cd C:\\Users\\Utente\\Desktop\\presenze_lavoro\\esercizi\\progettiAndrea\\DashboardVersatile && "
            "start code C:\\Users\\Utente\\Desktop\\presenze_lavoro\\esercizi\\progettiAndrea\\DashboardVersatile && "
            "start msedge http://127.0.0.1:5000 && "
            "C:\\Users\\Utente\\Desktop\\presenze_lavoro\\esercizi\\progettiAndrea\\DashboardVersatile\\venv\\Scripts\\activate && "
            "python run.py"},
        
        {"Repository_GDPR___v1", 
            "cd C:\\Users\\Utente\\Desktop\\presenze_lavoro\\esercizi\\progettiAndrea\\Repository_GDPR && "
            "start code C:\\Users\\Utente\\Desktop\\presenze_lavoro\\esercizi\\progettiAndrea\\Repository_GDPR && "
            "start msedge http://127.0.0.1:5000 && " 
            "C:\\Users\\Utente\\Desktop\\presenze_lavoro\\esercizi\\progettiAndrea\\Repository_GDPR\\venv\\Scripts\\activate && "
            "python run.py"},

        {"Repository_GDPR___v2", 
            "cd C:\\Users\\Utente\\Desktop\\presenze_lavoro\\esercizi\\progettiAndrea\\Repository_GDPR && "
            "start code C:\\Users\\Utente\\Desktop\\presenze_lavoro\\esercizi\\progettiAndrea\\Repository_GDPR___conClasse && "
            "start msedge http://127.0.0.1:5000 && " 
            "C:\\Users\\Utente\\Desktop\\presenze_lavoro\\esercizi\\progettiAndrea\\Repository_GDPR___conClasse\\venv\\Scripts\\activate && "
            "python run.py"},
    };
    AppuntiLavoro.link = {
        {"Benetton", "cls && start explorer.exe C:\\Users\\Utente\\Desktop\\presenze_lavoro\\esercizi\\progettiAndrea\\Benetton"}
    };
    Strumenti.link = {
        {"linux", "\"C:\\Program Files\\Oracle\\VirtualBox\\VirtualBox.exe\""},
        {"putty", "C:\\Users\\Utente\\Desktop\\"+nome_cartella+"\\apps\\putty.exe"},
        {"conn_remoto", "C:\\Users\\Utente\\Desktop\\"+nome_cartella+"\\apps\\AnyDesk.exe"},
        {"Kofax_docs", "start msedge https://docshield.kofax.com/complete-list.htm"},
    };
    myWork.link = {
        {"Pagina_studio", 
            "cd C:\\Users\\Utente\\Desktop\\proveProgetti\\prove_Go\\provaServer && "
            "cls && go run server.go funcs.go"}
    };

    vector<std::pair<string, std::pair<vector<string>, vector<Dataset>>>> Menu = {
        //{nome campo, {titoli campi}, {dataset} }
        {"LAVORO", { {"Lavoro", "Appunti","Strumenti", "MyWork"}, {Lavoro, AppuntiLavoro,Strumenti, myWork} } }
    };

    return Menu;
}