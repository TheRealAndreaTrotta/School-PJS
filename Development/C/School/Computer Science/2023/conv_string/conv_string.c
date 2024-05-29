#include <stdio.h>
#include <string.h>

#define SZ 30

void welcome(void){
    printf("+----------------------------------------------------+\n");
    printf("+                     WELCOME!                       +\n");
    printf("+----------------------------------------------------+\n");
}

int main(void){
    welcome();

    char string[SZ];

    printf("+ Please, write something: ");
    gets(string);

    int lenght = strlen(string);

    printf("+ ");
    for(int i=lenght; i>=0; i--){
        printf("%c", string[i]);
    }

    printf("\n+----------------------------------------------------+\n");

    return 0;
}