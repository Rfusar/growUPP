#include "header.hpp"

using std::cin;

int main() {
    string inizio;
    system("cls");
    cout<<"<cerca> -c\n<informazioni> -i";
    cin>>inizio;

    if(inizio == "-c"){
        string ip;
        cout << "Inserisci ip: ";
        cin >> ip;
        check(ip);
    }
    else if(inizio == "-i"){
        string ip;
        cout << "Inserisci ip: ";
        cin >> ip;
        trova_range_IP(ip);
    }
    else{
        main();
    }

    return 0;
}


