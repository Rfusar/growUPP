#include "..\home_page.hpp"

Dataset news, giochi, tools, altro, nuovo, sviluppa;

vector<std::pair<string, std::pair<vector<string>, vector<Dataset>>>> PROGRAMMI(){
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
        {"Invia_email", "echo start powershell -File C:\\Users\\Utente\\Desktop\\"+nome_cartella+"\\apps\\Invia_email.ps1"},
        {"Pagina_studio", 
            "cd C:\\Users\\Utente\\Desktop\\proveProgetti\\prove_Go\\provaServer && "
            "cls && go run server.go funcs.go"}
    };
    altro.link = {
        {"calcolatrice_resistenza__colori", cmd+"C:\\Users\\Utente\\Desktop\\"+nome_cartella+"\\apps\\calc_resistenza.html"},
        {"tabella___salute_famiglia", cmd+"C:\\Users\\Utente\\Desktop\\salute_famiglia\\check_generico\\salute_famiglia.html"},
        {"tabella___check_pastiglie", cmd+"C:\\Users\\Utente\\Desktop\\salute_famiglia\\check_pastiglie\\check_pastiglie.html"},
        {"APP_java", cmd+"C:\\Users\\Utente\\Desktop\\"+nome_cartella+"\\apps\\App.jar"},
    };
    nuovo.link = {
        {"programma_Cpp", "code C:\\Users\\Utente\\Desktop\\proveProgetti\\prove_Cpp"},
        {"programma_Java", "code C:\\Users\\Utente\\Desktop\\proveProgetti\\prove_Java"},
        {"programma_Zig", "code C:\\Users\\Utente\\Desktop\\proveProgetti\\prove_Zig"},
        {"programma_NodeJS", "code C:\\Users\\Utente\\Desktop\\proveProgetti\\prove_NodeJS"},
        {"programma_Go", "code C:\\Users\\Utente\\Desktop\\proveProgetti\\prove_Go"},
        {"programma_Python", "code C:\\Users\\Utente\\Desktop\\proveProgetti\\prove_Python"},
    };
    sviluppa.link = {
        {"prova_GUI___inClassi",
            "cls && "
            "echo C:\\Users\\Utente\\Desktop\\proveProgetti\\prove_NodeJS\\prova_GUI && "
            "code C:\\Users\\Utente\\Desktop\\proveProgetti\\prove_NodeJS\\prova_GUI"},

        {"Pagina_studio", 
            "cls && "
            "echo C:\\Users\\Utente\\Desktop\\proveProgetti\\prove_Go\\provaServer && "
            "code C:\\Users\\Utente\\Desktop\\proveProgetti\\prove_Go\\provaServer"},

        {"subnet",
            "cls && "
            "echo C:\\Users\\Utente\\Desktop\\proveProgetti\\prove_Cpp\\subnet && "
            "code C:\\Users\\Utente\\Desktop\\proveProgetti\\prove_Cpp\\subnet"},

        {"GUI_Java",
            "cls && "
            "echo C:\\Users\\Utente\\Desktop\\proveProgetti\\prove_Java\\GUI_Java"
            "code C:\\Users\\Utente\\Desktop\\proveProgetti\\prove_Java\\GUI_Java"}
    };


    vector<std::pair<string, std::pair<vector<string>, vector<Dataset>>>> Menu = {
        //{nome campo, {titoli campi}, {dataset} }
        {"PROGRAMMI", { {"news", "giochi", "strumenti", "altro", "Apri programma","Crea un programma","Aggiorna"}, {news, giochi, tools, altro,nuovo, sviluppa} }}
    };

    return Menu;
}