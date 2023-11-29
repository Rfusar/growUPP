#include "..\header\all.hpp"

void menu__ip(void (*func)(string), string menu){
    bool value = true;
    while(value){
        system("cls");
        string ip;
        cout << menu<<"\n\n\tInserisci ip: ";
        cin >> ip;
        if(ip != "-q"){
            func(ip);
        
        } else { value = false;}
        cout<<"\n\n\n";
        system("pause");
    }
}

void menu_n(void (*func1)(string), void (*func2)(string)){
    bool value = true;
    while(value){
        system("cls");
        string ip;
        cout << "Inserisci numero: ";
        cin >> ip;
        if(ip != "-q"){
            if(ip[0] == 'd'){
                ip = ip.substr(1);
                func1(ip);
            }
            else if(ip[0] == 'b'){
                ip = ip.substr(1);
                func2(ip);
            }
        } else{value = false;}
        cout<<"\n\n\n\n\n";
        system("pause");
    }
}