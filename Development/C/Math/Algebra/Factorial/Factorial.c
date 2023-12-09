// calcolare il fattoriale di un numero
#include <stdio.h>

int main(void){
    int factorial = 1, input = 0;

    printf("Please, enter the number to calculate: ");
    scanf("%d", &input);

    for(int i=input; i!=0; i--){
        factorial *= i;
    }
   
    printf("The factorial of %d result:\t%d\n\n",input, factorial);

    return 0;   
}


