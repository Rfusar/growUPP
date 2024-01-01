#include "..\home_page.hpp"

Dataset Internet, File;

vector<std::pair<string, std::pair<vector<string>, vector<Dataset>>>> INTERNET(){
    Internet.link = {
        {"networking", cmd+"https://youtu.be/xmpYfyNmWbw"},
        {"protocolli", cmd+"https://it.wikipedia.org/wiki/Protocollo_di_rete"},
    };
    File.link = {
        {"Requirements_for_Internet_Hosts___Communication_Layers", "cls && curl -k https://www.rfc-editor.org/rfc/rfc1122.txt"}
    };

    vector<std::pair<string, std::pair<vector<string>, vector<Dataset>>>> Menu = {
        {"INTERNET", { {"Internet", "File_specifici"}, {Internet, File} } }
    };
    
    return Menu;
}