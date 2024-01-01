#include "..\home_page.hpp"

Dataset linguaggi;

vector<std::pair<string, std::pair<vector<string>, vector<Dataset>>>> LINGUAGGI(){

    linguaggi.link = {
        {"GUARDA","cls && type C:\\Users\\Utente\\Desktop\\Superhero\\apps\\code\\home_page\\corsi.txt"},
        {"MODIFICA","notepad C:\\Users\\Utente\\Desktop\\Superhero\\apps\\code\\home_page\\corsi.txt"},
    };
    
    vector<std::pair<string, std::pair<vector<string>, vector<Dataset>>>> Menu = {
        //{nome campo, {titoli campi}, {dataset} }
        {"LINGUAGGI", { {"DataBase dei link"}, {linguaggi} } }
    };

    return Menu;
}