#include "..\header\all.hpp"

//DA subnet mask
string valore_CIDR(vector<bool> a, vector<bool> b, vector<bool> c, vector<bool> d) {
    string CIDR = "/";
    char n = 0;
    for (char i = 0; i < a.size(); i++) {
        if (a[i] == true) { n += 1; }
        if (b[i] == true) { n += 1; }
        if (c[i] == true) { n += 1; }
        if (d[i] == true) { n += 1; }
    }
    return CIDR;
}

unsigned int total_hosts(vector<bool> a, vector<bool> b, vector<bool> c, vector<bool> d){
    unsigned short int n = 0;
    for(unsigned short int i = 0; i < a.size(); i++){
        if(a[i] == false){ n += 1;}
        if(b[i] == false){ n += 1;}
        if(c[i] == false){ n += 1;}
        if(d[i] == false){ n += 1;}
    }
    return 1u << n;
}

vector<pair<unsigned char, vector<bool>>> valore(short int input) {
    vector<pair<unsigned char, vector<bool>>> numero;
    vector<pair<unsigned char, bool>> check = {{255, false}, {254, false}, {252, false}, {248, false}, {240, false}, {224, false}, {192, false}, {128, false}, {0, false}};

    for (char i = 0; i < 10; i++) {
        if (input == check[i].first) {
            numero.push_back({input, {false, false, false, false, false, false, false, false}});
            for (char j = i; j < 10; j++) { numero[0].second[j] = true;}
            break;
        }
    }
    return numero;
}

vector<std::array<string, 3>> valore_IP(vector<short int> input) {
    vector<pair<unsigned char, vector<bool>>> primo_numero; 
    vector<pair<unsigned char, vector<bool>>> secondo_numero; 
    vector<pair<unsigned char, vector<bool>>> terzo_numero; 
    vector<pair<unsigned char, vector<bool>>> quarto_numero;

    string IP;
    string CIDR;
    unsigned int hosts;

    primo_numero = valore(input[0]); 
    secondo_numero = valore(input[1]); 
    terzo_numero = valore(input[2]); 
    quarto_numero = valore(input[3]); 

    IP = std::to_string(primo_numero[0].first)+"."+std::to_string(secondo_numero[0].first)+"."+std::to_string(terzo_numero[0].first)+"."+std::to_string(quarto_numero[0].first);
    CIDR = valore_CIDR(primo_numero[0].second, secondo_numero[0].second, terzo_numero[0].second, quarto_numero[0].second);
    hosts = total_hosts(primo_numero[0].second, secondo_numero[0].second, terzo_numero[0].second, quarto_numero[0].second);

    vector<std::array<string, 3>> DATI = {{IP, CIDR, std::to_string(hosts)}};
    return DATI;
}