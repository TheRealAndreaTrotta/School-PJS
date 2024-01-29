#include <stdio.h>
#include <string.h>

#define SZ 15

void welcome(void){
    printf("+----------------------------------------------------+\n");
    printf("+                     WELCOME!                       +\n");
    printf("+----------------------------------------------------+\n");
}

int main(void){
    welcome();

    char phrase[SZ];
    char vocal[] = "aeiouAEIOU";

    int counter = 0;

    printf("+ Please, writing something: ");
    scanf("%s", phrase);

    int lenght = strlen(phrase);
    
    for(int i=0; i<lenght; i++){
        for(int j=0; j<strlen(vocal); j++){
            if(phrase[i] == vocal[j]){
                counter ++;
            } 
        }
    }

    printf("+ There are %d vocal in this word\n", counter);
    printf("+----------------------------------------------------+\n");

    return 0;
}