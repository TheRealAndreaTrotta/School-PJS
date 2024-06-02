#include <stdio.h>

#define SZ 100

void write(char prompt[]) {
    fgets(prompt, SZ, stdin);
}

void writec(char* prompt) {
    scanf(" %c", prompt); 
    getchar();
}

void read(const char prompt[]) {
    printf("%s", prompt);
}

void replace(char str[], char oldChar, char newChar) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == oldChar) {
            str[i] = newChar;
        }
    }
}
