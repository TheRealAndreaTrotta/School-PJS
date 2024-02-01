#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SZ 10
#define MIN 1
#define MAX 100

void welcome(void){
    printf("+--------------------------------------------------------+\n");
    printf("+                          WELCOME                       +\n");
    printf("+--------------------------------------------------------+\n");
}

void rand_arr(int array[SZ]) {
    srand(time(NULL));

    printf("+ Array:\n+ ");
    for (int i = 0; i < SZ; i++) { 
        array[i] = rand() % (MAX - MIN + 1) + MIN; 
        printf("%d, ", array[i]);
    }

    printf("\n"); 
}

void print_arr(int array[], int size){
    printf("+ ");
    for(int i = 0; i < size; i++){
        printf("%d, ", array[i]); 
    }
    printf("\n");
}

int main(void) {
    welcome();

    int numbers[SZ], greater[SZ], lesser[SZ];

    int input = 0;
    int k = 0, j = 0;

    rand_arr(numbers);
    
    do{
        printf("+\n+ Please, enter number: ");
        scanf("%d", &input);
    }while(input < MIN || input > MAX);
    
    printf("+\n");

    for(int i = 0; i < SZ; i++){
        if(numbers[i] > input){
            greater[k] = numbers[i];
            k++;
        }
        else{
            lesser[j] = numbers[i];
            j++;
        }
    }
    
    printf("+ Greater numbers:\n");
    print_arr(greater, k);

    printf("+\n");

    printf("+ Lesser numbers:\n");
    print_arr(lesser, j);

    printf("+--------------------------------------------------------+\n");

    return 0;
}
