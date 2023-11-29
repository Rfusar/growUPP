#include "..\header\all.hpp"

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



void decimale_binario(int n) {
    std::stack<int> binaryStack;

    while (n > 0) {
        int remainder = n % 2;
        binaryStack.push(remainder);
        n /= 2;
    }

    while (!binaryStack.empty()) {
        cout << binaryStack.top();
        binaryStack.pop();
    }
}

void binario_decimale(std::string n) {
    std::stack<int> numeri0;

    for (int i = 0; i < n.size(); i++) {
        char x = n[i];
        int intValue = x - '0';
        /*
            Quando hai un carattere numerico ('0' - '9') in C++, 
            puoi convertirlo in un valore numerico sottraendo il valore del carattere '0'. 
            Questo è possibile perché i caratteri numerici sono disposti in ordine crescente 
            nei set di caratteri ASCII.
        */

        if (intValue == 0 || intValue == 1) {
            numeri0.push(intValue);
        } else {
            std::cerr << "Errore: Carattere diverso da '0' e '1'";
            return; 
        }
    }

    int count = 0;
    std::stack<int> numeri1;
    while (!numeri0.empty()) {
        if (numeri0.top() == 1) {
            int x = 1 << count;  // Uso di bitshift per calcolare 2^count
            numeri1.push(x);
        }
        numeri0.pop();
        count++;
    }

    int somma = 0;
    while (!numeri1.empty()) {
        somma += numeri1.top();
        numeri1.pop();
    }

    cout << somma;
}

