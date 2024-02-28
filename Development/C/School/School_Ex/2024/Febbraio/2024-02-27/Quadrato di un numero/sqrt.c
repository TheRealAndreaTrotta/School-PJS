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
#include <stdbool.h>
#include <math.h>

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
        printf("+ Please, enter a number: ");
        scanf("%d", &input);
    }while(input < 0);

    int result = square(input);

    if(result == false){
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
    int divisor = input/2;

    for(int i=1; i<=divisor; i++){
        if(pow(i, 2)==input){
            return i;
        }
    }
    return -1;
}
