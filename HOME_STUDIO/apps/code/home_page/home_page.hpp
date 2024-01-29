#include <iostream>
#include <cstdlib>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::vector;

class Dataset {
    public:
        vector<vector<string>> link;
        vector<vector<string>> RITORNO() const { return link; } 
};

void MENU(Dataset dati, string titolo);
void risposta(Dataset dati, string risposta);
void iterazione(vector<Dataset> totale, vector<string> titoli);
void menu_principale(vector<std::pair<string, std::pair<vector<string>, vector<Dataset>>>> CORSI);

//scegli il browser e il nome della cartella --> funcs.cpp
extern string cmd;
extern string nome_cartella;

//CORSI
vector<std::pair<string, std::pair<vector<string>, vector<Dataset>>>> LINGUAGGI();
vector<std::pair<string, std::pair<vector<string>, vector<Dataset>>>> TECNOLOGIE();
vector<std::pair<string, std::pair<vector<string>, vector<Dataset>>>> OS();
vector<std::pair<string, std::pair<vector<string>, vector<Dataset>>>> APPUNTI();
vector<std::pair<string, std::pair<vector<string>, vector<Dataset>>>> PROGRAMMI();
vector<std::pair<string, std::pair<vector<string>, vector<Dataset>>>> LAVORO();
vector<std::pair<string, std::pair<vector<string>, vector<Dataset>>>> DOCUMENTAZIONE();
vector<std::pair<string, std::pair<vector<string>, vector<Dataset>>>> AGGIORNAMENTI();


