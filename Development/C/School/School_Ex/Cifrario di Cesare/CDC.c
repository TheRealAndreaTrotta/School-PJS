//cifrario di cesare
#include <stdio.h>
#define SZ 100

void welcome(void){
    printf("+----------------------------------------------------+\n");
    printf("+                     ROT 13                         +\n");
    printf("+----------------------------------------------------+\n");
}

int main(void){
    welcome();

    char phrase[SZ], cif_phrase[SZ];
    int i;

    //Phrase input
    printf("+ Please, write something: ");
    for(i=0; ((phrase[i]=getchar())!='\n')&&(i<(SZ-1));i++)
        ;
    phrase[i] = '\0';

    //Cifred Process
    for(i=0; phrase[i] != '\0'; i++){
        cif_phrase[i] = phrase[i] + 13;

        if(cif_phrase[i] > 'z'){
            cif_phrase[i] = phrase[i] + 13 - 26;
        } 
        else if((cif_phrase[i] > 'Z') && (cif_phrase[i] < 'a')){
            cif_phrase[i] = phrase[i] + 13 - 26;
        }
    }

    //Print Cifred Phrase Process
    printf("+ Cifred phrase: ");
    for(i=0; phrase[i] != '\0'; i++){
        printf("%c", cif_phrase[i]);
    }

    printf("\n+----------------------------------------------------+\n");
    
    return 0;
}