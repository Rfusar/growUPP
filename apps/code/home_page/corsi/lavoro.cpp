#include "..\home_page.hpp"

Dataset Lavoro;

vector<std::pair<string, std::pair<vector<string>, vector<Dataset>>>> LAVORO(){
    Lavoro.link = {
        {"API_GO", "cd C:\\Users\\Utente\\Desktop\\presenze_lavoro\\esercizi\\progetto_api_GO && start code C:\\Users\\Utente\\Desktop\\presenze_lavoro\\esercizi\\progetto_api_GO"},
        {"WEB_PAGE", "cd C:\\Users\\Utente\\Desktop\\presenze_lavoro\\esercizi\\progettoAndrea2 && start code C:\\Users\\Utente\\Desktop\\presenze_lavoro\\esercizi\\progettoAndrea2 && start msedge http://127.0.0.1:5000 && C:\\Users\\Utente\\Desktop\\presenze_lavoro\\esercizi\\progettoAndrea2\\venv\\Scripts\\activate && python run.py"},
        {"linux", "\"C:\\Program Files\\Oracle\\VirtualBox\\VirtualBox.exe\""},
        {"putty", "C:\\Users\\Utente\\Desktop\\growUPP\\apps\\putty.exe"},
        {"conn_remoto", "C:\\Users\\Utente\\Desktop\\growUPP\\apps\\AnyDesk.exe"},
    };

    vector<std::pair<string, std::pair<vector<string>, vector<Dataset>>>> Menu = {
        //{nome campo, {titoli campi}, {dataset} }
        {"LAVORO", { {"Lavoro"}, {Lavoro} } }
    };

    return Menu;
}