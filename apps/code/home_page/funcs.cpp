#include "home_page.hpp"

string cmd = "start msedge ";

//*LAYOUT
void MENU(Dataset dati, string titolo){
    cout << "---------------" << titolo << "---------------\n";
    for(int i = 0; i < dati.RITORNO().size(); i++){ cout << dati.RITORNO()[i][0] << "\n"; }
    cout << "\n\n\n";
}
void risposta(Dataset dati, string risposta){
    for(int i = 0; i < dati.RITORNO().size(); i++){
        if(dati.RITORNO()[i][0] == risposta){
            system(dati.RITORNO()[i][1].c_str());
        }
    }
}
void iterazione(vector<Dataset> totale, vector<string> titoli){
    string INPUT1; 
    system("cls");
    for(int i = 0; i < totale.size(); i++){ MENU(totale[i], titoli[i]); };
    std::cin >> INPUT1;
    system("cls");
    for(int i = 0; i < totale.size(); i++){risposta(totale[i], INPUT1); }
}
