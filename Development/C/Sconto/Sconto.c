//input infinito se il numero è negativo
//calcolare il 20% di del numero inserito
//usare il while

#include <stdio.h>

void welcome(void){
    printf("+-------------------------------------------------------------------------------------------+\n");
    printf("+                                   VENGHINO DONNE, VENGHINO                                +\n");
    printf("+-------------------------------------------------------------------------------------------+\n");
}

int main(void){
    float input = 0, sconto = 0;

    welcome();

    do{
        printf("+ Prego, inserisca il numero che desidera calcolare: ");
        scanf("%f", &input);
    }while(input <= 0);

    sconto = (input * 20) / 100;
    input -= sconto;

    printf("+ Il totale da pagare e' di:\t%.2f\n", input);
    printf("+-------------------------------------------------------------------------------------------+\n");
    return 0;
}