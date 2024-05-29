#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define sz 9
#define MAX 100
#define MIN 1

void welcome(void){
    printf("+--------------------------------------------------------+\n");
    printf("+                         WELCOME!                       +\n");
    printf("+--------------------------------------------------------+\n");
}

void rand_arr(int array[], int min, int max){
    for(int i=0; i<=sz; i++){
        array[i] = rand()%(max-min+1)-min;
    }
}

void print_arr(int array[]){
    for(int i=0; i<=sz; i++){
        printf("%d, ", array[i]);
    }
}

void sort_arr(int array[]) {
    int pivout = 0;

    for (int i=0; i<sz; i++) {
        for (int j=0; j<sz-i; j++) {
            if (array[j] > array[j+1]) {
                //Swap numbers[j] and numbers[j+1].
                pivout = array[j];
                array[j] = array[j+1];
                array[j+1] = pivout;
            }
        }
    }
}

int main(void){
    welcome();

    int numbers[sz];

    int min = MIN, max = MAX;
    int greater = 0, lesser = 0;

    printf("+ ");

    rand_arr(numbers, min, max);
    print_arr(numbers);

    printf("\n+ ");

    sort_arr(numbers);
    print_arr(numbers);

    printf("\n+--------------------------------------------------------+\n");

    return 0;
}