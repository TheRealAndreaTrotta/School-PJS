/*
Nome: Ussato Andrea.
Classe: 3^C Informatica.
Data: 30 Novembre 2023

Esercizio 2:
Leggere una serie di numeri interi passati dall’utente, fermandosi al primo
numero che rende la serie non crescente e restituendo quanti numeri erano
stati inseriti.
*/

#include <stdio.h>

void welcome(void){
    printf("+-------------------------------------------------------------------------------------------+\n");
    printf("+                                   BENVENUTO IN ESERCIZIO 2!                               +\n");
    printf("+-------------------------------------------------------------------------------------------+\n");
}

int main(void){
    int input = 0, counter = 0, pivot = 0, FD = 0; //FD = Flag Decrescente

    welcome();

    do{
        //Fase di input.
        printf("+ Prego, inserisca un numero: ");
        scanf("%d", &input);
        
        counter++;

        //Attivo la FlagD se l'input risulta essere minore della variabile di appoggio.
        if(pivot > input){
            FD++;
        }

        //Assegno alla variabile di appoggio l'input inserito dall'utente per un futuro controllo.
        pivot = input;

    //Continua fino a quando la variabile flag e' diversa da 1.
    }while(FD != 1);

    printf("+\n+ Ha inserito in input %d numeri", counter);
    printf("\n+-------------------------------------------------------------------------------------------+\n");

    return 0;
}