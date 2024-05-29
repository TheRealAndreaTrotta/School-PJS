// scambio di righe 2.0

#include <stdio.h>
#include "mylib.c"

#define SZ 4

int main(void) {
    srand(time(NULL));
    
    int matrix[SZ][SZ];
    int row_0, row_1;

    fill_matrix(SZ, matrix);
    print_matrix(SZ, matrix);
    puts("");

    printf("Please, choose the rows to swap: ");
    scanf("%d, %d", &row_0, &row_1);
    
    switch_matrix(SZ, matrix, row_0, row_1);
    print_matrix(SZ, matrix);
    puts("");

    return 0;
}