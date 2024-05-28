#include "mylib.c" // #include "mylib.h"

int main(void) {
    welcome(); srand(time(NULL));

    int X = input("Please, enter the X value: ");
    int Y = input("Please, enter the Y value: "); puts("");

    int matrix_0[X][Y], matrix_1[X][Y], matrix_2[X][Y]; 
    
    fmatrix(X, Y, matrix_0); fmatrix(X, Y, matrix_1);

    pmatrix(X, Y, matrix_0); pmatrix(X, Y, matrix_1); 

    smatrix(X, Y, matrix_0, matrix_1, matrix_2); 

    pmatrix(X, Y, matrix_2);

    endl(); return 0;
}