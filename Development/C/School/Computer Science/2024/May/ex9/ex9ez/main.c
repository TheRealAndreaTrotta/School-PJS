#include "mylib.c"

int main(void) {
    srand(time(NULL));  

    int rows = input("Please, enter the number of rows: ");
    int cols = input("Please, enter the number of columns: ");

    char matrix[rows][cols];

    fmatrix(rows, cols, matrix); pmatrix(rows, cols, matrix);

    return 0;
}