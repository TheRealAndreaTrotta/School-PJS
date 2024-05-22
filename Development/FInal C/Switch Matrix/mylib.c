#include <time.h>
#include <stdlib.h>

#define COLS 4 
#define MIN 1
#define MAX 9

void rand_matrix(int matrix[][COLS], int raws, int cols) {
    for (int i = 0; i < raws; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = rand() % (MAX - MIN + 1) + MIN;
        }
    }
}

void print_matrix(int matrix[][COLS], int raws, int cols) {
    for (int i = 0; i < raws; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        puts("");
    }
}

void switch_matrix(int matrix_0[][COLS], int matrix_1[][COLS], int raws, int cols, int urs_choice) {
    int temp = 0;

    for (int i = 0; i <= urs_choice && i < raws; i++) {
        for (int j = 0; j <= urs_choice; j++) {
            temp = matrix_0[i][j];
            matrix_0[i][j] = matrix_1[i][j];
            matrix_1[i][j] = temp;
        }
    }
}

void welcome(void){
    puts("+------------------------------------------------------------------------+");
    puts("+                     WELCOME TO SWITCH MATRIX ROWS                      +");
    puts("+------------------------------------------------------------------------+");
}

void endl(void){
    puts("+------------------------------------------------------------------------+");
}