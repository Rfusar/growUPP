#include "..\home_page.hpp"

Dataset news, giochi, tools, altro;

vector<std::pair<string, std::pair<vector<string>, vector<Dataset>>>> PROGRAMMI(){
    news.link = {
        {"notizie", "C:\\Users\\Utente\\Desktop\\"+nome_cartella+"\\HOME_STUDIO\\apps\\checkNotizie.bat"},
        {"ricerca", cmd+"https://www.google.com/advanced_search"},
        {"idea", cmd+"https://app.diagrams.net/"},
    };
    giochi.link = {
        //PROGRAMMI
        {"ps2", "\"C:\\Program Files (x86)\\PCSX2\\pcsx2.exe\""},
        {"fl", "\"C:\\Program Files (x86)\\Image-Line\\FL Studio 20\\FL64.exe\""},
        {"musica", "C:\\Users\\Utente\\Desktop\\"+nome_cartella+"\\HOME_STUDIO\\apps\\musica_studio.exe"},
    };
    tools.link = {
        {"subnet", "C:\\Users\\Utente\\Desktop\\"+nome_cartella+"\\apps\\subnet.exe"},
        {"customPostMan", "C:\\Users\\Utente\\Desktop\\"+nome_cartella+"\\apps\\customPostMan.exe"},
        {"Invia_email", "echo start powershell -File C:\\Users\\Utente\\Desktop\\"+nome_cartella+"\\HOME_STUDIO\\apps\\Invia_email.ps1"},
    };
    altro.link = {
        {"calcolatrice_resistenza__colori", cmd+"C:\\Users\\Utente\\Desktop\\"+nome_cartella+"\\HOME_STUDIO\\apps\\calc_resistenza.html"},
        {"tabella___salute_famiglia", cmd+"C:\\Users\\Utente\\Desktop\\salute_famiglia\\check_generico\\salute_famiglia.html"},
        {"tabella___check_pastiglie", cmd+"C:\\Users\\Utente\\Desktop\\salute_famiglia\\check_pastiglie\\check_pastiglie.html"},
        {"APP_java", cmd+"C:\\Users\\Utente\\Desktop\\"+nome_cartella+"\\HOME_STUDIO\\apps\\App.jar"},
    };

    vector<std::pair<string, std::pair<vector<string>, vector<Dataset>>>> Menu = {
        //{nome campo, {titoli campi}, {dataset} }
        {"PROGRAMMI", { {"news", "giochi", "strumenti", "altro", "Apri programma","Aggiorna"}, {news, giochi, tools, altro} }}
    };

    return Menu;
}