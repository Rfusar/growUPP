#include <iostream>
#include <cstdlib> 
#include <cstdint> 
#include <string>
#include <sstream>
#include <vector>
#include <array>
#include <stack>
#include <bitset>

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
vector<std::array<string, 3>> valore_IP(vector<short int> input);

//checkIP.cpp
void check(const string addresIP);
void decimale_binario(string n);
void binario_decimale(string n);
string return_decimale_binario(string n);
int return_binario_decimale(string n);



//CARTELLA: schermo
//schermo.cpp
void INIZIO();
void DOCUMENTAZIONE();

//menu.cpp
void menu__ip(void (*func)(string), string menu);
void menu_n(void (*func1)(string), void (*func2)(string));