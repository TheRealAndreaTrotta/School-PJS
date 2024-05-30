#include "mylib.c"

int main(void) {
    srand(time(NULL));  

    int rows = input("Please, enter the number of rows: ");
    int cols = input("Please, enter the number of columns: ");

    char (*matrix)[cols] = malloc(rows * sizeof(*matrix));

    if (matrix == NULL) {
        fprintf(stderr, "ERROR: Allocation\n");
        return 1;
    }

    fmatrix(rows, cols, matrix); pmatrix(rows, cols, matrix);

    free(matrix);

    return 0;
}