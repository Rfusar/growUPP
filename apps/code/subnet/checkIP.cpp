#include "header.hpp"

string check(const string& addresIP) {
    vector<short int> numeri = setNumeri(addresIP);

    short int& primo = numeri[0];
    short int& secondo = numeri[1];
    short int& terzo = numeri[2];
    short int& quarto = numeri[3];

    int ris;
    string IP;
    while (ris != 0) {
        IP = "ping -n 1 " + std::to_string(primo) + "." + std::to_string(secondo) + "." + std::to_string(terzo) + "." + std::to_string(quarto);
        ris = system(IP.c_str());
        system("cls");
        if (ris == 1) {

            ++quarto;
            if (quarto == 256) {
                ++terzo;
                quarto = 0;

                if (terzo == 256) {
                    ++secondo;
                    terzo = 0;

                    if (secondo == 256) {
                        ++primo;
                        secondo = 0;
                        
                        if(primo == 256){
                            primo=0;
                            break;
                        }
                    }
                }
            }
        }
    }

    return IP;
}
