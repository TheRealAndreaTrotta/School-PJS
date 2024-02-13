/*------------------------------------------------------------------------------------------------------------
CONSEGNA
--------------------------------------------------------------------------------------------------------------
1. Chiedi all'utente di inserire una serie di parole separate da spazi.
2. Conta e stampa il numero totale di caratteri presenti in tutte le parole.
3. Chiedi all'utente di inserire una parola.
4. Conta e stampa il numero di consonanti e vocali nella parola inserita.
5. Chiedi all'utente di inserire un carattere.
6. Conta e stampa il numero di volte che il carattere inserito compare in tutte le parole inserite.
------------------------------------------------------------------------------------------------------------*/

// LIBRARY
#include <stdio.h>
#include <strings.h>

//MACROS
#define SZ 80

// FUNCTION
void welcome(void);

int main(void){
    welcome();

    char string[SZ], word[SZ];
    char voweles[] = "aeiouAEIOU";
    char character[2];
    
    int count = 0, count_voweles = 0, count_consonant = 0, count_character = 0;

    printf("+ Please, writing something: ");
    fgets(string, SZ, stdin);

    for(int i=0; i<strlen(string); i++){
        if((string[i] >= 'A') && (string[i] <= 'Z') || (string[i] >= 'a') && (string[i] <= 'z')){
            count++;
        }
    }
    printf("+ %d", count);

    printf("\n+ Please, writing a word: ");
    scanf("%s", word);

    int lenght = strlen(word);

    for(int i=0; i<lenght; i++){
        for(int j=0; j<strlen(voweles); j++){
            if(word[i] == voweles[j]){
                count_voweles++;
            }
        }
    }

    count_consonant = lenght - count_voweles;

    printf("+ There are %d voweles and %d consonant in this word!", count_voweles, count_consonant);
    
    fflush(stdin);

    printf("\n+ Please, writing a character: ");
    scanf("%c", character);

    for(int n=0; n<strlen(string); n++){
        if(string[n] == character[0]){
            count_character++;
        }
    }

    for(int m=0; m<strlen(word); m++){
        if(word[m] == character[0]){
            count_character++;
        }
    }

    printf("+ The character %c, was appear %d times in this program!", character[0], count_character);
    printf("\n+--------------------------------------------------------------------+\n");

    return 0;
}

void welcome(void){
    printf("+--------------------------------------------------------------------+\n");
    printf("+                     WELCOME TO EXERCISE TWO!                       +\n");
    printf("+--------------------------------------------------------------------+\n");
}