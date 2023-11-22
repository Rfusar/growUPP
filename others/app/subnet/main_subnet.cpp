#include "header.hpp"

using std::cin;

int main() {
    string inizio;
    system("cls");
    cout<<"subnet_mask oppure ip???";
    cin >> inizio;

    if(inizio == "subnet_mask"){
        string subnet;
        system("cls");
        cout << "Inserisci subnet mask: ";
        cin >> subnet;

        vector<std::array<string, 3>> variabili = valore_IP(valori(subnet));
        system("cls");
        cout<<"---------- SUBNET----------\n\n"<<"IP: "<<variabili[0][0]<<"\nCIDR: "<<variabili[0][1]<<"\nhosts: "<<variabili[0][2];
    }
    else if(inizio == "ip"){
        string ip;
        system("cls");
        cout << "Inserisci ip: ";
        cin >> ip;

        trova_range_IP(ip);
    }

    return 0;
}


