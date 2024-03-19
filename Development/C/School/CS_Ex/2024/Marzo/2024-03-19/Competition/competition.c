/*------------------------------------------------------------------------------------------------------------
CONSEGNA
--------------------------------------------------------------------------------------------------------------
In un concorso di intelligenza, N giudici esprimono
un loro giudizio su M candidati, il giudizio è un
valore numerico (compreso fra 0 e 5) inserito in
una matrice di NxM elementi.

                       
Si determini il candidato più intelligente e il giudice
più severo.
------------------------------------------------------------------------------------------------------------*/

// LIBRARY
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// MACROS
#define ROWS 3
#define COLUMN 3

#define MIN 0
#define MAX 5

// FUNCTIONS
void marks(int matrix[][COLUMN]);

// PROGRAM
int main(void){
    srand(time(NULL));

    int matrix[ROWS][COLUMN];
    marks(matrix);

    return 0;
}

void marks(int matrix[][COLUMN]){
    int sum = 0, pivout = 0, sever = 0;
    for(int i=0; i<ROWS; i++){
        for(int j=0; j<COLUMN; j++){
            matrix[i][j] = rand() % (MAX - MIN + 1) - MIN; 
            printf("%d  ", matrix[i][j]);
        }
        puts("");
    }
}