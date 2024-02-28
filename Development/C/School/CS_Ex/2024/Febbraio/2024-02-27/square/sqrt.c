/*------------------------------------------------------------------------------------------------------------
CONSEGNA
--------------------------------------------------------------------------------------------------------------
Realizza una funzione che riceva in input un numero intero positivo e verifichi se questo numero
è il quadrato di un numero intero. 

Nel primo caso la funzione restituisce in output la radice 
trovata, nel secondo caso restituisce -1.
------------------------------------------------------------------------------------------------------------*/

// LIBRARY
#include <stdio.h>

// GRAPHIC FUNCTIONS
void welcome(void);
void endl(void);

// MATH FUNCTIONS
int square(int input);

// PROGRAM
int main(void){
    welcome();

    int input;

    do{
        if(input < 1){
            puts("\033[1;31m+\tERROR: INVALID ARGUMENT\033[0m");        
        }

        printf("+ Please, enter a number: ");
        scanf("%d", &input);
    
    }while(input < 1);

    int result = square(input);

    if(result == -1){
        printf("+ Square: NOT FOUND\n");
    }
    else{
        printf("+ Square: %d\n", result);
    }

    endl();
    return 0;
}

void welcome(void){
    puts("+--------------------------------------------------------------------+");
    puts("+                             WELCOME!                               +");
    puts("+--------------------------------------------------------------------+");
}

void endl(void){
    puts("+--------------------------------------------------------------------+");
}

int square(int input){
    if(input == 1){
        return input;
    }
    int divisor = input / 2;

    for(int i = 1; i <= divisor; i++){
        if(i*i == input){
            return i;
        }
    }
    return -1;
}
