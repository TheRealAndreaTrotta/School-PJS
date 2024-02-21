/*------------------------------------------------------------------------------------------------------------
CONSEGNA
--------------------------------------------------------------------------------------------------------------
Creare una funzione che dice se un carattere è una vocale.

Creare un programma che fa inserire la lunghezza di due parole 
(le due parole possono avere lunghezze diverse) e poi fa inserire 
le due parole un carattere alla volta. 

Alla fine il programma stampa per ogni parola quante vocali contiene.
------------------------------------------------------------------------------------------------------------*/

// LIBRARY
#include <stdio.h>
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

        for(lenght; lenght>0; lenght--){
            fflush(stdin);

            printf("+ ");
            scanf("%c", &character);

            count_voweles += vow_detector(character);
        }

        printf("+ There are %d vowels in this word!\n", count_voweles);

        count_voweles = 0;
    }

    endl();
    return 0;
}

void welcome(void){
    puts("+--------------------------------------------------------------------+");
    puts("+                     WELCOME TO EXERCISE ONE!                       +");
    puts("+--------------------------------------------------------------------+");
}

void endl(void){
    puts("+--------------------------------------------------------------------+");
}

int vow_detector(char character){
    char voweles[] = "aeiouy";

    for(int j=0; j<6; j++){
        if(tolower(character) == voweles[j]){
                return 1;
        }
    }

    return 0;
}

/*-------------------------------------------------------------------------------------------------------------
MAN (Ita Lang.)
---------------------------------------------------------------------------------------------------------------
Come funziona?
    - La funzione vow_detector verifica se il carattere inserito fa parte dell'insieme delle vocali restituendo
      un valore intero. Se viene trovata una vocale il valore restituito è 1 altrimenti, è 0.

      Per evitare complicazioni inutili viene posta una maschera che muta i caratteri inseriti dall'utente
      in minuscole.
-------------------------------------------------------------------------------------------------------------*/

