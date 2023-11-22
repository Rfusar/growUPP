#include <iostream>
#include <cstdlib> 
#include <cstdint> 
#include <string>
#include <sstream>
#include <vector>
#include <cmath>
#include <array>

using std::cout;
using std::vector;
using std::string;
using std::pair;


void trova_range_IP(string input);

vector<unsigned char> valori(string input);
vector<pair<unsigned char, vector<bool>>> valore(unsigned char input);
vector<std::array<string, 3>> valore_IP(vector<unsigned char> input);