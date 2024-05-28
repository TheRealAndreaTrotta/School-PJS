#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MIN 1
#define MAX 9

int input(char string[]) {
    int value;

    printf("%s", string);
    scanf("%d", &value);

    return value;
}

void fmatrix(int R, int C, int matrix[][C]) {
    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            matrix[i][j] = rand() % (MAX - MIN + 1 ) + MIN;
        }
    }
}

void smatrix(int R, int C, int matrix_0[][C], int matrix_1[][C], int matrix_2[][C]) {
    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            matrix_2[i][j] = matrix_0[i][j] + matrix_1[i][j];
        }
    }
}

void pmatrix(int R, int C, int matrix[][C]) {
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

void welcome(void) {
    puts("-----------------------------------------------------------");
    puts("                          WELCOME                          ");
    puts("-----------------------------------------------------------\n");    
}

void endl(void) {
    puts("-----------------------------------------------------------\n");
}