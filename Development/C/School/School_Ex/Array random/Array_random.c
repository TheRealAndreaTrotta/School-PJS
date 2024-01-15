#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define sz 50
#define MAX 100
#define MIN 1

void welcome(void){
    printf("+----------------------------------+\n");
    printf("+              WELCOME             +\n");
    printf("+----------------------------------+\n");
}

int main(void){
    srand(time(NULL));

    int numbers[sz];
    int input;
    int counter = 0;
    int max = MAX, min = MIN;

    for(int i=0; i<sz; i++){
        numbers[i] = rand()%(max-min+1)+min;
    }

    printf("Please, enter a number: ");
    scanf("%d", &input);

    for(int i=0; i<sz; i++){
        printf("%d, ", numbers[i]);
        if(numbers[i] == input){
            counter ++;
        }
    }

    if(counter > 0){
        printf("\nThe element is present in the array %d times\n", counter);
    }   else {
            printf("The element is not present in the array\n");
        }

    return 0;
}