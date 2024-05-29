/*------------------------------------------------------------------------------------------------------------
CONSEGNA
--------------------------------------------------------------------------------------------------------------
Scrivi un programma che riempia un array di numeri interi compresi tra 1-10, 
un numero N e restituisca quante volte un numero dell’array sommato al suo successivo dà come risultato N.

Es 1 2 5 6 3 2 4 5 3 4 N = 7 2 volte la somma viene 7
------------------------------------------------------------------------------------------------------------*/
// LIBRARY
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// MACROS
#define SZ 10
#define MIN 1
#define MAX 10

// FUNCTIONS
void welcome(void);
void arr_zeroer(int array[]);
void arr_loader(int array[]);

int input(void);
int counter(int array[], int input);

// PROGRAM
int main(void) {
    srand(time(NULL));
    welcome();

    int numbers[SZ];

    arr_zeroer(numbers); // --> Array[i] = 0

    int input_number = input();
    
    arr_loader(numbers);

    int count = counter(numbers, input_number);

    printf("+ The number %d appears: %d times\n", input_number, count);
    printf("+----------------------------------------------------------+\n");

    return 0;
}

void welcome(void) {
    printf("+----------------------------------------------------------+\n");
    printf("+                         WELCOME                          +\n");
    printf("+----------------------------------------------------------+\n");
}

void arr_zeroer(int array[]) {
    for(int i = 0; i < SZ; i++) {
        array[i] = 0;
    }
}

void arr_loader(int array[]) {
    printf("+ ");
    for(int i = 0; i < SZ; i++) {
        array[i] = rand() % (MAX - MIN + 1) + MIN;
        printf("%d, ", array[i]);
    }
    printf("\n");
}

int input(void) {
    int input_number = 0;

    printf("+ Please, enter a number between one and twenty: ");
    do {
        scanf("%d", &input_number);
        if(input_number < 1 || input_number > 20) {
            printf("+\tERROR: Invalid Input\n+\n+ Please, enter a valid number: ");
        }
    } while(input_number < 1 || input_number > 20);

    return input_number;
}

int counter(int array[], int input) {
    int count = 0;

    for(int i = 0; i < SZ; i++) {
        if(array[i] + array[i+1] == input) {
            count++;
        }
    }

    return count;
}

/*------------------------------------------------------------------------------------------------------------
MAN (Ita Lang.)
--------------------------------------------------------------------------------------------------------------
Questo programma in C genera casualmente un array di 10 numeri compresi tra 1 e 10, quindi chiede all'utente 
di inserire un numero compreso tra 1 e 20. 

Dopo aver ricevuto l'input, conta quante volte il numero inserito dall'utente compare nell'array come la 
somma di due numeri consecutivi nell'array. Alla fine, stampa il numero inserito dall'utente e quante volte 
compare nella somma degli elementi consecutivi dell'array generato casualmente.

Ecco una spiegazione più dettagliata delle funzioni:

- La funzione `welcome` stampa un messaggio di benvenuto.
- La funzione `arr_zeroer` imposta tutti gli elementi dell'array a 0.
- La funzione `arr_loader` genera casualmente un array di numeri compresi tra 1 e 10 e lo stampa a schermo.
- La funzione `input` richiede all'utente di inserire un numero compreso tra 1 e 20, e ripete la richiesta 
  finché l'input non è corretto.
- La funzione `counter` conta quante volte il numero inserito dall'utente compare come somma di due numeri 
  consecutivi nell'array.

Infine, il programma stampa il numero inserito dall'utente e quante volte compare nella somma degli elementi 
consecutivi dell'array.
------------------------------------------------------------------------------------------------------------*/