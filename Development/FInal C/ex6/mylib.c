char upper(char character) {
    if (character >= 'a' && character <= 'z') {
        return character & ~32;
    }
    return character;  
}


void mercuri(char *string) {
    for (int i = 0; string[i] != '\0'; i++){
        printf("%c", upper(string[i]));

        for (int j = 0; j < i; j++) {
            printf("%c", string[i]);
        }

        if (string[i + 1] != '\0') {
            printf("-");
        }
    }
}