#include "..\home_page.hpp"

Dataset Internet, File;

vector<std::pair<string, std::pair<vector<string>, vector<Dataset>>>> INTERNET(){
    Internet.link = {
        {"networking", cmd+"https://youtu.be/xmpYfyNmWbw"},
        {"protocolli", cmd+"https://it.wikipedia.org/wiki/Protocollo_di_rete"},
        {"testi_ufficiali", cmd+"https://www.rfc-editor.org/standards"}
    };
    File.link = {
        {"Requirements_for_Internet_Hosts___Communication_Layers", "start msedge https://www.rfc-editor.org/rfc/rfc9293.html"}
    };

    vector<std::pair<string, std::pair<vector<string>, vector<Dataset>>>> Menu = {
        {"INTERNET", { {"Internet", "File_specifici"}, {Internet, File} } }
    };
    
    return Menu;
}