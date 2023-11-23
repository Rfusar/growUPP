#include "header.hpp"

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

//per prendere i numeri <n>.<n>.<n>.<n>
vector<unsigned char> setNumeri(string input){
    vector<unsigned char> numeri;
    std::istringstream ss(input);
    string token;
    while (std::getline(ss, token, '.')) {
        unsigned char numero = std::stoi(token);
        numeri.push_back(numero);
    }
    return numeri;
}


string WILDCARD_BITS(unsigned int total_hosts){
    total_hosts -= 1;
    unsigned short int primo_numero = 0;
    unsigned short int secondo_numero = 0;
    unsigned short int terzo_numero = 0;
    unsigned short int quarto_numero = 0;
    string wildcard_bits;

    for(unsigned long int i = 0; i < total_hosts; i++){
        quarto_numero += 1;
        if(quarto_numero == 256){ terzo_numero+=1; quarto_numero = 0;

            if(terzo_numero == 256){ secondo_numero+=1; terzo_numero = 0; quarto_numero = 0;

                if(secondo_numero == 256){ primo_numero+=1 ;secondo_numero = 0; terzo_numero = 0; quarto_numero = 0;

                    if(primo_numero == 256){ primo_numero = 0 ;secondo_numero = 0; terzo_numero = 0; quarto_numero = 0;}
                }
            }
        
        }
    }
    return wildcard_bits = std::to_string(primo_numero)+"."+std::to_string(secondo_numero)+"."+std::to_string(terzo_numero)+"."+std::to_string(quarto_numero);
}

string FIRST_ID(unsigned int total_hosts, string input, string wildcard_bits){
    vector<unsigned char> numeri = setNumeri(input);
    vector<unsigned char> wildcard_numeri = setNumeri(wildcard_bits);
    
    unsigned char primo_numero = numeri[0];
    unsigned char secondo_numero = numeri[1];
    unsigned char terzo_numero = numeri[2];
    unsigned char quarto_numero = numeri[3];
    string IP;
    for(total_hosts; total_hosts > 0; total_hosts--){
        if(primo_numero == 0 && secondo_numero == 0 && terzo_numero == 0 && quarto_numero == 0 ){primo_numero = 0;secondo_numero = 0; terzo_numero = 0; quarto_numero = 0; break;}

        if(wildcard_numeri[3] == 0){}
        else if(wildcard_numeri[2] == 0){}
        else if(wildcard_numeri[1] == 0){}
        else if(wildcard_numeri[0] == 0){}
        
    }
    return IP = std::to_string(primo_numero)+"."+std::to_string(secondo_numero)+"."+std::to_string(terzo_numero)+"."+std::to_string(quarto_numero);
}

vector<std::array<string, 3>> INFORMAZIONI(string classe, string classi){
    string CLASSE = classe;
    string SUBNET_MASK;
    if(CLASSE == "C"){SUBNET_MASK = "255.255.255."+classi;}
    else if(CLASSE == "B"){SUBNET_MASK = "255.255."+classi+".0";}
    else if(CLASSE == "A"){SUBNET_MASK = "255."+classi+".0.0";}
    else if(CLASSE == ""){SUBNET_MASK = classi+".0.0.0";}
    string TOTAL_HOST = valore_IP(valori(SUBNET_MASK))[0][2];

    vector<std::array<string, 3>> informazioni = {{CLASSE, SUBNET_MASK, TOTAL_HOST}};
    return informazioni;
}

void trova_range_IP(string input){
    vector<std::array<string, 3>> informazioni;
    size_t pos = input.find('/');

    if (pos != string::npos) {
        string identificatore = input.substr(pos); // esempio /24

        for(char  i = 0; i < classi.size(); i++){
            for(char j = 0; j < 4; j++){
                if(identificatore == classi[i].second[j]){
                    switch(j){
                        case 0: informazioni = INFORMAZIONI("C", std::to_string(classi[i].first));break;
                        case 1: informazioni = INFORMAZIONI("B", std::to_string(classi[i].first));break;
                        case 2: informazioni = INFORMAZIONI("A", std::to_string(classi[i].first));break;
                        case 3: informazioni = INFORMAZIONI("", std::to_string(classi[i].first));break;
                    }
                }
            }
        }
    } 
    unsigned int hosts = std::stoul(informazioni[0][2]);
    cout<<"\n\nCLASSE "<<informazioni[0][0]
            <<"\n\tSUBNET MASK: "<<informazioni[0][1]
            <<"\n\tTOTAL HOSTS: "<<informazioni[0][2]<<"\n\n"
            
            <<"\n\tWILDCARD BITS: "<<WILDCARD_BITS(hosts)<<"\n"
            <<"\n\tFIRST ID: "<<FIRST_ID(hosts, input, WILDCARD_BITS(hosts))<<"\n";
}

