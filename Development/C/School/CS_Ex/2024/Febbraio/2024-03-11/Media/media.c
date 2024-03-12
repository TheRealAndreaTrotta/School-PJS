//incompleto

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define rows 4
#define columns 3

#define MAX 9
#define MIN 1

void random_matx(int matrix[rows][columns]);
void average_matx(int matrix[rows][columns]);

int main(void) {
    srand(time(NULL));

    int matrix[rows][columns];

    puts("Matrix:");
    random_matx(matrix);

    puts("");

    puts("Matrix with average:");
    average_matx(matrix);

    return 0;
}

void random_matx(int matrix[rows][columns]){
    for (int i = 0; i < rows; i++){
        printf("\t");
        for (int j = 0; j < columns; j++){
            matrix[i][j] = rand() % (MAX - MIN + 1) + MIN;
            printf("%d  ", matrix[i][j]);
        }
        printf("\n");
    }
}

void average_matx(int matrix[rows][columns]){
    int sum_row = 0, sum_col = 0;
    int i = 0, j = 0;

    for (i = 0; i < rows; i++) {
        printf("\t");
        sum_col += matrix[i][j];

        for (j = 0; j < columns; j++) {
            printf("%d\t", matrix[i][j]);
            sum_row += matrix[i][j];
        }
        matrix[i][j] = sum_row/j;
        sum_row = 0;
        printf("m%d\t", matrix[i][j]);
        printf("\n");
    }
}