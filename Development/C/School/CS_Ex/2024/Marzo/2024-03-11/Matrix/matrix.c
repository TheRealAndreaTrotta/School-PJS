#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define rows 4
#define columns 3

#define MAX 9
#define MIN 1

void random_matx(int matrix[rows][columns]);
void sum_matx(int matrix_0[rows][columns], int matrix_1[rows][columns]);

int main(void) {
    srand(time(NULL));

    int matrix_0[rows][columns];
    int matrix_1[rows][columns];

    puts("Matrix 1:");
    random_matx(matrix_0);

    puts("");

    puts("Matrix 2:");
    random_matx(matrix_1);

    puts("Matrix 3:");
    sum_matx(matrix_0, matrix_1);

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

void sum_matx(int matrix_0[rows][columns], int matrix_1[rows][columns]){
    int matrix[rows][columns];

    for (int i = 0; i < rows; i++) {
        printf("\t");
        for (int j = 0; j < columns; j++) {
            matrix[i][j] = matrix_0[i][j] + matrix_1[i][j];
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}
