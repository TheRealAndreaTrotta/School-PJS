/*------------------------------------------------------------------------------------------------------------
CONSEGNA
--------------------------------------------------------------------------------------------------------------
Data una matrice 9×9 verificare se la somma delle celle delle due diagonali è uguale.
------------------------------------------------------------------------------------------------------------*/
//ancora non funzionante
// LIBRARY
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// MACROS
#define rows 9
#define column 9

#define MIN 1
#define MAX 9

// GRAPHIC FUNCTIONS
void welcome(void);
void endl(void);

// FUNCTION
int fill_diagonal(int matrix[][column]);

int main(void){
    srand(time(NULL));
    welcome();

    int matrix[rows][column];

    printf("+\n+ Greatest Sum: %d\n", fill_diagonal(matrix));

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

int fill_diagonal(int matrix[][column]){
    int sum = 0, sum_2 = 0, counter = column-1;
    int i, j;

    for(i=0; i<column; i++){
        printf("+ ");
        for(j=0; j<rows; j++){
            matrix[i][j] = rand()%(MAX - MIN + 1) + MIN;

            if(j==i){
                sum += matrix[i][j];
                printf("\033[1;31m%d  \033[0m", matrix[i][j]);
            }
            else if(j==counter){
                counter --;
                sum_2 += matrix[i][j];
                printf("\033[1;31m%d  \033[0m", matrix[i][j]);
            }
            else{
                printf("%d  ", matrix[i][j]);
            }
        }
        puts("");
    }

    for(i=0; i<column; i++){}

    printf("+ First sum: %d\n", sum);
    printf("+ Second sum: %d\n", sum_2);

    int greatest_sum;

    if(sum > sum_2){
        greatest_sum = sum;
    }
    else{
        greatest_sum = sum_2;
    }

    return greatest_sum;
}