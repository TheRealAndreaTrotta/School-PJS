//Chiedere in input l'altezza di un quadrato e visualizzare la sua costruzione a schermo.

#include <stdio.h>

int corrin(void){ 
    // This function ensures correct input.
    int number; char character;

    printf("Please, enter number: ");
    
    do{
        if(number < 1){
            printf("\tERROR: Not a valid input\n\nPlease, enter number: ");
            while ((character = getchar()) != '\n' && character != EOF);        // Input buffer cleanup.

        } else if (scanf("%d", &number) != 1){                                  // !=1 (Is NaN).
            printf("\tERROR: Not a valid input\n\nPlease, enter number: ");
            
            while ((character = getchar()) != '\n' && character != EOF);        
        } else{
            break;
        } 

    } while ((scanf("%d", &number) != 1) || (number < 1));

    return number;
}

int main(void) {
    int height = corrin();

    printf("\n");

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < height; j++) {
            if ((i == 0) || (i == height - 1) || (j == 0) || (j == height - 1)) {
                printf("* ");
            } else {
                printf("  "); 
            }
        }
        printf("\n");
    }
    return 0;
}

