#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define sz 7

void welcome(void){
    printf("+--------------------------------------------------------+\n");
    printf("+                         WELCOME!                       +\n");
    printf("+--------------------------------------------------------+\n");
}

int main(void){
    welcome();

    int numbers[8];
    int counter = 0, line = 1;

    for(int i=0; i<=sz; i++){
        printf("+ %d) Please, enter a number: ", line);
        scanf("%d", &numbers[i]);

        line ++;
    }

    for(int i=0; i<sz; i++){
        if(numbers[i] > numbers[sz]){
            counter ++;
        }
    }

    printf("+\n+ There are %d number greater than %d\n", counter, numbers[sz]);
    printf("+--------------------------------------------------------+\n");

    return 0;
}