#include "..\home_page.hpp"

Dataset Lavoro, AppuntiLavoro, Strumenti;

vector<std::pair<string, std::pair<vector<string>, vector<Dataset>>>> LAVORO(){
    Lavoro.link = {};
    AppuntiLavoro.link = {};
    Strumenti.link = {
        {"linux", "\"C:\\Program Files\\Oracle\\VirtualBox\\VirtualBox.exe\""},
        {"putty", "C:\\Users\\Utente\\Desktop\\"+nome_cartella+"\\HOME_STUDIO\\apps\\putty.exe"},
        {"conn_remoto", "C:\\Users\\Utente\\Desktop\\"+nome_cartella+"\\HOME_STUDIO\\apps\\AnyDesk.exe"},
        {"Kofax_docs", "start msedge https://docshield.kofax.com/complete-list.htm"},
    };


    vector<std::pair<string, std::pair<vector<string>, vector<Dataset>>>> Menu = {
        //{nome campo, {titoli campi}, {dataset} }
        {"LAVORO", { {"Lavoro", "Appunti","Strumenti"}, {Lavoro, AppuntiLavoro,Strumenti} } }
    };

    return Menu;
}