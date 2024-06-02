#include "mylib.c"

int main(void) {
    srand(time(NULL));
    
    int numbers[SZ];

    puts("First array:");
    farray(numbers); parray(numbers);

    int x = input("Please, enter the first number: "); 
    int y = input("Please, enter the second number: "); 

    puts("Second array:");
    sos(numbers, x, y); parray(numbers);

    return 0;
}

/*una funzione che dato un array di 10 elementi e 2 parametri
vada a verificare se il primo dei due è presente nell'array
se c'è, sostituirlo con il secondo elemento*/