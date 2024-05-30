#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int input(const char* promt) {
    int value;

    printf("%s", promt); scanf("%d", &value);

    return value;
}

void fmatrix(int R, int C, int matrix[][C]) {
    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            matrix[i][j] = 1 + rand() % 9;
        }
    }
}

void pmatrix(int R, int C, int matrix[][C]) {
    puts("");

    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            if(matrix[i][j] < 10) {
                printf("0%d ", matrix[i][j]);
            }
            else {
                printf("%d ", matrix[i][j]);
            }
        }
        puts("");
    }
    puts("");
}

void smatrix(int R, int C, int matrix[][C]) {
    int sum = 0, j;

    for(int i = 0; i < R; i++) {
        for(j = 0; j < C; j++) {
            sum += matrix[i][j];
        }
        matrix[R][j] = sum;
        sum = 0;
    }
    
    for(int i = 0; i < R; i++) {
        for(j = 0; j < C; j++) {
            sum += matrix[i][j];
        }
        matrix[i][C] = sum;
        sum = 0;
    }
}