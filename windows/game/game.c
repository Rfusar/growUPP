#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <windows.h>


//status
void status(char nome[], int vita, int forza, int difesa){
  printf("\n\n\n");
  printf("\t\tnome : %s\n", nome);
  printf("\t\tvita : %d\n", vita);
  printf("\t\tforza : %d\n", forza);	
  printf("\t\tdifesa : %d\n", difesa);
  printf("\n");
  
};


//Menu Lotta
void risultato(int a, int b, char nomeNemico[], char nomeGiocatore[], int attNem, int attGio, int difNem, int difGio, char livello[]){
  if (a > 0){
    
    printf("\nliv: %s",livello);
    printf("																%s:%d\n", nomeNemico, a);
    printf("\n*********************************************************************************************************************************");
    printf("\n				                   										       ");
    printf("\n	Att: %d		                   										               ", attNem);  
    printf("\n   	Dif: %d		                   										       ", difNem);
    printf("\n				                   										       ");
    printf("\n				                   										       ");
    printf("\n				                   										       ");    
    printf("\n				                   										       ");   
    printf("\n---------------------------------------------------------------------------------------------------------------------------------");
    printf("\n				                   										       ");
    printf("\n				                   							Att: %d			       ", attGio);
    printf("\n				                   							Dif: %d			       ", difGio);
    printf("\n				                   										       ");	
    printf("\n				                   										       ");
    printf("\n				                   										       ");
    printf("\n				                   										       ");;
    printf("\n*********************************************************************************************************************************");
    printf("\n%s:%d				       											   \n\n", nomeGiocatore, b);
  };
};



 //DATI INIZIALI

    char *nomeNemico = "n0";  	
    int vitaNemico = 80, forzaNemico = 20, difesaNemico = 20;
    
   
    
    int vitaGiocatore = 100, vitaGiocatoreTOT = 100, forzaGiocatore = 50, difesaGiocatore = 30;
    
    int monete = 0, xp = 0;
    char *liv = "[-----]";
    
    int TRU = 1;
    
    int i = 0;
    int vittoria = 0;
 

//Store
      void negozio(){
      
        while (TRU == 1){
  
        system("cls");
        printf("\n*********************************************************************************************************************************");
        printf("\n				                   										 ");
        printf("\n				                   										 ");
        printf("\n	1A. bonus ATT: +50%%			2A. bonus ATT: +100%%		3A. bonus ATT: +150%%	  			 ");	
        printf("\n   	1B. bonus DIF: +50%%			2B. bonus DIF: +100%%		3B. bonus DIF: +150%%      		         ");
        printf("\n	1C. bonus SAL: +50%%			2C. bonus SAL: +100%%		3C. bonus SAL: +150%%	 			 ");
        printf("\n				                   										 ");
        printf("\n				                   										 "); 
        printf("\n				                   										 ");
        printf("\n				                   										 ");	
        printf("\n				                   										 ");
        printf("\n---------------------------------------------------------------------------------------------------------------------------------");
        printf("\n	COSTO	= 30		                   										 ");
        printf("\n				                   										 ");
        printf("\n	A1: ATT -10%%			                   										 ");	
        printf("\n	A1: DIF -10%%			                   										 ");	
        printf("\n	A1: SAL -10%%			                   										 ");	
        printf("\n				                   										 ");
        printf("\n				                   							ATT: 10/50/100		 ");
        printf("\n				                   							DIF: 10/50/100	 	 ");
        printf("\n				                   							SAL: 10/50/100	 	 ");	
        printf("\n				                   										 ");
        printf("\n				                   										 ");
        printf("\n				                   										 ");
        printf("\n monete: %d				                   									 ", monete);

        char acquisto[100];	
        printf("\n\n--inserisci [lotta] per continuare\n\n\n\tcosa vuoi acquistare? ");
        scanf("\n%s", acquisto);
      
        if (strcmp(acquisto, "1A")==0 && monete >= 10){
          monete -= 10;
          if (monete < 0){}
          forzaGiocatore = (forzaGiocatore * 150) / 100;
          printf("\n\n\nacquisto effettuato");
        }
        else if (strcmp(acquisto, "1B")==0 && monete >= 10){
          monete -= 10;
          if (monete < 0){}
          difesaGiocatore = (difesaGiocatore * 150) / 100;
          printf("\n\n\nacquisto effettuato");
        }
        else if (strcmp(acquisto, "1C")==0 && monete >= 10){
          monete -= 10;
          if (monete < 0){}
          vitaGiocatoreTOT = (vitaGiocatoreTOT * 150) / 100;
          printf("\n\n\nacquisto effettuato");
        }
      
        else if (strcmp(acquisto, "2A")==0 && monete >= 50){
          monete -= 50;
          if (monete < 0){}
          forzaGiocatore = (forzaGiocatore * 200) / 100;
          printf("\n\n\nacquisto effettuato");
        }
        else if (strcmp(acquisto, "2B")==0 && monete >= 50){
          monete -= 50;
          if (monete < 0){}
          difesaGiocatore = (difesaGiocatore * 200) / 100;
          printf("\n\n\nacquisto effettuato");
        }
        else if (strcmp(acquisto, "2C")==0 && monete >= 50){
          monete -= 50;
          if (monete < 0){}
          vitaGiocatoreTOT = (vitaGiocatoreTOT * 200) / 100;
          printf("\n\n\nacquisto effettuato");
        }
      
        else if (strcmp(acquisto, "3A")==0 && monete >= 100){
          monete -= 100;
          if (monete < 0){}
          forzaGiocatore = (forzaGiocatore * 250) / 100;
          printf("\n\n\nacquisto effettuato");
        }
        else if (strcmp(acquisto, "3B")==0 && monete >= 100){
          monete -= 100;
          if (monete < 0){}
          difesaGiocatore = (difesaGiocatore * 250) / 100;
          printf("\n\n\nacquisto effettuato");
        }
        else if (strcmp(acquisto, "3C")==0 && monete >= 100){
          monete -= 100;
          if (monete < 0){}
          vitaGiocatoreTOT = (vitaGiocatoreTOT * 250) / 100;
          printf("\n\n\nacquisto effettuato");
        }
        else if (strcmp(acquisto, "A1") == 0 && monete >= 30){
          monete -= 30;
          vittoria = 1;
        }
        else if (strcmp(acquisto, "lotta")== 0){
          TRU = 0;
          system("cls");
        }
      }; 
     };


    void goToNegozio(){
      char ris[1]; 

      printf("vuoi andare al negozio? [Y/N]\t");
      scanf("%s",ris);
  
      if (strcmp(ris, "Y") == 0){
        TRU = 1;
        negozio();
      }
      else {TRU = 0;system("cls");}
    };


// Gioco
int main(){
  
  system("cls");
  char stringa[50];
  
  printf("\n\n\n");
  printf("\tinserisci nome: ");
  scanf("%s", stringa);
  
  if (strcmp(stringa, "esci") == 0) {
    printf("\nFine\n");
    
    } 
  else{
    
    srand(time(NULL));
   
    char *nomeGiocatore = stringa;
    
    for (;i<=6; i++){
       
	
    	
      system("cls");
      
      
      
      
      if (i >= 2 && vitaGiocatore >= 0){
	  goToNegozio();

        };
        
      if (vitaNemico >= 0 && vitaGiocatore >= 0){
        status(nomeGiocatore,vitaGiocatore,forzaGiocatore,difesaGiocatore);
        status(nomeNemico,vitaNemico,forzaNemico,difesaNemico);
      }
   
      sleep(2);
      while (vitaNemico >= 0 && vitaGiocatore >= 0) {
	system("cls");


	//Livello
	if (xp > 500 ){
    liv = "[#----]";
    forzaGiocatore += 30;
    vitaGiocatoreTOT += 30;
    if ( xp > 1000 ){
      liv = "[##---]";
      forzaGiocatore += 50;     
      vitaGiocatoreTOT += 50;     
      if ( xp > 1500 ){
        liv = "[###--]";
      	forzaGiocatore += 100;
        if ( xp > 2000 ){
          liv = "[####-]";
          forzaGiocatore += 200;
          vitaGiocatoreTOT += 200;
          if ( xp > 3000 ){
            liv = "[#####]";
            forzaGiocatore += 500;
            vitaGiocatoreTOT += 500;
          }
        }   	
      } 
	  }
	}
	
	printf("xp: %d\t\tmonete: %d", xp, monete);	
	risultato(vitaNemico, vitaGiocatore, nomeNemico, nomeGiocatore, forzaNemico, forzaGiocatore, difesaNemico, difesaGiocatore, liv);
	
	
	const char *fulmine = "fulmine";
	const char *tornado = "tornado";
	const char *bonusSalute = "cura";
	const char *suicidio = "x";

	char d[10];
	
	printf("\n\n\n                       %s  |%s  |%s  |%s  /inserisci: ", fulmine, tornado, bonusSalute, suicidio);		
	scanf("%s", d);
	
	
  //Mosse	
	if (strcmp(d, "fulmine") == 0){
	
	  int rangeMinGiocatore = (forzaGiocatore * 90) / 100;
	  int danno = rand() % (forzaGiocatore - rangeMinGiocatore + 1) + rangeMinGiocatore;
	  
	  int rangeMin = (forzaNemico * 90) / 100;
	  int dannoNemico = rand() % (forzaNemico - rangeMin + 1) + rangeMin;
	  
	  dannoNemico = dannoNemico - (difesaGiocatore *40)/100;
	  danno = danno - (difesaNemico * 50)/100;
	  
	  int fine = vitaNemico - danno;
	  int fine1 = vitaGiocatore - dannoNemico;
	  
	  vitaGiocatore = fine1;
	  vitaNemico = fine;
	  if (vitaGiocatore <= 0){
	  
	    system("cls");
	    printf("\n\n\nHAI PERSO");
	    printf("\n\nvuoi giocare di nuovo? [Y/N]\t");
	  
	    char a[1];
	    scanf("%s", a);
	    if (strcmp(a, "Y") == 0){ 
	    
	      nomeNemico = "n0";  	
    	      vitaNemico = 80, forzaNemico = 20, difesaNemico = 20;
    
              vitaGiocatore = 100, forzaGiocatore = 100, difesaGiocatore = 30;
    
              monete = 0, xp = 0;

              liv = "[-----]";
    
              TRU = 1;
    
              i = 0;
              main();
            }
	    
	    else if (strcmp(a, "N") == 0){ TRU = 0; i = 7;}
	     
	  else {risultato(vitaNemico, vitaGiocatore, nomeNemico, nomeGiocatore, forzaNemico, forzaGiocatore, difesaNemico, difesaGiocatore, liv);}
	  }
	  
	  
	}
	  
	else if (strcmp(d, "tornado") == 0){
	  int danno = rand() % (60 - 30 + 1) + 30;
	  
	  int rangeMin = (forzaNemico * 10) / 100;
	  int dannoNemico = rand() % (forzaNemico - rangeMin + 1) + rangeMin;
	  
	  int fine = vitaNemico - danno;
	  int fine1 = vitaGiocatore - dannoNemico;
	  
	  vitaGiocatore = fine1;
	  vitaNemico = fine;
	  if (vitaGiocatore <= 0){
	  
	    system("cls");
	    printf("\n\n\nHAI PERSO");
	    printf("\n\nvuoi giocare di nuovo? [Y/N]\t");
	  
	    char a[1];
	    scanf("%s", a);
	    if (strcmp(a, "Y") == 0){ 
	    
	      nomeNemico = "n0";  	
    	      vitaNemico = 80, forzaNemico = 20, difesaNemico = 20;
    
              vitaGiocatore = 100, forzaGiocatore = 100, difesaGiocatore = 30;
    
              monete = 0, xp = 0;
              liv = "[-----]";
    
              TRU = 1;
    
              i = 0;
              main();
            }
	    
	    else if (strcmp(a, "N") == 0){ TRU = 0; i = 7;}
	     
	  else {risultato(vitaNemico, vitaGiocatore, nomeNemico, nomeGiocatore, forzaNemico, forzaGiocatore, difesaNemico, difesaGiocatore, liv);}
	  }
	  
	  
	}
	
	else if (strcmp(d, "cura") == 0){
	  vitaGiocatore += vitaGiocatoreTOT / 2;
	  
	  int rangeMin = (forzaNemico * 10) / 100;
	  int dannoNemico = rand() % (forzaNemico - rangeMin + 1) + rangeMin;
	  
	  int fine1 = vitaGiocatore - dannoNemico;
	  vitaGiocatore = fine1;
	  if (vitaGiocatore <= 0){
	  
	    system("cls");
	    printf("\n\n\nHAI PERSO");
	    printf("\n\nvuoi giocare di nuovo? [Y/N]\t");
	  
	    char a[1];
	    scanf("%s", a);
	    if (strcmp(a, "Y") == 0){ 
	    
	      nomeNemico = "n0";  	
    	      vitaNemico = 80, forzaNemico = 20, difesaNemico = 20;
    
              vitaGiocatore = 100, forzaGiocatore = 100, difesaGiocatore = 30;
    
              monete = 0, xp = 0;
              liv = "[-----]";
    
              TRU = 1;
    
              i = 0;
              main();
            }
	    
	    else if (strcmp(a, "N") == 0){ TRU = 0; i = 7;}
	     
	  else {risultato(vitaNemico, vitaGiocatore, nomeNemico, nomeGiocatore, forzaNemico, forzaGiocatore, difesaNemico, difesaGiocatore, liv);}
	  }
	  
	}
	
	
}	//while
    
      
      
	
//Stage	
      switch(i){
	case 0:
	  nomeNemico = "n1";
	  vitaNemico = 100;
	  forzaNemico = (forzaNemico * 150) / 100;
	  difesaNemico = (difesaNemico * 160) / 100;
	  
	  monete += 10;
	  xp += 220;

          if (vitaGiocatore <= 0){
	  
	    system("cls");
	    printf("\n\n\nHAI PERSO");
	    printf("\n\nvuoi giocare di nuovo? [Y/N]\t");
	  
	    char a[1];
	    scanf("%s", a);
	    if (strcmp(a, "Y") == 0){ 
	    
	      nomeNemico = "n0";  	
    	      vitaNemico = 80, forzaNemico = 20, difesaNemico = 20;
    
              vitaGiocatore = 100, forzaGiocatore = 50, difesaGiocatore = 30;
    
              monete = 0, xp = 0;
              liv = "[-----]";
    
              TRU = 1;
    
              i = 0;
              main();
            }
	    
	    else if (strcmp(a, "N") == 0){ TRU = 0; i = 7;}
	     
	  else {risultato(vitaNemico, vitaGiocatore, nomeNemico, nomeGiocatore, forzaNemico, forzaGiocatore, difesaNemico, difesaGiocatore, liv);}
	  }
	  break;
	  
	case 1:
	  nomeNemico = "n2";
	  vitaNemico = 170;
	  forzaNemico = (forzaNemico * 180) / 100;
	  difesaNemico = (difesaNemico * 120) / 100;
	  
	  monete += 20;
	  xp += 500;

          if (vitaGiocatore <= 0){
	  
	    system("cls");
	    printf("\n\n\nHAI PERSO");
	    printf("\n\nvuoi giocare di nuovo? [Y/N]\t");
	  
	    char a[1];
	    scanf("%s", a);
	    if (strcmp(a, "Y") == 0){ 
	    
	      nomeNemico = "n0";  	
    	      vitaNemico = 80, forzaNemico = 20, difesaNemico = 20;
    
              vitaGiocatore = 100, forzaGiocatore = 50, difesaGiocatore = 30;
    
              monete = 0, xp = 0;
              liv = "[-----]";
    
              TRU = 1;
    
              i = 0;
              main();
            }
	    
	    else if (strcmp(a, "N") == 0){ TRU = 0; i = 7;}
	     
	  else {risultato(vitaNemico, vitaGiocatore, nomeNemico, nomeGiocatore, forzaNemico, forzaGiocatore, difesaNemico, difesaGiocatore, liv);}
	  }
    break;
          
	case 2:
	  nomeNemico = "n3";
	  vitaNemico = 380;
	  forzaNemico = (forzaNemico * 120) / 100;
	  difesaNemico = (difesaNemico * 200) / 100;
	  
	  monete += 50;
	  xp += 1000;

          if (vitaGiocatore <= 0){
	  
	    system("cls");
	    printf("\n\n\nHAI PERSO");
	    printf("\n\nvuoi giocare di nuovo? [Y/N]\t");
	  
	    char a[1];
	    scanf("%s", a);
	    if (strcmp(a, "Y") == 0){ 
	    
	      nomeNemico = "n0";  	
    	      vitaNemico = 80, forzaNemico = 20, difesaNemico = 20;
    
              vitaGiocatore = 100, forzaGiocatore = 50, difesaGiocatore = 30;
    
              monete = 0, xp = 0;
              liv = "[-----]";
    
              TRU = 1;
    
              i = 0;
              main();
            }
	    
	    else if (strcmp(a, "N") == 0){ TRU = 0; i = 7;}
	     
	  else {risultato(vitaNemico, vitaGiocatore, nomeNemico, nomeGiocatore, forzaNemico, forzaGiocatore, difesaNemico, difesaGiocatore, liv);}
	  }
	  break;
	  
	case 3:
	  nomeNemico = "n4";
	  vitaNemico = 500;
	  forzaNemico = (forzaNemico * 160) / 100;
	  difesaNemico = (difesaNemico * 120) / 100;
	  
	  monete += 100;
	  xp += 1745;

          if (vitaGiocatore <= 0){
	  
	    system("cls");
	    printf("\n\n\nHAI PERSO");
	    printf("\n\nvuoi giocare di nuovo? [Y/N]\t");
	  
	    char a[1];
	    scanf("%s", a);
	    if (strcmp(a, "Y") == 0){ 
	    
	      nomeNemico = "n0";  	
    	      vitaNemico = 80, forzaNemico = 20, difesaNemico = 20;
    
              vitaGiocatore = 100, forzaGiocatore = 50, difesaGiocatore = 30;
    
              monete = 0, xp = 0;
              liv = "[-----]";
    
              TRU = 1;
    
              i = 0;
              main();
            }
	    
	    else if (strcmp(a, "N") == 0){ TRU = 0; i = 7;}
	     
	  else {risultato(vitaNemico, vitaGiocatore, nomeNemico, nomeGiocatore, forzaNemico, forzaGiocatore, difesaNemico, difesaGiocatore, liv);}
	  }
	  break;
	  
	case 4:
	  nomeNemico = "n5";
	  vitaNemico = 680;
	  forzaNemico = (forzaNemico * 170) / 100;
	  difesaNemico = (difesaNemico * 170) / 100;
	  
	  monete += 300;
	  xp += 5000;

          if (vitaGiocatore <= 0){
	  
	    system("cls");
	    printf("\n\n\nHAI PERSO");
	    printf("\n\nvuoi giocare di nuovo? [Y/N]\t");
	  
	    char a[1];
	    scanf("%s", a);
	    if (strcmp(a, "Y") == 0){ 
	    
	      nomeNemico = "n0";  	
    	      vitaNemico = 80, forzaNemico = 20, difesaNemico = 20;
    
              vitaGiocatore = 100, forzaGiocatore = 50, difesaGiocatore = 30;
    
              monete = 0, xp = 0;
              liv = "[-----]";
    
              TRU = 1;
    
              i = 0;
              main();
            }
	    
	    else if (strcmp(a, "N") == 0){ TRU = 0; i = 7;}
	     
	  else {risultato(vitaNemico, vitaGiocatore, nomeNemico, nomeGiocatore, forzaNemico, forzaGiocatore, difesaNemico, difesaGiocatore, liv);}
	  }
	  break;
	  
	case 5:
	  nomeNemico = "Boss";
	  if (vittoria != 1){
	    vitaNemico = (vitaGiocatore * 2048) /100;
	    forzaNemico = (forzaGiocatore * 2048) /100;
	    difesaNemico = (difesaGiocatore * 2048) /100;
	  }
	  else{
	    vitaNemico = 1;
	    forzaNemico = 0;
	  }
	  forzaNemico = (forzaNemico * 500) / 100;
	  difesaNemico = (difesaNemico * 500) / 100;
	  
	  monete += 1000;
	  xp += 10000;

    	  if (vitaGiocatore <= 0){
	  
	    system("cls");
	    printf("\n\n\nHAI PERSO");
	    printf("\n\nvuoi giocare di nuovo? [Y/N]\t");
	  
	    char a[1];
	    scanf("%s", a);
	    if (strcmp(a, "Y") == 0){ 
	    
	      nomeNemico = "n0";  	
    	      vitaNemico = 80, forzaNemico = 20, difesaNemico = 20;
    
              vitaGiocatore = 100, forzaGiocatore = 50, difesaGiocatore = 30;
    
              monete = 0, xp = 0;
              liv = "[-----]";
    
              TRU = 1;
    
              i = 0;
              main();
            }
	    
	    else if (strcmp(a, "N") == 0){ TRU = 0; i = 7;}
	     
	  else {risultato(vitaNemico, vitaGiocatore, nomeNemico, nomeGiocatore, forzaNemico, forzaGiocatore, difesaNemico, difesaGiocatore, liv);}
	  }
    
	  break;  
      }
     }
     
      
     } // for
    if (vitaNemico <= 0 && vitaGiocatore > 0){
     
      system("cls");
      system(".\\V.bat");
    }
       
  return 0;
};

