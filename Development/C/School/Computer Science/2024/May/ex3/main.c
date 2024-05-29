// Diagonale di uno

#include <stdio.h>
#include <stdlib.h>
#include "mylib.c"

#define SZ 9

int main(void) {
    int matrix[SZ][SZ];

    zero_matrix(SZ, matrix);
    print_matrix(SZ, matrix);
    puts("");
    oned_matrix(SZ, matrix);
    print_matrix(SZ, matrix);
    puts("");
    onedd_matrix(SZ, matrix);
    print_matrix(SZ, matrix);

    return 0;
}