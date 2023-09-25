#include <iostream>
#include <string>
#include "a.h"

int main(){
	bool SI = true;

	while(SI){
		std::string home = HOME();
		switch(home){
			case "menu": MENU(); break;
			case "stanza": STANZA(); break;
			case "fine": FINE(); break;
			case "-q": SI = false;
			

		}
	}
	return 0;
}
