#include "..\header\all.hpp"




void INIZIO(){
    system("cls");
    string inizio;
    cout<<"<cerca> -c\n<informazioni> -i\n<trasforma numeri decimali a binari> -t\n\n";
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
    else if(inizio == "-t"){
        bool value = true;
        while(value){
            system("cls");
            string ip;
            cout << "Inserisci numero: ";
            cin >> ip;
            if(ip != "-q"){
                if(ip[0] == 'd'){
                    ip = ip.substr(1);
                    decimale_binario(std::stoi(ip));
                    cout<<"\n\n\n\n\n";
                    system("pause");
                }
                else if(ip[0] == 'b'){
                    ip = ip.substr(1);
                    binario_decimale(ip);
                    cout<<"\n\n\n\n\n";
                    system("pause");
                }
            } else{value = false;}
        }
    }
}

void DOCUMENTAZIONE(){
    system("cls");
    system("type C:\\Users\\Utente\\Desktop\\growUPP\\apps\\code\\subnet\\classi_di_rete.txt");
    cout<<"\n\n\n";
    system("pause");
}