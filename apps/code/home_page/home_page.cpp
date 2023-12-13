#include "home_page.hpp"


int main(){
    vector<std::pair<string, std::pair<vector<string>, vector<Dataset>>>> CORSI;
    vector<std::pair<string, std::pair<vector<string>, vector<Dataset>>>> MODULI[] = {Linguaggi(), Tecnologie(), OS(), Appunti(), INTERNET(), LAVORO(),  PROGRAMMI()};

    for (const auto& modulo : MODULI) {
        CORSI.insert(CORSI.end(), std::begin(modulo), std::end(modulo));
    }

    //PROGRAMMA
    system("cls");
    string INPUT;
    for(char i = 0;i<CORSI.size();i++){cout<<CORSI[i].first<<"\t\t\t";}
    cout<<"\n\n\n: ";
    std::cin >> INPUT;
    for(char i = 0;i<CORSI.size();i++){
        if(INPUT == CORSI[i].first){
            vector<Dataset> TOTALE = CORSI[i].second.second;
            vector<string> TITOLI = CORSI[i].second.first;
            iterazione(TOTALE, TITOLI);
        }
    }
    return 0;
}