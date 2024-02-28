#include <stdio.h>

#define sz 9

void welcome(void){
    printf("+--------------------------------------------------------+\n");
    printf("+                         WELCOME!                       +\n");
    printf("+--------------------------------------------------------+\n");
}

int main(void){
    welcome();

    int number_below_average = 0, counter = 0, line = 1;

    float numbers[sz];
    float sum = 0, average = 0;

    for(int i=0; i<=sz; i++){
        printf("+ %d) Please, enter a number: ", line);
        scanf("%f", &numbers[i]);

        line ++;
    }

    for(int i=0; i<=sz; i++){
        sum += numbers[i];
        counter++;
    }

    average = sum/counter;

    for(int i=0; i<=sz; i++){
        if(numbers[i]<average){
            number_below_average++;
        }
    }

    printf("+\n+ The average is: %2.f\n", average);
    printf("+ There are %d numbers below the average.\n", number_below_average);
    printf("+--------------------------------------------------------+\n");

    return 0;
}