// 5 int ncifre(int n) --> ritorna il numero di cifre di n (se n==1234 ritorna 4)

#include <stdio.h>

void welcome(void);
int digits(int n);

int main(void) {
    welcome();

    int number;

    printf("+ Please, enter a number: ");
    scanf("%d", &number);

    printf("+ There are %d digits in this number", digits(number));
    printf("\n+------------------------------------------------------------------+\n");

    return 0;
}

// Graphic
void welcome(void) {
    printf("+------------------------------------------------------------------+\n");
    printf("+                           WELCOME                                +\n");
    printf("+------------------------------------------------------------------+\n");
}

// Function to count the number of digits
int digits(int n) {
    int counter = 0;

    while (n != 0) {
        n /= 10;
        counter++;
    }

    return counter;
}
