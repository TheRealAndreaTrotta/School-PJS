#include "mylib.c"

int main(void) {
    srand(time(NULL));

    int numbers[SZ];

    puts("Array:"); farray(numbers); parray(numbers);

    return 0;
} 