#include <stdio.h>
#include <stdlib.h>

void welcome(void){
    printf("+----------------------------------------------------+\n");
    printf("+                     WELCOME!                       +\n");
    printf("+----------------------------------------------------+\n");
}

int main(void){
    welcome();

    char character;

    printf("+ Please, press a character, i will guess: ");
    scanf("%c", &character);

    printf("+ You press the %c key\n", character);
    printf("+----------------------------------------------------+\n");

    return 0;
}