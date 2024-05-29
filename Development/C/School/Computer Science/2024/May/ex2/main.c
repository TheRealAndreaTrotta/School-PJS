/*
Determinare il prodotto di due matrici in una terza, seguendo la struttura posizionale dei due fattori
*/

#include <stdio.h>
#include "mylib.c"

#define SZ 3

int main(void){
    srand(time(NULL));

    int matrix_0[SZ][SZ];
    int matrix_1[SZ][SZ];

    fill_matrix(SZ, matrix_0);
    print_matrix(SZ, matrix_0);
    
    puts("");
    
    fill_matrix(SZ, matrix_1);
    print_matrix(SZ, matrix_1);

    int product_mats[SZ][SZ];

    puts("");

    product_of_matris(SZ, matrix_0, matrix_1, product_mats);
    print_matrix(SZ, product_mats);

    return 0;
}