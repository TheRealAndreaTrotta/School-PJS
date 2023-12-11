#include <stdio.h>

void welcome(void){
    printf("+-------------------------------------------------------------------------------------------+\n");
    printf("+                              WELCOME TO THIS AMAZING PROGRAM                              +\n");
    printf("+-------------------------------------------------------------------------------------------+\n");
}

int main(void){
    welcome();

    int input = 0;

    //continua il ciclo fino all'inserimento di un numero naturale positivo.
    do{
        printf("+ Please, enter number: ");
        scanf("%d", &input);
    }while(input < 0);

    printf("+ ");

    //stampa i prodotti da 0 a 10 dell'input.
    for(int i=0; i<=10; i++){
        printf("%d, ",input*i);
    }
    
    printf("\n");
    printf("+-------------------------------------------------------------------------------------------+\n");

    return 0;
}