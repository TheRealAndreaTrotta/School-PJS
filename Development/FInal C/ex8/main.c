#include <stdio.h>
#include "mylib.c"

int main(void) {
    welcome();

    FILE *file = fopen("test.txt", "w"); 
    char* buffer = (char*)malloc(SZ * sizeof(buffer));

    if(file == NULL) {
        puts(RED "ERROR: unable to open file" RESET);
        return 1;
    }

    for(int i = 1; i < 4; i++) {
        printf("Please, enter the " RED "%s" RESET " name: ", get_ordinal(i));

        fgets(buffer, sizeof(buffer), stdin); fprintf(file, "%s", buffer);
    }
    
    free(buffer); fclose(file); puts("");

    file = fopen("test.txt", "r"); 
    buffer = (char*)malloc(SZ * sizeof(buffer));

    if(file == NULL) {
        puts(RED "ERROR: unable to open file" RESET);
        return 1;
    }

    for(int i = 1; fgets(buffer, sizeof(buffer), file) != NULL; i++) {
        printf("This is the " RED "%s" RESET " name from the file: %s", get_ordinal(i), buffer);
    }
    
    free(buffer); fclose(file); puts("");

    endl();  return 0; 
}