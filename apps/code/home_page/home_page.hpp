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

//scegli il browser
extern string cmd;

//CORSI
vector<std::pair<string, std::pair<vector<string>, vector<Dataset>>>> Linguaggi();
vector<std::pair<string, std::pair<vector<string>, vector<Dataset>>>> Tecnologie();
vector<std::pair<string, std::pair<vector<string>, vector<Dataset>>>> OS();
vector<std::pair<string, std::pair<vector<string>, vector<Dataset>>>> Appunti();
vector<std::pair<string, std::pair<vector<string>, vector<Dataset>>>> INTERNET();
vector<std::pair<string, std::pair<vector<string>, vector<Dataset>>>> PROGRAMMI();
vector<std::pair<string, std::pair<vector<string>, vector<Dataset>>>> LAVORO();


