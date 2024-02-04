//1 boolean divisore (int a, int b) --> ritorna vero se b e' divisore di a

#include <stdio.h>

void welcome(void);
void maybe_div(int a, int b);

int main(void){
    welcome();

    int number = 0, divisor = 0;

    printf("+ Please, enter a number: ");
    scanf("%d", &number);

    printf("+ Please, enter the divisor: ");
    scanf("%d", &divisor);

    maybe_div(number, divisor);

    printf("\n+------------------------------------------------------------------+\n");

    return 0;
}

//Graphic
void welcome(void){
    printf("+------------------------------------------------------------------+\n");
    printf("+                         IS A DIVISOR?                            +\n");
    printf("+------------------------------------------------------------------+\n");
}

//Boolean function
void maybe_div(int a, int b){
    if(a%b==0){
        printf("+ Yes it is");
    }
    else{
        printf("+ No is not");
    }
}