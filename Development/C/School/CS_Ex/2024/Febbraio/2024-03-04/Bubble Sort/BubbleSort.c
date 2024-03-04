/*------------------------------------------------------------------------------------------------------------
CONSEGNA
--------------------------------------------------------------------------------------------------------------
Scrivi una funzione ordinaArray che accetti un array di interi e la sua lunghezza come parametri, 
e ordini gli elementi dell'array in ordine crescente.
------------------------------------------------------------------------------------------------------------*/

// LIBRARY
#include <stdio.h>

// MACROS
#define SZ 6

// GRAPHIC FUNCTIONS
void welcome(void);
void endl(void);

// INPUT-OUTPUT FUNCTIONS
void arr_inp(int array[], int length);
void arr_out(int array[], int length);

// MATH FUNCTIONS
void arr_sort(int array[], int length);

// PROGRAM
int main(void){
    welcome();

    int array[SZ];

    arr_inp(array, SZ);
    arr_sort(array, SZ);
    arr_out(array, SZ);

    endl();
    return 0;
}

void welcome(void){
    puts("+--------------------------------------------------------------------+");
    puts("+                             WELCOME!                               +");
    puts("+--------------------------------------------------------------------+");
}

void endl(void){
    puts("\n+--------------------------------------------------------------------+");
}

void arr_inp(int array[], int length){
    char *numbers[] = {"first", "second", "third", "fourth", "fifth", "sixth", "seventh", "eighth", "ninth", "tenth"};

    for(int i=0; i<length; i++){
        printf("+ Please, enter the %s number: ", numbers[i]);
        scanf("%d", &array[i]);
    }
}

void arr_out(int array[], int length){
    printf("+ ");
    for(int i=0; i<length; i++){
        printf("%d, ", array[i]);
    }
}

void arr_sort(int array[], int length){
    int temp = 0;

    for(int i=0; i<length; i++){
        for(int j=0; j<length-1-i; j++){
           if(array[j] > array[j+1]){

                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}

/*--------------------------------------------------------------------------------------------------------------
MAN (Ita Lang.)
----------------------------------------------------------------------------------------------------------------
Come funziona?
    - La funzione arr_sort valuta se il numero successivo è maggiore di quello precedente
      tramite un doppio ciclo for. Il primo ciclo, che chiamerò "marcia", e il secondo ciclo 
      eseguono i confronti per verificare la validità delle condizioni. 
      
      Inoltre, vi è un'ottimizzazione --> j<lenght-1-i
      che riduce il numero di confronti non necessari, diminuendo il numero di iterazioni del ciclo 
      esterno di un'unità, quindi è incrementato in ogni iterazione. Questo aiuta a migliorare le 
      prestazioni riducendo il numero complessivo di confronti eseguiti.
--------------------------------------------------------------------------------------------------------------*/