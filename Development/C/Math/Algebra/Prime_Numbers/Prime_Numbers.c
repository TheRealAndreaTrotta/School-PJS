#include <stdio.h>

void welcome(void){
    printf("+---------------------------------------------------------------------------------------+\n");
    printf("+                        WELCOME TO THE PRIME NUMBERS CALCULATOR                        +\n");
    printf("+---------------------------------------------------------------------------------------+\n");
}

int corrin(void){ 
    // This function ensures correct input.
    int number; char character;

    printf("+ Please, enter number: ");
    
    do{
        if(number < 1){
            printf("+\tERROR: Not a valid input\n+\n+ Please, enter number: ");
            while ((character = getchar()) != '\n' && character != EOF);        // Input buffer cleanup.

        } else if (scanf("%d", &number) != 1){                                  // !=1 (Is NaN).
            printf("+\tERROR: Not a valid input\n+\n+ Please, enter number: ");
            
            while ((character = getchar()) != '\n' && character != EOF);        
        } else{
            break;
        } 

    } while ((scanf("%d", &number) != 1) || (number < 1));

    return number;
}

int main(void){

    welcome();

    int input = corrin(), counter = 0;      
    int accumulator[1000];                  

    for(int i=2; i<1000; i++){
    
        if(input%i==0){
            accumulator[counter] = i;
            counter++;
        }
    }

    if (input == 1){
        printf("%d The number 1 is not prime, as it has only one divisor: 1 \n", input);
        
    } else if(counter>1){
        printf("+ %d isn't a prime number since it is divisible by: \n", input);
        printf("+ ");
        for(int j=0; j < counter; j++){
            printf("%d, ", accumulator[j]);
        }
        printf("\n");

    } else {
        printf("+ %d is a prime number\n", input);
    }

    printf("+---------------------------------------------------------------------------------------+\n");

    return 0;
}

/*
---------------------------------------------------------------------------------------------------------------
MAN (Ita Lang.)
---------------------------------------------------------------------------------------------------------------

Come funziona?
    - La variabile di INPUT è legata ad una funzione da me progettata (corrin()) che eviterà di compromettere
      la sicurezza del codice con un inserimento errato (es: 'A', 'a', '*', '-4', ecc).
    
    - La variabile denominata COUNTER tiene conto dei divisori del numero richiesto.

    - La variabile ACCUMULATOR è un array di numeri interi che salverà i numeri divisibili che stamperà
      se il il counter è maggiore di uno.

---------------------------------------------------------------------------------------------------------------
*/
