#include <stdio.h>
#include <string.h>

#define SZ 80

void welcome(void);

int main(void){
    welcome();

    char string[SZ];  
    int i;

    printf("+ Please, write something: ");
    for(i = 0; (string[i] = getchar()) != '\n' && i < SZ-1; i++){}
    string[i] = '\0';
    
    printf("+ You wrote: ");

    for(int j = 0; string[j] != '\0'; j++){
        printf("%c", string[j]);
    }

    printf("\n+------------------------------------------------------------------+\n");

    return 0;
}

// Graphic
void welcome(void){
    printf("+------------------------------------------------------------------+\n");
    printf("+                            WELCOME                               +\n");
    printf("+------------------------------------------------------------------+\n");
}
