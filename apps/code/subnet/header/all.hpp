#include <iostream>
#include <cstdlib> 
#include <cstdint> 
#include <string>
#include <sstream>
#include <vector>
#include <array>
#include <stack>

using std::cout;
using std::vector;
using std::string;
using std::pair;
using std::cin;

//CARTELLA: logica
//ip.cpp
void trova_range_IP(string input);
vector<short int> setNumeri(string input);

//subnet_mask.cpp
vector<unsigned char> valori(string input);
vector<std::array<string, 3>> valore_IP(vector<unsigned char> input);

//checkIP.cpp
string check(const string& addresIP);
void decimale_binario(int n);
void binario_decimale(string n);




//CARTELLA: schermo
//schermo.cpp
void INIZIO();
void DOCUMENTAZIONE();