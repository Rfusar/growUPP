#include "header\all.hpp"


int main() {
    string inizio;
    system("cls");
    cout<<"DIGITA:\n\n\tdoc =>\n\t\tper consultare gli appunti\n\n\tip =>\n\t\tper aprire menu IP\n\n\n: ";
    cin>>inizio;
    
    if(inizio == "doc"){ DOCUMENTAZIONE(); main();}
    else if(inizio == "ip"){INIZIO(); main();}
    return 0;
}


