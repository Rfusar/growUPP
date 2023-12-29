#include "home_page.hpp"

string cmd = "start msedge ";
string nome_cartella = "Superhero";

//*LAYOUT
void MENU(Dataset dati, string titolo){
    cout << "----------------------------------- " << titolo << "\n";
    for(int i = 0; i < dati.RITORNO().size(); i++){ cout << "* " << dati.RITORNO()[i][0] << "\n"; }
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

void menu_principale(vector<std::pair<string, std::pair<vector<string>, vector<Dataset>>>> CORSI){
    string pezzo = "\n========================================\n";
    string simbolo = "+ ";
    string spazio_header = "\n";
    string spazio_footer = "\n\n";


    cout<<pezzo<<"\t\tSTUDIA"<<pezzo;
        cout<<spazio_header<<
            simbolo<<CORSI[0].first<<"\n"<<
            simbolo<<CORSI[1].first<<"\n"<<
            simbolo<<CORSI[2].first<<"\n"<<
            simbolo<<CORSI[4].first
        <<spazio_footer;

    cout<<pezzo<<"\t\tALL'OPERA"<<pezzo;
        cout<<spazio_header<<
            simbolo<<CORSI[5].first<<"\n"<<
            simbolo<<CORSI[6].first
        <<spazio_footer;

    cout<<pezzo<<"\t\tVEDI"<<pezzo;
        cout<<spazio_header<<
            simbolo<<CORSI[3].first<<"\n"<<
            simbolo<<CORSI[7].first<<"\n"<<
            simbolo<<CORSI[8].first
        <<spazio_footer;
}