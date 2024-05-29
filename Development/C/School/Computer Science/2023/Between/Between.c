#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SZ 20 
#define MIN 1
#define MAX 100

void welcome(void){
    printf("+--------------------------------------------------------+\n");
    printf("+                WELCOME TO THE DICE HOUSE!              +\n");
    printf("+--------------------------------------------------------+\n");
}

void rand_arr(int array[SZ]) {
    srand(time(NULL));
    int max = MAX, min = MIN;

    printf("+ Array:\n+ ");
    for (int i = 0; i < SZ; i++) { 
        array[i] = rand() % (max - min + 1) + min; 
        //printf("%d, ", array[i]);
    }
    printf("\n"); 
}

int main(void) {
    welcome();

    int numbers[SZ];

    int counter = 0;
    int input1 = 0, input2 = 0;

    rand_arr(numbers);

    printf("+ Please, enter the first and the second number: ");
    scanf("%d %d", &input1, &input2); 

    for (int i = 0; i < SZ; i++) { 
        if ((numbers[i] > input1) && (numbers[i] < input2)) {
            counter++;
        }
    }

    printf("+ There are %d numbers between %d and %d\n", counter, input1, input2); 
    printf("+--------------------------------------------------------+\n");

    return 0;
}
