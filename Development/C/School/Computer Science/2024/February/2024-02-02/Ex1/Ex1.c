//sottostringa, verificare se la seconda stringa è presente nella prima

#include <stdio.h>
#include <string.h>

#define SZ 100

void welcome(void) {
    printf("+----------------------------------------------------------+\n");
    printf("+                         WELCOME                          +\n");
    printf("+----------------------------------------------------------+\n");
}

int isSubstring(const char *string, const char *under) {
    int len1 = strlen(string);
    int len2 = strlen(under);

    for (int i = 0; i <= len1 - len2; i++) {
        int j;

        for (j = 0; j < len2; j++) {
            if (string[i + j] != under[j]) {
                break;
            }
        }

        if (j == len2) {
            return 1;  // found substring
        }
    }

    return 0;  // substring not found
}

int main(void) {
    welcome();

    char string[SZ], under[SZ];

    printf("+ Please, write something: ");
    fgets(string, SZ, stdin);
    string[strcspn(string, "\n")] = '\0';  // remove the newline character

    printf("+ Under string:  ");
    fgets(under, SZ, stdin);
    under[strcspn(under, "\n")] = '\0';  // remove the newline character

    if (isSubstring(string, under)) {
        printf("+ Found it!\n");
    } else {
        printf("+ Not found it!\n");
    }

    printf("+----------------------------------------------------------+\n");
    return 0;
}
