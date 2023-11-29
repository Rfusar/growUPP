#include "..\header\all.hpp"




void INIZIO(){
    system("cls");
    string inizio;
    cout<<"<cerca> -c\n<informazioni> -i\n<trasforma numeri> -t\n\n";
    cin>>inizio;

    if(inizio == "-c"){
        menu__ip(check, "Ricerca ricorsiva");
    }
    else if(inizio == "-i"){
        menu__ip(trova_range_IP, "Informazioni");
    }
    else if(inizio == "-t"){
        menu_n(decimale_binario, binario_decimale);
    }
}

void DOCUMENTAZIONE(){
    system("cls");
    system("type C:\\Users\\Utente\\Desktop\\growUPP\\apps\\code\\subnet\\classi_di_rete.txt");
    cout<<"\n\n\n";
    system("pause");
}