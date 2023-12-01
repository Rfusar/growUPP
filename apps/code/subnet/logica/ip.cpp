#include "..\header\all.hpp"

//SCHEMA
vector<pair<unsigned char, vector<string>>> classi = {
    {128, {"/25", "/17", "/9", "/1"}},
    {192, {"/26", "/18", "/10", "/2"}},
    {224, {"/27", "/19", "/11", "/3"}},
    {240, {"/28", "/20", "/12", "/4"}},
    {248, {"/29", "/21", "/13", "/5"}},
    {252, {"/30", "/22", "/14", "/6"}},
    {254, {"/31", "/23", "/15", "/7"}},
    {255, {"/32", "/24", "/16", "/8"}},
//CLASSE :   C      B      A     
};

vector<std::array<string, 5>> INFORMAZIONI(string classe, string classi, string IP){
    string CLASSE = classe;
    string SUBNET_MASK;

    if(CLASSE == "C"){SUBNET_MASK = "255.255.255."+classi;}
    else if(CLASSE == "B"){SUBNET_MASK = "255.255."+classi+".0";}
    else if(CLASSE == "A"){SUBNET_MASK = "255."+classi+".0.0";}
    else if(CLASSE == ""){SUBNET_MASK = classi+".0.0.0";}
    string TOTAL_HOST = valore_IP(setNumeri(SUBNET_MASK))[0][2];

    //WILDCARD BITS
    vector<short int> numeri = setNumeri(SUBNET_MASK);
    short int N1 = numeri[0];
    short int N2 = numeri[1];
    short int N3 = numeri[2];
    short int N4 = numeri[3];

    string Wildcard_Bits = std::to_string(255-N1)+"."+std::to_string(255-N2)+"."+std::to_string(255-N3)+"."+std::to_string(255-N4);

    //FIRST ID
    vector<short int> numeri0 = setNumeri(IP);
    short int Num1 = numeri0[0];
    short int Num2 = numeri0[1];
    short int Num3 = numeri0[2];
    short int Num4 = numeri0[3];

    string IP__N1___binario = return_decimale_binario(std::to_string(Num1));
    string IP__N2___binario = return_decimale_binario(std::to_string(Num2));
    string IP__N3___binario = return_decimale_binario(std::to_string(Num3));
    string IP__N4___binario = return_decimale_binario(std::to_string(Num4));

    string Wildcard_Bits__N1___binario = return_decimale_binario(std::to_string(255-N1));
    string Wildcard_Bits__N2___binario = return_decimale_binario(std::to_string(255-N2));
    string Wildcard_Bits__N3___binario = return_decimale_binario(std::to_string(255-N3));
    string Wildcard_Bits__N4___binario = return_decimale_binario(std::to_string(255-N4));

    string SUBNET_MASK__N1___binario = return_decimale_binario(std::to_string(N1));
    string SUBNET_MASK__N2___binario = return_decimale_binario(std::to_string(N2));
    string SUBNET_MASK__N3___binario = return_decimale_binario(std::to_string(N3));
    string SUBNET_MASK__N4___binario = return_decimale_binario(std::to_string(N4));

    string Wildcard_Bits___binario = Wildcard_Bits__N1___binario+Wildcard_Bits__N2___binario+Wildcard_Bits__N3___binario+Wildcard_Bits__N4___binario;
    string SUBNET_MASK___binario = SUBNET_MASK__N1___binario+SUBNET_MASK__N2___binario+SUBNET_MASK__N3___binario+SUBNET_MASK__N4___binario;
    string IP___binario = IP__N1___binario+IP__N2___binario+IP__N3___binario+IP__N4___binario;
    
    string FIRST_ID, FIRST_ID1;
    string parte;
    int count = 1;
    for(char i = 0; i < IP___binario.size(); i++){
        int a, b;
        if(IP___binario[i] == 48){a = 0;} else {a = 1;}
        if(SUBNET_MASK___binario[i] == 48){b = 0;} else {b = 1;}
        parte += std::to_string(a&b);

        if(count % 8 == 0){ 
            if(count == 32){ 
                FIRST_ID += std::to_string(return_binario_decimale(parte)); 
                FIRST_ID1 += parte;
                break; }
            FIRST_ID += std::to_string(return_binario_decimale(parte))+".";
            FIRST_ID1 += parte;
            parte="";
        }
        count++;
    }

    vector<std::array<string, 5>> informazioni = {{CLASSE, SUBNET_MASK, TOTAL_HOST, Wildcard_Bits, FIRST_ID}};
    return informazioni;
}

void trova_range_IP(string input){
    vector<std::array<string, 5>> informazioni;
    size_t pos = input.find('/');
    string identificatore;
    string IP;
    if (pos != string::npos) {
        identificatore = input.substr(pos); // esempio /24
        IP = input.substr(0, pos); 

        for(char  i = 0; i < classi.size(); i++){
            for(char j = 0; j < 4; j++){
                if(identificatore == classi[i].second[j]){
                    switch(j){
                        case 0: informazioni = INFORMAZIONI("C", std::to_string(classi[i].first), IP);break;
                        case 1: informazioni = INFORMAZIONI("B", std::to_string(classi[i].first), IP);break;
                        case 2: informazioni = INFORMAZIONI("A", std::to_string(classi[i].first), IP);break;
                        case 3: informazioni = INFORMAZIONI("", std::to_string(classi[i].first), IP);break;
                    }
                }
            }
        }
    } 
    unsigned int hosts = std::stoul(informazioni[0][2]);
    cout<<"host: "<<IP<<identificatore

        <<"\n\nCLASSE "<<informazioni[0][0]
            <<"\n\tNETMASK: "<<informazioni[0][1]
            <<"\n\tTOTAL HOSTS: "<<informazioni[0][2]<<"\n\n"
            
            <<"\n\tWILDCARD BITS: "<<informazioni[0][3]
            <<"\n\tFIRST ID: "<<informazioni[0][4]<<"\n";
}

