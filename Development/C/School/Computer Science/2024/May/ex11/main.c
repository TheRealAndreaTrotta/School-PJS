#include "mylib.c"

int main(void) {
    srand(time(NULL));

    int rows = input("Please, enter the rows value: ") + 1;
    int cols = input("Please, enter the colums value: " + 1);

    int matrix[rows][cols];

    fmatrix(rows, cols, matrix); pmatrix(rows, cols, matrix);

    smatrix(rows, cols, matrix); pmatrix(rows, cols, matrix);

    return 0;
}