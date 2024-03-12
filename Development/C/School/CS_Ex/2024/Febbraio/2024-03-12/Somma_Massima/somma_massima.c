/*------------------------------------------------------------------------------------------------------------
CONSEGNA
--------------------------------------------------------------------------------------------------------------
Data una matrice 4×4 di interi generati casualmente trovare la riga o la colonna con somma più alta.
Stampare di che riga o colonna si tratta e qual è il valore.
------------------------------------------------------------------------------------------------------------*/

// LIBRARY
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// MACROS
#define rows 4
#define columns 4

#define MAX 9
#define MIN 1

// GRAPHIC FUNCTIONS
void welcome(void);
void endl(void);

// FUNCTION
void random_matx(int matrix[][columns]);
void checksum_matx(int matrix[][columns]);

int main(void){
    srand(time(NULL));
    welcome();

    int matrix[rows][columns];

    random_matx(matrix);
    checksum_matx(matrix);

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

void random_matx(int matrix[][columns]){
    for (int i = 0; i < rows; i++){
        //printf("+ ");
        for (int j = 0; j < columns; j++){
            matrix[i][j] = rand() % (MAX - MIN + 1) + MIN;
            //printf("%d  ", matrix[i][j]);
        }
        //printf("\n");
    }
}

void checksum_matx(int matrix[][columns]){
    int sum;
    int row_position = 0, col_position = 0;
    int greatest_sum_row = 0, greatest_sum_col = 0;

    for (int i = 0; i < rows; i++){
        sum = 0;
        printf("+ ");

        for (int j = 0; j < columns; j++){
            sum += matrix[i][j];
            printf("0%d  ", matrix[i][j]);
        }

        printf("%d\n", sum);

        if (greatest_sum_row < sum){
            greatest_sum_row = sum;
            row_position = i+1;
        }
    }

    printf("+ ");

    for (int j = 0; j < columns; j++) {
        sum = 0;
        
        for (int i = 0; i < rows; i++) {
            sum += matrix[i][j];
        }

        printf("%d  ", sum);

        if (greatest_sum_col < sum) {
            greatest_sum_col = sum;
            col_position = j+1;
        }
    }

    if(greatest_sum_col < greatest_sum_row){
        printf("\n+ \n+ The greatest sum equal: %d | \033[1;31m row position: %d\033[0m", greatest_sum_row, row_position);
    }
    else{
        printf("\n+ \n+ The greatest sum equal: %d | \033[1;31m column position: %d\033[0m", greatest_sum_col, col_position);
    }    
}