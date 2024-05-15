/*
Calcolare la potenza di un numero:
Scrivi un programma che calcoli la potenza di un numero, utilizzando una funzione ricorsiva.
*/

#include <stdio.h>
#include <stdlib.h>
#include "myfunctions.c"

int main(void) {
    char answer = 'y';
    int base, exponent;

    while (answer == 'y' || answer == 'Y') {
        welcome();

        printf("+ Base & Exponent: ");
        scanf("%d^%d", &base, &exponent);

        printf("+ Result: %d\n", power(base, exponent));

        printf("+\n+ Do you need to calculate anything else? [Y/N]: ");
        fflush(stdin); 
        scanf(" %c", &answer); 

        endl();
        if(answer == 'y' || answer == 'Y'){
            system("clear");
        }
    }
    
    return 0;
}
