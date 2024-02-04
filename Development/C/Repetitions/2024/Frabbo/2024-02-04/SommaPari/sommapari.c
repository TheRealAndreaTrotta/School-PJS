// 4 sommapari(int n) --> ritorna la somma dei numeri pari fra 2 e n

#include <stdio.h>

void welcome(void);
void tabs(int number);

int main(void){
    welcome();

    int number = 0;

    printf("+ Please, enter a number: ");
    scanf("%d", &number);

    tabs(number);

    printf("\n+------------------------------------------------------------------+\n");

    return 0;
}

//Graphic
void welcome(void){
    printf("+------------------------------------------------------------------+\n");
    printf("+                           WELCOME                                +\n");
    printf("+------------------------------------------------------------------+\n");
}

// Function for print tabs
void tabs(int number){
    int sum = 0;

    for(int i=2; i<=number; i+=2){
        sum += i;
    }

    printf("+ Sum = %d", sum);
}