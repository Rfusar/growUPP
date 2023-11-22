#include "header.hpp"

using std::cin;

int main() {
    string inizio;
    system("cls");
    string ip;
    cout << "Inserisci ip: ";
    cin >> ip;
    trova_range_IP(ip);

    return 0;
}


