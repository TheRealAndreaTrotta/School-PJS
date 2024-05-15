#include <stdio.h>
#include "mylib.c"

int main(void){
    int lenght = 0;

    printf("How many letters have your word? ");
    scanf("%d", &lenght);

    char word[lenght];
    one_to_one_character(word, lenght);

    int counter = check_vowals(word, lenght);
    printf("Result: %d", counter);
    
    return 0;
}