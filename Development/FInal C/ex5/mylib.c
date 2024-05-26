int found_vowels(char *string) {
    char vowels[] = "aeiouyAEIOUY";
    int counter = 0;

    for (int i = 0; string[i] != '\0'; i++) {
        for (int j = 0; j < string[j] != '\0'; j++) {
            if (string[i] == vowels[j]) {
                counter++;
            }
        }
    }

    return counter;
}

int found_consonants(char *string) {
    int counter = 0;

    for (int i = 0; string[i] != '\0'; i++) {
        if ((string[i] >= 'A' && string[i] <= 'Z') || (string[i] >= 'a' && string[i] <= 'z')) {
            counter++;
        }
    }

    int vowels = found_vowels(string);
    int consonants = counter - vowels;

    return consonants;
}