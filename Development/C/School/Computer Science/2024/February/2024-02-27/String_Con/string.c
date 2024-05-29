/*------------------------------------------------------------------------------------------------------------
CONSEGNA
--------------------------------------------------------------------------------------------------------------
Realizza una funzione che riceve in input due stringhe e restituisce 1 se la prima stringa precede la 
seconda in ordine alfabetico, 0 altrimenti.

Ad esempio "abete" precede "tana" e "scarica" precede "scivolo".
------------------------------------------------------------------------------------------------------------*/

// LIBRARY
#include <stdio.h>
#include <ctype.h>

// MACROS
#define SZ 80

// GRAPHIC FUNCTIONS
void welcome(void);
void endl(void);

// MATH FUNCTIONS
int string_comp(char string1[], char string2[]);

// PROGRAM
int main(void) {
    welcome();

    char string[SZ], string2[SZ];

// INPUT PHASE
    for(int i=0; i<2; i++){
        if(i==0){
            printf("+ Please, write the first sentence: ");
            fgets(string, SZ, stdin);
        }
        else{
            printf("+ Please, write the second sentence: ");
            fgets(string2, SZ, stdin);
        }
    }

// RESULTS 
    int res = string_comp(string, string2);

    if(res == 0){
        puts("+ The second sentence precides the first");
    }
    else if(res == 1){
        puts("+ The first sentence precides the second");
    }
    else{
        puts("+ The sentences are the same");
    }

    endl();
    return 0;
}

void welcome(void) {
    puts("+--------------------------------------------------------------------+");
    puts("+                             WELCOME!                               +");
    puts("+--------------------------------------------------------------------+");
}

void endl(void) {
    puts("+--------------------------------------------------------------------+");
}

int string_comp(char string[], char string2[]) {
    int i = 0;

    while (string[i] != '\0' && string2[i] != '\0') {
        char s1 = tolower(string[i]);
        char s2 = tolower(string2[i]);

        if (s1 < s2) {
            return 1; 
        } 
        else if (s1 > s2) {
            return 0; 
        }

        i++; 
    }
    return 2;
}

