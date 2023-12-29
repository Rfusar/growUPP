#include "..\home_page.hpp"

Dataset news, giochi, tools, altro, nuovo;

vector<std::pair<string, std::pair<vector<string>, vector<Dataset>>>> PROGRAMMI(){
    nuovo.link = {
        {"programma_Cpp", ""},
        {"programma_Java", ""},
        {"programma_Zig", ""},
        {"programma_NodeJS", ""},
    };
    news.link = {
        {"notizie", "C:\\Users\\Utente\\Desktop\\"+nome_cartella+"\\apps\\checkNotizie.bat"},
        {"ricerca", cmd+"https://www.google.com/advanced_search"},
        {"idea", cmd+"https://app.diagrams.net/"},
    };
    giochi.link = {
        //PROGRAMMI
        {"ps2", "\"C:\\Program Files (x86)\\PCSX2\\pcsx2.exe\""},
        {"fl", "\"C:\\Program Files (x86)\\Image-Line\\FL Studio 20\\FL64.exe\""},
        {"musica", "C:\\Users\\Utente\\Desktop\\"+nome_cartella+"\\apps\\musica_studio.exe"},
    };
    tools.link = {
        {"subnet", "C:\\Users\\Utente\\Desktop\\"+nome_cartella+"\\apps\\subnet.exe"},
        {"Ricordami_TUTTO", "C:\\Users\\Utente\\Desktop\\"+nome_cartella+"\\apps\\ricordami.bat"


        }
    };
    altro.link = {
        {"calcolatrice_resistenza__colori", cmd+"C:\\Users\\Utente\\Desktop\\"+nome_cartella+"\\apps\\calc_resistenza.html"},
        {"tabella___salute_famiglia", cmd+"C:\\Users\\Utente\\Desktop\\salute_famiglia\\check_generico\\salute_famiglia.html"},
        {"tabella___check_pastiglie", cmd+"C:\\Users\\Utente\\Desktop\\salute_famiglia\\check_pastiglie\\check_pastiglie.html"},
        {"APP_java", cmd+"C:\\Users\\Utente\\Desktop\\"+nome_cartella+"\\apps\\App.jar"},
    };


    vector<std::pair<string, std::pair<vector<string>, vector<Dataset>>>> Menu = {
        //{nome campo, {titoli campi}, {dataset} }
        {"PROGRAMMI", { {"news", "giochi", "strumenti", "Crea un programma","altro"}, {news, giochi, tools, nuovo,altro} }}
    };

    return Menu;
}