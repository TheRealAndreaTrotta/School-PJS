// Conta vocali e consonanti

#include <stdio.h>
#include "mylib.c"

#define LEN 100

int main(void) {
    char string[LEN];

    printf("Please, write something: ");
    fgets(string, sizeof(string), stdin);
    
    printf("Number of vowels: %d\nNumber of consonants: %d\n", found_vowels(string), found_consonants(string));

    return 0;
}