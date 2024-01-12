#include "..\home_page.hpp"

Dataset linguaggi;

vector<std::pair<string, std::pair<vector<string>, vector<Dataset>>>> LINGUAGGI(){

    linguaggi.link = {
        {"GUARDA","cls && type C:\\Users\\Utente\\Desktop\\Superhero\\HOME_STUDIO\\apps\\code\\home_page\\corsi.txt"},
        {"MODIFICA","notepad C:\\Users\\Utente\\Desktop\\Superhero\\HOME_STUDIO\\apps\\code\\home_page\\corsi.txt"},
    };
    
    vector<std::pair<string, std::pair<vector<string>, vector<Dataset>>>> Menu = {
        {"LINGUAGGI", { {"DataBase dei link"}, {linguaggi} } }
    };

    return Menu;
}