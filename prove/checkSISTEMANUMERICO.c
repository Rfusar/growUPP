#include <stdio.h>
#include <string.h>

void decimaleToBinario(int n) {
    if (n > 0) {
        decimaleToBinario(n / 2);
        printf("%d", n % 2);
    }
}

int main() {
    
    int decimale;
    printf("Inserisci il numero decimale: ");
    scanf("%d", &decimale);

        printf("\nNumero binario: ");
        if (decimale == 0) {
            printf("0");
        } else {
            decimaleToBinario(decimale);
        }
        printf("\nNumero ottale: %o\n", decimale);
        printf("Numero esadecimale: %x\n", decimale);
        return 0;
       
    } 
  
    
   
    

