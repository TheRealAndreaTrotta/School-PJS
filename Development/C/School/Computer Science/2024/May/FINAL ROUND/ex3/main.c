#include "mylib.c"

int main(void) {
    char string[SZ], choice, newChar;

    puts("Please, write something: "); write(string);
    puts("Please, enter the character to be replaced: "); writec(&choice);
    puts("Please, enter the replacement character: "); writec(&newChar);

    replace(string, choice, newChar);
    read(string);

    return 0;
}
