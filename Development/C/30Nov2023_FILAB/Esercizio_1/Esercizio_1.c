/*
Nome: Ussato Andrea.
Classe: 3^C Informatica.
Data: 30 Novembre 2023

Esercizio 1:
Inserire una serie di numeri interi e sommarli. Interrompere l’immissione al
quinto numero multiplo di 3 e visualizzare quindi in output la somma
ottenuta.
*/

#include <stdio.h>

void welcome(void){
    printf("+-------------------------------------------------------------------------------------------+\n");
    printf("+                                   BENVENUTO IN ESERCIZIO 1!                               +\n");
    printf("+-------------------------------------------------------------------------------------------+\n");
}

int main(void){
    int input = 0, flag = 0, counter = 0, somma = 0;

    welcome();

    do{
        //Fase di input.
        printf("+ Prego, inserisca un numero: ");
        scanf("%d", &input);

        //Verifico che l'input sia multiplo di 3 e diverso da 0.
        if((input % 3 == 0)&&(input != 0)){  
            /*Dopo il precedente controllo, incremento la variabile counter 
            per tener conto di quanti numeri multipli di 3 sono stati inseriti.*/
            counter++;      

            //verifico se il counter ha raggiunto il limite richiesto.
            if(counter == 5){
                //incremento la flag per uscire dal ciclo.
                flag++;
            }
        }

        if(input > 0){
            somma += input;
        }

    /*Continua fino a quando la variabile flag e' diversa da 1 oppure (or) se l'input 
    è minore o uguale a zero.*/
    }while((flag != 1)||(input <= 0)); 

    printf("+\n+ La somma dei numeri inseriti risulta: %d", somma);
    printf("\n+-------------------------------------------------------------------------------------------+\n");

    return 0;
}