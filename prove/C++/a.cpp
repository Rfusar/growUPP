#include <iostream>
#include <string>
#include <cstdlib>
#include "a.h"

using std::cout;
using std::endl;
using std::string;
using std::cin;



void librerie(){
	system("chcp 65001 > nul | type  C:\\Users\\Utente\\Desktop\\esperimenti-master\\prove\\C++\\librerie.txt");

};

void check(){
	system("powershell -command get-process | where-object {$_.cpu -eq $_.cpu}");
}


int HOME(){
	string risposta;

	cout << endl;
	cout <<"MENU "<< endl;
	cout << endl; 
	cout << endl;
	cout << "1. vedi librerie C++" << endl;
	cout << "2. powershell" <<endl;
	cout << "3. FINE" << endl; 
	cout << endl;

    cin >> risposta;
	if (risposta == "1"){
		librerie();
		cout << endl << endl << endl;
		system("pause");
	}
	else if (risposta == "2"){
		check();

	}
	return 0;	
};
 




string MENU(){
	string risposta;
	cout << endl;
	cout <<""<< endl;
	cout << endl; 
	cout << endl;
	cout << "Premi A per andare nella stanza 1" << endl;
	cout << endl;
	cout << endl; 
	cout << endl;
	cin >> risposta;
	return risposta;
};
 
string FINE(){
	string risposta;
	cout << endl;
	cout <<"POSIZIONE 4"<< endl;
	cout << endl; 
	cout << endl;
	cout << "Premi A per andare nella stanza 1" << endl;
	cout << endl;
	cout << endl; 
	cout << endl;
	cin >> risposta;
	return risposta;
};
 
