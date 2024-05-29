/*------------------------------------------------------------------------------------------------------------
CONSEGNA
--------------------------------------------------------------------------------------------------------------
Data una matrice n*m, rimpire la locazione con n+m
------------------------------------------------------------------------------------------------------------*/

// LIBRARY
#include <stdio.h>

// MACROS
#define ROWS 3
#define COLUMN 3

#define MAX 9
#define MIN 1

// FUNCTIONS
void sum_position(int matrix[][COLUMN]);

// PROGRAM
int main(void){
    int matrix[ROWS][COLUMN];
    sum_position(matrix);

    return 0;
}

void sum_position(int matrix[][COLUMN]){
    for(int i=0; i<ROWS; i++){
        for(int j=0; j<COLUMN; j++){
            matrix[i][j] = i+j;
            printf("%d  ", matrix[i][j]);
        }
        puts("");
    }
}