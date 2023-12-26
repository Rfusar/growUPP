#include "..\home_page.hpp"

Dataset Lavoro, Strumenti;

vector<std::pair<string, std::pair<vector<string>, vector<Dataset>>>> LAVORO(){
    Lavoro.link = {
        {"DashboardVersatile", "cd C:\\Users\\Utente\\Desktop\\presenze_lavoro\\esercizi\\progettiAndrea\\DashboardVersatile && "
                               "start code C:\\Users\\Utente\\Desktop\\presenze_lavoro\\esercizi\\progettiAndrea\\DashboardVersatile && "
                               "start msedge http://127.0.0.1:5000 && "
                               "C:\\Users\\Utente\\Desktop\\presenze_lavoro\\esercizi\\progettiAndrea\\DashboardVersatile\\venv\\Scripts\\activate && "
                               "python run.py"},
        
        {"Repository_GDPR", "cd C:\\Users\\Utente\\Desktop\\presenze_lavoro\\esercizi\\progettiAndrea\\Repository_GDPR && "
                            "start code C:\\Users\\Utente\\Desktop\\presenze_lavoro\\esercizi\\progettiAndrea\\Repository_GDPR && "
                            "start msedge http://127.0.0.1:5000 && " 
                            "C:\\Users\\Utente\\Desktop\\presenze_lavoro\\esercizi\\progettiAndrea\\Repository_GDPR\\venv\\Scripts\\activate && "
                            "python run.py"},
        
        
    };

    Strumenti.link = {
        {"linux", "\"C:\\Program Files\\Oracle\\VirtualBox\\VirtualBox.exe\""},
        {"putty", "C:\\Users\\Utente\\Desktop\\growUPP\\apps\\putty.exe"},
        {"conn_remoto", "C:\\Users\\Utente\\Desktop\\growUPP\\apps\\AnyDesk.exe"},
    };

    vector<std::pair<string, std::pair<vector<string>, vector<Dataset>>>> Menu = {
        //{nome campo, {titoli campi}, {dataset} }
        {"LAVORO", { {"Lavoro", "Strumenti"}, {Lavoro, Strumenti} } }
    };

    return Menu;
}