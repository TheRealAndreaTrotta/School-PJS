/*------------------------------------------------------------------------------------------------------------
CONSEGNA
--------------------------------------------------------------------------------------------------------------
I codici a barre dei prodotti sono composti da 13 cifre di cui l'ultima è la cifra di controllo che si determina 
a partire dalle prime 12 con le seguenti regole:
                           
a. moltiplicare per 3 tutte le cifre in posizione dispari

                           
b. moltiplicare per 1 tutte le cifre in posizione pari (ovviamente questa operazione è
inutile)

                           
c. sommare i 12 valori così ottenuti

d. prendere io resto della divisione per 10 della somma ottenuta
                           
Scrivere un programma che richieda l'inserimento delle singole cifre di un codice a barre
e visualizzi la corrispondente cifra di controllo calcolata con il metodo descritto sopra.
------------------------------------------------------------------------------------------------------------*/

// LIBRARY
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// MACROS
#define SZ 13
#define MIN 1
#define MAX 100

// FUNCTIONS
void fill_array(int array[]);
void check(int array[]);

// PROGRAM
int main(void){
    srand(time(NULL));

    int barcode[SZ];

    fill_array(barcode);
    puts("");
    check(barcode);


    return 0;
}

void fill_array(int array[]){
    for(int i=0; i<SZ; i++){
        array[i] = rand() % (MAX - MIN + 1) + MIN;
        printf("%d, ", array[i]);
    }
}

void check(int array[]){
    int sum = 0;

    for(int i=0; i<SZ; i++){
        if(array[i]%2!=0){
            array[i] *= 3;
        }
        sum += array[i];
    }
    sum = sum % 10;
    printf("SUM: %d", sum);
}