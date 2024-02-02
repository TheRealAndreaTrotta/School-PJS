//sottostringa, verificare se la seconda stringa è presente nella prima

#include <stdio.h>
#include <string.h>

#define SZ 100

void welcome(void){
    printf("+----------------------------------------------------------+\n");
    printf("+                         WELCOME                          +\n");
    printf("+----------------------------------------------------------+\n");
}

int main(void){
    welcome();
    
    char string[SZ], under[SZ];
    int counter = 0;

    printf("+ Please, write something: ");
    gets(string);

    printf("+ Under string:  ");
    gets(under);

    for(int i=0; i<SZ; i++){
        for(int j=0; j<strlen(under); j++){
            if(string[i] == under[j]){
                counter++;
            }
        }
    }

    if(counter == strlen(under)){
        printf("+ Found it!\n");
    }
    else{
        printf("+ Not found it!\n");
    }
    printf("+----------------------------------------------------------+\n");
    return 0;
}
