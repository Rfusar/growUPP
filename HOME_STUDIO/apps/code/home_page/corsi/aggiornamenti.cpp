#include "..\home_page.hpp"

Dataset aggiornamenti, nuovo;

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
    nuovo.link = {
        {"programma_Cpp", "code C:\\Users\\Utente\\Desktop\\proveProgetti\\prove_Cpp"},
        {"programma_Java", "code C:\\Users\\Utente\\Desktop\\proveProgetti\\prove_Java"},
        {"programma_Zig", "code C:\\Users\\Utente\\Desktop\\proveProgetti\\prove_Zig"},
        {"programma_NodeJS", "code C:\\Users\\Utente\\Desktop\\proveProgetti\\prove_NodeJS"},
        {"programma_Go", "code C:\\Users\\Utente\\Desktop\\proveProgetti\\prove_Go"},
        {"programma_Python", "code C:\\Users\\Utente\\Desktop\\proveProgetti\\prove_Python"},
        {"programma_C#", "code C:\\Users\\Utente\\Desktop\\proveProgetti\\prove_C#"},
        {"programma_Web", "code C:\\Users\\Utente\\Desktop\\proveProgetti\\prove_Web"},
    };
    vector<std::pair<string, std::pair<vector<string>, vector<Dataset>>>> Menu = {
        {"AGGIORAMENTI", { {"Crea programma","Aggiorna"}, {nuovo, aggiornamenti} } }
    };
    
    return Menu;
}