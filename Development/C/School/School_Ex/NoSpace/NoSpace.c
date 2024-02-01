#include <stdio.h>
#include <string.h>

#define SZ 30

void welcome(void){
    printf("+----------------------------------------------------------+\n");
    printf("+                         WELCOME                          +\n");
    printf("+----------------------------------------------------------+\n");
}

int main(void){
    welcome();

    char string[SZ], nospace[SZ];
    int c = 0;

    printf("+ Please, write something: ");
    gets(string);

    for(int i=0; i<=strlen(string); i++){
        if(string[i] != ' '){
            nospace[c] = string[i];
            c++;
        }
    }

    printf("+ ");
    for(int i=0; i<strlen(nospace); i++){
        printf("%c", nospace[i]);
    }
    printf("\n+----------------------------------------------------------+\n");

    return 0;
}
