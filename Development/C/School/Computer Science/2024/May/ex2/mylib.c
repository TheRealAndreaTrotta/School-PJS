#include <time.h>
#include <stdlib.h>

#define MIN 1
#define MAX 9

void fill_matrix(int SZ, int matrix[][SZ]) {
    for (int i = 0; i < SZ; i++) {
        for (int j = 0; j < SZ; j++) {
            matrix[i][j] = rand() % (MAX - MIN + 1) + MIN;
        }
    }
}

void print_matrix(int SZ, int matrix[][SZ]) {
    for (int i = 0; i < SZ; i++) {
        for (int j = 0; j < SZ; j++){
            if (matrix[i][j] / 10 < 1) {
                printf("0%d ", matrix[i][j]);
            }
            else {
                printf("%d ", matrix[i][j]);
            }
        }
        puts("");
    }
}kilop

void product_of_matris(int SZ, int matrix_0[][SZ], int matrix_1[][SZ], int matrix_3[][SZ]) {
    for (int i = 0; i< SZ; i++) {
        for (int j = 0; j < SZ; j++) {
            matrix_3[i][j] = matrix_0[i][j] * matrix_1[i][j];
        }
    }
}