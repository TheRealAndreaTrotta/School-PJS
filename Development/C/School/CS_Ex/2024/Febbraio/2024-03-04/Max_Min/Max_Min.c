/*------------------------------------------------------------------------------------------------------------
CONSEGNA
--------------------------------------------------------------------------------------------------------------
Scrivi due funzioni cercaMin e cercaMax che accettano un array di interi e la sua lunghezza e restituiscono 
rispettivamente il min valore e il massimo valore presenti nell'array.

Scrivi poi una funzione cercaMaxMin che accetti un array di interi e la sua lunghezza come parametri, 
e restituisca il valore massimo e il valore minimo dell'array attraverso dei puntatori.
------------------------------------------------------------------------------------------------------------*/

// LIBRARY
#include <stdio.h>

// MACROS
#define SZ 3

// GRAPHIC FUNCTIONS
void welcome(void);
void endl(void);

// INPUT-OUTPUT FUNCTIONS
void arr_inp(int array[], int length);

// MATH FUNCTIONS
int max_value(int array[], int length);
int min_value(int array[], int length);

// PROGRAM
int main(void){
    welcome();

    int numbers[SZ];

    arr_inp(numbers, SZ);

    int max = max_value(numbers, SZ), min = min_value(numbers, SZ);
    
    printf("+ "); printf("\033[1;31mMIN: %d\tMAX: %d\n\033[0m", min, max);

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

void arr_inp(int array[], int length){
    char *numbers[] = {"first", "second", "third", "fourth", "fifth", "sixth", "seventh", "eighth", "ninth", "tenth"};

    for(int i=0; i<length; i++){
        printf("+ Please, enter the %s number: ", numbers[i]);
        scanf("%d", &array[i]);
    }
}

int max_value(int array[], int length){
    int greater = *array;

    for(int i=0; i<length; i++){
        if(greater < *(array+i)){
            greater = *(array+i);
        }
    }
    return greater;
}

int min_value(int array[], int length){
    int lower = *array;

    for(int i=0; i<length; i++){
        if(lower > *(array+i)){
            lower = *(array+i);
        }
    }
    return lower;
}
/*--------------------------------------------------------------------------------------------------------------
MAN (Ita Lang.)
----------------------------------------------------------------------------------------------------------------
Come funziona?
    -  Le funzioni max_value e min_value determinano il numero più grande e più piccolo
       all'interno di un array. Inizializzano una variabile temporanea con il valore
       del primo elemento dell'array.

       Questa variabile viene successivamente aggiornata durante la scansione dell'array,
       adattandosi alle condizioni richieste.
--------------------------------------------------------------------------------------------------------------*/