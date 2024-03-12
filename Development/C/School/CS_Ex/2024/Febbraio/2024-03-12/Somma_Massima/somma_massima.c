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
void col_checksum(int matrix[][columns]);

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
    puts("+--------------------------------------------------------------------+");
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
    int sum = 0, greater = 0;
    int i = 0, j = 0;

    for (i = 0; i < rows; i++){
        printf("+ ");

        for (j = 0; j < columns; j++){
            sum += matrix[i][j];
            printf("%d  ", matrix[i][j]);

            if(j==columns-1){
                if(greater < sum){
                    greater = sum;
                }

                matrix[rows][columns] = sum;
                printf("s%d  ", matrix[rows][columns]);
            }
        }
        greater == sum;
        sum = 0;

        puts("");
    }
    printf("+ GR: %d\n", greater);
}

void col_checksum(int matrix[][columns]){
    int sum = 0;
    int i = 0; j = 0;

    for(i=0; i<rows; i++){
        for(j=0; j<columns-i; j++){
            sum += matrix[i][j];
        }
    }
}