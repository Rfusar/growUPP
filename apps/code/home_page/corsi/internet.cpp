#include "..\home_page.hpp"

Dataset Web, Internet, File;

vector<std::pair<string, std::pair<vector<string>, vector<Dataset>>>> INTERNET(){
    Web.link = {
        {"W3school", cmd+"https://www.w3schools.com"},
    };
    Internet.link = {
        {"networking", cmd+"https://youtu.be/xmpYfyNmWbw"},
        {"protocolli", cmd+"https://it.wikipedia.org/wiki/Protocollo_di_rete"},
    };
    File.link = {
        {"Requirements_for_Internet_Hosts___Communication_Layers", "curl -k https://www.rfc-editor.org/rfc/rfc1122.txt"}
    };

    vector<std::pair<string, std::pair<vector<string>, vector<Dataset>>>> Menu = {
        {"INTERNET", { {"Internet", "Web", "File_specifici"}, {Internet, Web, File} } }
    };
    
    return Menu;
}