/*------------------------------------------------------------------------------------------------------------
CONSEGNA
--------------------------------------------------------------------------------------------------------------
Creare una funzione che dice se un carattere è una vocale.
Creare un programma che fa inserire la lunghezza di due parole 
(le due parole possono avere lunghezze diverse) e poi fa inserire 
le due parole un carattere alla volta. Alla fine il programma stampa 
per ogni parola quante vocali contiene.
------------------------------------------------------------------------------------------------------------*/

// LIBRARY
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// GRAPHIC FUNCTIONS
void welcome(void);
void endl(void);

// FUNCTIONS
int vow_detector(char character);

// PROGRAM
int main(void){
    welcome();

    int lenght = 0, count_voweles = 0;

    char character;

    for(int i=0; i<2; i++){
        if(i==0){
            printf("+ Please, enter the lenght of the first word: ");
        }else{
            printf("+ Please, enter the lenght of the second word: ");
        }
        scanf("%d", &lenght);

        puts("+ Now please, enter your word one character at a time:");

        while(lenght > 0){
            fflush(stdin);

            printf("+ ");
            scanf("%c", &character);
            lenght--;

            count_voweles += vow_detector(character);
        }

        printf("+ There are %d vowels in this word!\n", count_voweles);

        count_voweles = 0;
    }

    endl();
    return 0;
}

void welcome(void){
    printf("+--------------------------------------------------------------------+\n");
    printf("+                     WELCOME TO EXERCISE ONE!                       +\n");
    printf("+--------------------------------------------------------------------+\n");
}

void endl(void){
    printf("+--------------------------------------------------------------------+\n");
}

int vow_detector(char character){
    char voweles[] = "aeiou";
    int count_voweles = 0;

    for(int j=0; j<strlen(voweles); j++){
        if(tolower(character) == voweles[j]){
                count_voweles++;
        }
    }

    return count_voweles;
}
