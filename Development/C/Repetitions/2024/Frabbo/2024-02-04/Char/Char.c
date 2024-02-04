#include <stdio.h>
#include <string.h>

#define SZ 80

void welcome(void);

int main(void){
    welcome();

    char string[SZ], string_2[SZ];  

    printf("+ 1) Please, writing something: ");
    gets(string);

    printf("+ 2) Please, writing something: ");
    fgets(string_2, sizeof(string_2), stdin);

    printf("+ You wrote:\n+ %s\n+ %s", string, string_2);
    printf("+------------------------------------------------------------------+\n");

    return 0;
}

//Graphic
void welcome(void){
    printf("+------------------------------------------------------------------+\n");
    printf("+                            WELCOME                               +\n");
    printf("+------------------------------------------------------------------+\n");
}