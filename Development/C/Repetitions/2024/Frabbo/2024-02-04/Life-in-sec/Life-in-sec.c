//6 int secondi(int anni) --> ritorna il numero di secondi di vita se anni==eta'
#include <stdio.h>

void welcome(void);
int sec_calculator(int years);

int main(void) {
    welcome();

    int years;

    printf("+ Please, enter a year: ");
    scanf("%d", &years);

    printf("+ There are %d in %d years!", sec_calculator(years), years);
    printf("\n+------------------------------------------------------------------+\n");

    return 0;
}

// Graphic
void welcome(void) {
    printf("+------------------------------------------------------------------+\n");
    printf("+                           WELCOME                                +\n");
    printf("+------------------------------------------------------------------+\n");
}

// Function to calculate seconds
int sec_calculator(int years) {
    int seconds = 3600*24*365*years;
    return seconds;
}
