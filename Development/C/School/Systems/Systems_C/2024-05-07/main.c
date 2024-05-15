#include <stdio.h>
#include "mylib.c"

int main(void){
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("The absolute value of %d is %d\n", number, absolute(number));

    return 0;
}