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
        {"Batch", 
            "echo C:\\Users\\Utente\\Desktop\\proveProgetti\\prove_Batch && "
            "code C:\\Users\\Utente\\Desktop\\proveProgetti\\prove_Batch"},
        {"Cpp", 
            "echo C:\\Users\\Utente\\Desktop\\proveProgetti\\prove_Cpp"
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
        {"AGGIORAMENTI", { {"Crea programma","Aggiorna"}, {nuovo, aggiornamenti} } }
    };
    
    return Menu;
}