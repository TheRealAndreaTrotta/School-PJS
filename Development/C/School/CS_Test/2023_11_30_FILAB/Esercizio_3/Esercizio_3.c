/*
Nome: Ussato Andrea.
Classe: 3^C Informatica.
Data: 30 Novembre 2023

Esercizio 3:
Realizzare un programma che letta una sequenza di numeri interi
positivi e negativi visualizza la media degli interi positivi. Il programma
termina con l’inserimento del valore 0.
*/

#include <stdio.h>

void welcome(void){
    printf("+-------------------------------------------------------------------------------------------+\n");
    printf("+                                   BENVENUTO IN ESERCIZIO 3!                               +\n");
    printf("+-------------------------------------------------------------------------------------------+\n");
}

int main(void){
    int input = 0, counter = 0, media = 0, somma = 0; 

    welcome();

    do{
        //Fase di input.
        printf("+ Prego, inserisca un numero: ");
        scanf("%d", &input);
        
        if(input > 0){
            somma += input;
            counter++;
        }

    //Continua fino a quando l'utente non digita zero.
    }while(input != 0);

    media = somma / counter;

    printf("+\n+ La media dei numeri interi inseriti risulta: %d", media);
    printf("\n+-------------------------------------------------------------------------------------------+\n");

    return 0;
}