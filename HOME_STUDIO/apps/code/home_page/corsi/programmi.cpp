#include "..\home_page.hpp"

Dataset news, giochi, tools, altro, nuovo;

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
        {"libreCAD", "\"C:\\Program Files (x86)\\LibreCAD\\LibreCAD.exe\""}
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
    nuovo.link = {
        {"Batch", 
            "echo C:\\Users\\Utente\\Desktop\\proveProgetti\\prove_Batch && "
            "code C:\\Users\\Utente\\Desktop\\proveProgetti\\prove_Batch"},
        {"Cpp", 
            "echo C:\\Users\\Utente\\Desktop\\proveProgetti\\prove_Cpp && "
            "code C:\\Users\\Utente\\Desktop\\proveProgetti\\prove_Cpp"},
        {"Java", 
            "echo C:\\Users\\Utente\\Desktop\\proveProgetti\\prove_Java && "
            "code C:\\Users\\Utente\\Desktop\\proveProgetti\\prove_Java"},
        {"Zig", 
            "echo C:\\Users\\Utente\\Desktop\\proveProgetti\\prove_Zig && "
            "code C:\\Users\\Utente\\Desktop\\proveProgetti\\prove_Zig"},
        {"NodeJS", 
            "echo C:\\Users\\Utente\\Desktop\\proveProgetti\\prove_NodeJS && "
            "code C:\\Users\\Utente\\Desktop\\proveProgetti\\prove_NodeJS"},
        {"Go", 
            "echo C:\\Users\\Utente\\Desktop\\proveProgetti\\prove_Go && "
            "code C:\\Users\\Utente\\Desktop\\proveProgetti\\prove_Go"},
        {"Python", 
            "echo C:\\Users\\Utente\\Desktop\\proveProgetti\\prove_Python && "
            "code C:\\Users\\Utente\\Desktop\\proveProgetti\\prove_Python"},
        {"C#", 
            "echo C:\\Users\\Utente\\Desktop\\proveProgetti\\prove_C# && "
            "code C:\\Users\\Utente\\Desktop\\proveProgetti\\prove_C#"},
        {"Web", 
            "echo C:\\Users\\Utente\\Desktop\\proveProgetti\\prove_Web && "
            "code C:\\Users\\Utente\\Desktop\\proveProgetti\\prove_Web"},
    };

    vector<std::pair<string, std::pair<vector<string>, vector<Dataset>>>> Menu = {
        //{nome campo, {titoli campi}, {dataset} }
        {"PROGRAMMI", { {"News", "Giochi", "Strumenti", "Altro", "Nuovo"}, {news, giochi, tools, altro, nuovo} }}
    };

    return Menu;
}