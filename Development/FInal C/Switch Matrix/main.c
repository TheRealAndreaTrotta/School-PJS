// date due matrici, l'utente sceglie quali righe scambiare delle due
#include <stdio.h>
#include "mylib.c"

#define raws 4
#define collum 4

int main(void){
    srand(time(NULL));

    welcome();

    int matrix_0[raws][collum], matrix_1[raws][collum];
    
    rand_matrix(matrix_0, raws, collum);
    print_matrix(matrix_0, raws, collum);

    puts("");

    rand_matrix(matrix_1, raws, collum);
    print_matrix(matrix_1, raws, collum);

    puts("");

    int urs_choice = 0;

    printf("Which row do you want to swap? write a number: ");
    scanf("%d", &urs_choice);

    switch_matrix(matrix_0, matrix_1, raws, collum, urs_choice);
    puts("");
    print_matrix(matrix_0, raws, collum);
    puts("");
    print_matrix(matrix_1, raws, collum);

    endl();
    
    return 0;
}