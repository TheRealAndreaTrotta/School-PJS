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

    //Converter Loop
    for(int i=0; string[i]!='\0'; i++){
        if((i == 0) || (string[i-1] == ' ') && (string[i] != ' ')){
            string[i] = string[i] ^ 32;
        } 
    }

    printf("+ %s", string);
    printf("\n+----------------------------------------------------+\n");

    return 0;
}