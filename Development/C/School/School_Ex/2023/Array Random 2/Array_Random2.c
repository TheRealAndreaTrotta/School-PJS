#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SZ 10
#define MIN 1
#define MAX 20

void welcome(void){
    printf("+--------------------------------------------------------+\n");
    printf("+                          WELCOME                       +\n");
    printf("+--------------------------------------------------------+\n");
}

void rand_arr(int array[SZ]) {
    srand(time(NULL));

    int max = MAX, min = MIN;
    int used_numbers[MAX - MIN + 1] = {0}; // Array per tracciare i numeri già utilizzati

    for (int i = 0; i < SZ; i++) { 
        int random_number;
        do {
            random_number = rand() % (max - min + 1) + min;
        } while (used_numbers[random_number - min] == 1);

        array[i] = random_number;
        used_numbers[random_number - min] = 1;

        printf("%d, ", array[i]);
    }

    printf("\n");
}

int main(void) {
    welcome();

    int numbers[SZ];

    rand_arr(numbers);

    printf("+--------------------------------------------------------+\n");

    return 0;
}
