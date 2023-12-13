#include "..\home_page.hpp"

Dataset Web, Internet;

vector<std::pair<string, std::pair<vector<string>, vector<Dataset>>>> INTERNET(){
    Web.link = {
        {"Docs_protocolli_internet", cmd+"https://www.rfc-editor.org" },
        {"W3school", cmd+"https://www.w3schools.com"},
        {"HTML5_video",cmd+"https://youtu.be/kUMe1FH4CHE?si=KP8NdjDikfPjHIzX"},
        {"CSS_video",cmd+"https://youtu.be/OXGznpKZ_sA?si=Fc_CdIKeXmdf5jFo"},
    };

    Internet.link = {
        {"networking", cmd+"https://youtu.be/xmpYfyNmWbw"},
        {"protocolli", cmd+"https://it.wikipedia.org/wiki/Protocollo_di_rete"},
    };

        vector<std::pair<string, std::pair<vector<string>, vector<Dataset>>>> Menu = {
        //{nome campo, {titoli campi}, {dataset} }
 
        {"INTERNET", { {"Internet", "Web"}, {Internet, Web} } }
    };
    
    return Menu;
}