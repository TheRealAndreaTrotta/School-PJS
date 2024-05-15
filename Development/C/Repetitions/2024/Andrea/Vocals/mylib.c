void one_to_one_character(char word[], int lenght){
    fflush(stdin);
    for(int i=0; i<lenght; i++){
        printf("Letter [%d]: ", i+1);
        scanf("%c", &word[i]);
        fflush(stdin);
    }
    word[lenght+1] = '\0';
}

int check_vowals(char word[], int lenght){
    char vowals[] = "aeiouyAEIOU";
    int counter = 0;

    for(int character = 0; character < lenght; character++){
        for(int check = 0; check < sizeof(vowals); check++){
            if(word[character] == vowals[check]){
                counter++;
            }
        }
    }
    return counter;
}