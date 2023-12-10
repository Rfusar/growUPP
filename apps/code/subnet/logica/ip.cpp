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

vector<std::array<string, 6>> INFORMAZIONI(string classe, string classi, string IP){
    string CLASSE = classe;
    string SUBNET_MASK;

    if(CLASSE == "C"){SUBNET_MASK = "255.255.255."+classi;}
    else if(CLASSE == "B"){SUBNET_MASK = "255.255."+classi+".0";}
    else if(CLASSE == "A"){SUBNET_MASK = "255."+classi+".0.0";}
    else if(CLASSE == ""){SUBNET_MASK = classi+".0.0.0";}
    string TOTAL_HOST = valore_IP(setNumeri(SUBNET_MASK))[0][2];

    //WILDCARD BITS
    string Wildcard_Bits;
    vector<short int> numeri = setNumeri(SUBNET_MASK);
    for(char i = 0;i<4;i++){
        if(i == 3){ Wildcard_Bits+=std::to_string(255-numeri[i]);break;}
        Wildcard_Bits+=std::to_string(255-numeri[i])+".";
    }

    //FIRST ID
    vector<short int> numeri0 = setNumeri(IP);
    string IP_binario, Wildcards_binario, SubnetMask_binario;
    for(char i = 0;i < 4 ;i++){
        string IP_Ni = return_decimale_binario(std::to_string(numeri0[i])); IP_binario += IP_Ni;
        string Wildcards_Ni = return_decimale_binario(std::to_string(255-numeri[i])); Wildcards_binario += Wildcards_Ni;
        string Subnet_Ni = return_decimale_binario(std::to_string(numeri[i])); SubnetMask_binario += Subnet_Ni;
    }

    string FIRST_ID, parte;
    int count = 1;
    for(char i = 0; i < IP_binario.size(); i++){
        int a, b;
        if(IP_binario[i] == 48){a = 0;} else {a = 1;}
        if(SubnetMask_binario[i] == 48){b = 0;} else {b = 1;}
        parte += std::to_string(a&b);

        if(count % 8 == 0){ 
            if(count == 32){ FIRST_ID += std::to_string(return_binario_decimale(parte)); break; }
            FIRST_ID += std::to_string(return_binario_decimale(parte))+".";
            parte="";
        }
        count++;
    }

    //LAST ID
    unsigned int hosts = std::stoul(TOTAL_HOST);
    vector<short int> numeri_FirstId = setNumeri(FIRST_ID);
    short int n1 = numeri_FirstId[0];
    short int n2 = numeri_FirstId[1];
    short int n3 = numeri_FirstId[2];
    short int n4 = numeri_FirstId[3];
    for(unsigned int i = 0; i < hosts-1; i++){
        n4 += 1;
        if(n4 == 256){ n3+=1; n4 = 0;

            if(n3 == 256){ n2+=1; n3 = 0;}

                if(n2 == 256){ n1+=1; n2 = 0;}

                    if(n1 == 255){break;}
        }
    }
    string LAST_ID = std::to_string(n1)+"."+std::to_string(n2)+"."+std::to_string(n3)+"."+std::to_string(n4);


    vector<std::array<string, 6>> informazioni = {{CLASSE, SUBNET_MASK, TOTAL_HOST, Wildcard_Bits, FIRST_ID, LAST_ID}};
    return informazioni;
}

void trova_range_IP(string input){
    vector<std::array<string, 6>> informazioni;
    size_t pos = input.find('/');
    string IP, identificatore;
    if (pos != string::npos) {
        IP = input.substr(0, pos); 
        identificatore = input.substr(pos); // esempio /24
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
    system("cls");
    cout<<"host: "<<IP<<identificatore

        <<"\n\nCLASSE "<<informazioni[0][0]
            <<"\n\tNETMASK: "<<informazioni[0][1]
            <<"\n\tTOTAL HOSTS: "<<informazioni[0][2]<<"\n\n"
            
            <<"\n\tWILDCARD BITS: "<<informazioni[0][3]
            <<"\n\tFIRST ID: "<<informazioni[0][4]
            <<"\n\tLAST ID: "<<informazioni[0][5]<<"\n";
}

