#include "..\home_page.hpp"

Dataset aggiornamenti;

vector<std::pair<string, std::pair<vector<string>, vector<Dataset>>>> AGGIORNAMENTI(){
    aggiornamenti.link = {
        {"GeneratoreProgetti", 
            "cls &&"
            "echo C:\\Users\\Utente\\Desktop\\proveProgetti\\prove_Cpp\\provaGeneratoreProgetti &&"
            "code C:\\Users\\Utente\\Desktop\\proveProgetti\\prove_Cpp\\provaGeneratoreProgetti"},

        {"subnet",
            "cls && "
            "echo C:\\Users\\Utente\\Desktop\\proveProgetti\\prove_Cpp\\subnet && "
            "code C:\\Users\\Utente\\Desktop\\proveProgetti\\prove_Cpp\\subnet"},
    };
    
    vector<std::pair<string, std::pair<vector<string>, vector<Dataset>>>> Menu = {
        {"AGGIORNAMENTI", { {"Aggiorna"}, {aggiornamenti} } }
    };
    
    return Menu;
}