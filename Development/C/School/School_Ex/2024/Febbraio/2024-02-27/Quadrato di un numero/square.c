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
#include <math.h>

// GRAPHIC FUNCTIONS
void welcome(void);
void endl(void);

// FUNCTIONS


// PROGRAM
int main(void){
    welcome();

    int input;

    do{
        printf("Please, enter a number: ");
        scanf("%d", &input);
    }(while input < 0);

    if(sqrt(input))
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