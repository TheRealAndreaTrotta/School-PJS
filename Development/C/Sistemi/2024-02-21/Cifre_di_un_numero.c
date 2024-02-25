/*------------------------------------------------------------------------------------------------------------
CONSEGNA
--------------------------------------------------------------------------------------------------------------
Implementare un programma in linguaggio C che dato un numero in input, stampa le cifre costituenti una per riga 
(tramite la funzione putchar()) in ordine dalla più significativa alla meno significativa. Per la risoluzione 
non è consentito il ricorso agli array.

Ad esempio:

12345

1

2

3

4

5
------------------------------------------------------------------------------------------------------------*/

// LIBRARY 
#include <stdio.h>

// GRAPHICS FUNCTIONS
void welcome(void);
void endl(void);

// FUNCTIONS
int digits(int number);
void print_digits(int digits, int number);

int main(void) {
    welcome();

    int number;

    printf("+ Please enter number: ");
    scanf("%d", &number);
    
    puts("+ The digits of the number are:");
    
    int count = digits(number);
    
    print_digits(count, number); 
    
    endl();
    return 0;
}

void welcome(void){
    puts("+--------------------------------------------------------------------+");
    puts("+                             WELCOME!                               +");
    puts("+--------------------------------------------------------------------+");
}

void endl(void){
    puts("+--------------------------------------------------------------------+");
}

int digits(int number){
    // Trova il numero di cifre nel numero inserito
    int digits = 0;
    int temp = number;

    while(temp != 0){
        digits++;
        temp /= 10;
    }

    return digits;
}

void print_digits(int digits, int number){
        // Esegui il ciclo per estrarre e stampare ogni cifra, partendo dalla più significativa
    while (digits > 0) {
        // Calcola la potenza di 10 per estrarre la cifra corrente
        int pow = 1;

        for (int i = 1; i < digits; i++) {
            pow *= 10;
        }
        
        // Estrae la cifra corrente
        int curr_digit = number / pow;
        
        // Stampa la cifra corrente
        putchar(curr_digit + '0');
        putchar('\n');
        
        // Aggiorna il numero rimuovendo la cifra corrente
        number %= pow;
        
        // Riduci il conteggio delle cifre
        digits--;
    }
}