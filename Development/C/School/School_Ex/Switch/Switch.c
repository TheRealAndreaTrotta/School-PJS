#include <stdio.h>

#define sz 7

void welcome(void){
    printf("+--------------------------------------------------------+\n");
    printf("+                         WELCOME!                       +\n");
    printf("+--------------------------------------------------------+\n");
}

int main(void){
    welcome();

    int numbers[8];
    int pivout = 0, line = 1;

    for(int i=0; i<=sz; i++){
        printf("+ %d) Please, enter a number: ", line);
        scanf("%d", &numbers[i]);

        line ++;
    }

    if(numbers[0] > numbers[sz]){
        pivout = numbers[0];
        numbers[0] = numbers[sz];
        numbers[sz] = pivout;
    }

    for(int i=1; i<sz; i++){
        numbers[i] = 0;
    }

    printf("+\n+ ");

    for(int i=0; i<=sz; i++){
        printf("%d, ", numbers[i]);
    }

    printf("+--------------------------------------------------------+\n");

    return 0;
}