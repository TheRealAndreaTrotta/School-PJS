#include <stdlib.h>
#include <time.h>

#define MIN 1
#define MAX 9

void fill_matrix(int SZ, int matrix[][SZ]) {
    for (int i = 0; i < SZ; i++){
        for (int j = 0; j < SZ; j++) {
            matrix[i][j] = rand() % (MAX - MIN + 1) + MIN;
        }
    }
}

void print_matrix(int SZ, int matrix[][SZ]) {
    for (int i = 0; i < SZ; i++){
        for (int j = 0; j < SZ; j++) {
            printf("%d ", matrix[i][j]);
        }
        puts("");
    }
}

void switch_matrix(int SZ, int matrix[][SZ], int row_0, int row_1) {
    int temp;

    for (int j = 0; j < SZ; j++) {
        temp = matrix[row_0-1][j];
        matrix[row_0-1][j] = matrix[row_1-1][j];
        matrix[row_1-1][j] = temp;
    }
}
