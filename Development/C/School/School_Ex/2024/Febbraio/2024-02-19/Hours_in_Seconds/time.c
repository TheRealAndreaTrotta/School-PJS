/*------------------------------------------------------------------------------------------------------------
CONSEGNA
--------------------------------------------------------------------------------------------------------------
Dati due orari nel formato ore, minuti e secondi, calcolare la differenza in secondi tra esse. Utilizzare 
le funzioni.
------------------------------------------------------------------------------------------------------------*/

// LIBRARY
#include <stdio.h>
#include <stdlib.h>

// GRAPHIC FUNCTIONS
void welcome(void);
void Endl(void);

// MATH FUNCTIONS
int time_in_seconds(int hours, int minuts, int seconds);
int difference(int hours, int minuts, int seconds, int hours_1, int minuts_1, int seconds_1);

// PROGRAM
int main(void){
    welcome();

    int hours, minuts, seconds;
    int hours_1, minuts_1, seconds_1;
    
    // Input dei due orari
    printf("+ Enter the first time [HH-MM-SS]: ");
    scanf("%d %d %d", &hours, &minuts, &seconds);
    
    printf("+ Enter the second time [HH-MM-SS]: ");
    scanf("%d %d %d", &hours_1, &minuts_1, &seconds_1);

    // Calcolo della differenza tra i due orari
    int dif = difference(hours, minuts, seconds, hours_1, minuts_1, seconds_1);
    
    // Output della differenza in secondi
    printf("+ The difference between the two times is %d seconds.\n", dif);

    Endl();
    return 0;
}

void welcome(void) {
    printf("+----------------------------------------------------------+\n");
    printf("+                         WELCOME                          +\n");
    printf("+----------------------------------------------------------+\n");
}

void Endl(void){
    printf("+----------------------------------------------------------+\n");
}

// Funzione per convertire l'orario in secondi
int time_in_seconds(int hours, int minuts, int seconds) {
    return (hours * 3600) + (minuts * 60) + (seconds);
}

// Funzione per calcolare la differenza tra due orari in secondi
int difference(int hours, int minuts, int seconds, int hours_1, int minuts_1, int seconds_1) {
    int time = time_in_seconds(hours, minuts, seconds);
    int time1 = time_in_seconds(hours_1, minuts_1, seconds_1);
    return abs(time - time1);
}