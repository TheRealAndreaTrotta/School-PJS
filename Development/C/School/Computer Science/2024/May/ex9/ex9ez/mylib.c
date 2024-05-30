#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int input(const char* prompt) {
    int value;

    printf("%s", prompt); scanf("%d", &value);

    return value;
}

void fmatrix(int R, int C, char matrix[][C]) {
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            matrix[i][j] = 'A' + rand() % 26;
        }
    }
}

void pmatrix(int R, int C, char matrix[][C]) {
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            printf("%c ", matrix[i][j]);
        }
        puts("");
    }
    puts("");
}
