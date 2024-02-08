/*------------------------------------------------------------------------------------------------------------
CONSEGNA
--------------------------------------------------------------------------------------------------------------
Scrivi un programma in C che, dato un array di 20 interi generati casualmente scriva in un nuovo
vettore gli elementi dell'array che risultano maggiori della somma dei suoi due predecessori.
Considerare ovviamente gli elementi dal terzo in poi.
------------------------------------------------------------------------------------------------------------*/

// LIBRARY
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//MACROS
#define SZ 10
#define MIN 1
#define MAX 10

// FUNCTION
void welcome(void);
void arr_zeroer(int array[]);
void arr_loader(int array[]);
void arr_print(int array[], int a);

int main(void){
    welcome();

    int numbers[SZ], greater[SZ];
    int pivout = 0, count = 0;

    arr_zeroer(numbers);
    arr_zeroer(greater);
    arr_loader(numbers);

    printf("\n+ ");

    // Cerco un numero maggiore della somma dei suoi due predecessori.
    for(int i=2; i<SZ;i++){
        pivout = numbers[i-1]+numbers[i-2];
        printf("%d, ",pivout);

        if(numbers[i] > pivout){
            greater[count] = numbers[i];
            count++;
        }
    }

    arr_print(greater, count);
    printf("+--------------------------------------------------------------------+\n");

    return 0;
}

void welcome(void){
    printf("+--------------------------------------------------------------------+\n");
    printf("+                     WELCOME TO EXERCISE ONE!                       +\n");
    printf("+--------------------------------------------------------------------+\n");
}
void arr_zeroer(int array[]){
    //printf("+ ");
    for(int i=0; i<SZ; i++){
        array[i] = 0;
        //printf("%d, ", array[i]);
    }
    //printf("\n");
}
void arr_loader(int array[]){
    printf("+ ");
    for(int i = 0; i < SZ; i++) {
        array[i] = rand() % (MAX - MIN + 1) + MIN;
        printf("%d, ", array[i]);
    }
}

void arr_print(int array[], int a){
    printf("\n+ ");
    for(int i=0; i<a; i++){
        printf("%d, ", array[i]);
    }
    printf("\n");
}

/*------------------------------------------------------------------------------------------------------------
MAN (Ita Lang.)
--------------------------------------------------------------------------------------------------------------
    - arr_zeroer) La funzione seguente azzera tutti gli elementi di un array inserito.
    - arr_loader) La funzione seguente carica dei numeri semicasuali per ogni elemento di un array inserito.
    - arr_print)  La funzione seguente stampa tanti elementi quanto la variabile "indice" inserita. ->arr_print(arr[], i)
------------------------------------------------------------------------------------------------------------*/
