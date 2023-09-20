#include <iostream>
#include <cstdlib>
#include <string>

class Prova{
	std::string NOME;
	std::string COGNOME;
	std::string EMAIL;
	int ETA;

	public:
	void setPersona(const std::string &n, const std::string &c, const std::string &e, const int &et){
		NOME = n;
		COGNOME = c;
		EMAIL = e;
		ETA = et;
	};
	std::string getPersona(){
		return "nome: " + NOME + "\ncognome: " + COGNOME + "\nemail: " + EMAIL + "\neta: " + std::to_string(ETA);
	};
        void getCELLE(){
		std::string eta = std::to_string(ETA);
		std::string a[] = {NOME, COGNOME,EMAIL,eta};
		for (int i = 0; i < sizeof(a)/sizeof(a[0]);i++){
			a[i].shrink_to_fit();
			std::cout << &a[i] << " ---> cella" << std::endl;
			std::cout << sizeof(a[i]) << " byte" << std::endl << std::endl;
		}
		std::cout << sizeof(a) << std::endl;
	}

};

int main(){

	using std::cout;
	using std::endl;
	using std::string;
	
	string nome;
	string cognome;
	string email;
	int eta;
	Prova P1;

        string *p1;
 	string *p2;	 
	string *p3;
	try{
		system("cls");
		cout << "Quale e il tuo nome?" << endl;
		std::cin >> nome;
		cout << "Quale e il tuo cognome?" << endl;
		std::cin >> cognome;

  		cout << "Inserisci email: " << endl;
		std::cin >> email;
		cout << "Insersci eta: " << endl;
		std::cin >> eta;
		
        	P1.setPersona(nome,cognome,email,eta);
		cout << endl << P1.getPersona() << endl;
		P1.getCELLE();
		
		cout << endl << "puntatore1 ---> " << p1 << endl;
		cout << endl << "puntatore1 +1 ---> " << p1+1 << endl;
		cout << "puntatore1 ---> " << p2 << endl;
		cout << "puntatore1 ---> " << p3 << endl;
	} catch (const std::exception &e){
		std::cerr << e.what(); 
	} 
    
    
    return 0;

}
  
