/*------------------------------------------------------------------------------------------------------------
CONSEGNA
--------------------------------------------------------------------------------------------------------------
Data una matrice 9×9 verificare se la somma delle celle delle due diagonali è uguale.
------------------------------------------------------------------------------------------------------------*/

// LIBRARY
#include <stdio.h>

// MACROS
#define rows 9
#define column 9

// GRAPHIC FUNCTIONS
void welcome(void);
void endl(void);

// FUNCTION
void fill_diagonal(int matrix[][column]);

int main(void){
    welcome();

    int matrix[rows][column];
    fill_diagonal(matrix);

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

void fill_diagonal(int matrix[][column]){
    for(int i=0; i<column; i++){
        printf("+ ");
        for(int j=0; j<rows; j++){
            if(j==i){
                matrix[i][j] = 1;
                printf("\033[1;31m%d  \033[0m", matrix[i][j]);
            }
            else{
                matrix[i][j] = 0;
                printf("%d  ", matrix[i][j]);
            }
        }
        puts("");
    }
}