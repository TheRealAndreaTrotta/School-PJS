//dati due numeri in input stampare con un ciclo for tutti i numeri pari compresi 
//tra i due numeri.

#include <stdio.h>

void welcome(void){
    printf("+-------------------------------------------------------------------------------------------+\n");
    printf("+                              WELCOME TO THIS AMAZING PROGRAM                              +\n");
    printf("+-------------------------------------------------------------------------------------------+\n");
}

int main(void){
    welcome();

    int input1 = 0, input2 = 0;

    //continua il ciclo fino all'inserimento di un numero naturale positivo.
    do{
        printf("+ Please, enter number: ");
        scanf("%d, %d", &input1, &input2);
    }while(input1 < 0);

    printf("+ ");

    //stampa i prodotti da 0 a 10 dell'input.
    for(int i=input1; i<=input2; i++){
        if (i%2==0){
            printf("%d, ",i);
        }
    }
    
    printf("\n");
    
    return 0;
}