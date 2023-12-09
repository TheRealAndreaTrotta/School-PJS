//Chiedere in input l'altezza di una piramide e visualizzare la sua costruzione a schermo.

#include <stdio.h>

int corrin(void){ 
    // This function ensures correct input 
    int number; char character;

    printf("Please, enter number: ");
    
    do{
        if(number < 1){
            printf("\tERROR: Not a valid input\n\nPlease, enter number: ");
            while ((character = getchar()) != '\n' && character != EOF);        // Input buffer cleanup

        } else if (scanf("%d", &number) != 1)  {
            printf("\tERROR: Not a valid input\n\nPlease, enter number: ");
            
            while ((character = getchar()) != '\n' && character != EOF);        // Input buffer cleanup
        } 

    } while ((scanf("%d", &number) != 1) || (number < 1));

    return number;
}

int main(void) {
    int height = corrin();

    printf("\n");
    
    for(int i = 1; i <= height; i++){
        for(int space = 1; space <= height - i; space++){
            printf(" ");
        }
        for(int asterisk = 1; asterisk <= (2*i) - 1; asterisk++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

/*
---------------------------------------------------------------------------------------------------------------
MAN (Ita Lang.)
---------------------------------------------------------------------------------------------------------------

Come funziona?
    - Il ciclo for ESTERNO controlla il numero di righe della piramide. 
        + Ogni iterazione rappresenta una riga della piramide.

    - Il PRIMO ciclo for INTERNO stampa gli spazi vuoti a sinistra per allineare la piramide. 
        + Il numero di spazi diminuisce man mano che si sale verso l'alto della piramide,
          difatti sono principalmente questi a dare forma alla piramide.

        + In caso contrario, se non ci fossero gli spazi si otterebbe questa forma come risultato:
            *
            ***
            *****
            *******

    - Il SECONDO ciclo for INTERNO stampa i caratteri asterisco * che formano la piramide. 
        + Il numero di asterischi stampati per ogni riga segue una sequenza dispari (1, 3, 5, ...)
          per creare la forma della piramide.

---------------------------------------------------------------------------------------------------------------
*/
