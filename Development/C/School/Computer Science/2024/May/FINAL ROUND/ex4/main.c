#include <stdio.h>

#define SZ 100

void write(char buffer[]) {
    fgets(buffer, SZ, stdin);
}

void writec(char* character) {
    scanf(" %c", character); 
    getchar();
}

void replacer(char string[], char character, char replace) {
    for(int i = 0; i < SZ; i++) {
        if(string[i] == character) {
            string[i] = replace;
        }
    }
}

void print(const char string[]) {
    printf("%s", string);
}

int main(void) {
    char string[SZ], character, replace;

    puts("Please, write something: "); write(string);
    puts("Please, write the character: "); writec(&character);
    puts("Please, write the replace: "); writec(&replace);

    replacer(string, character, replace); print(string);

    return 0;
}