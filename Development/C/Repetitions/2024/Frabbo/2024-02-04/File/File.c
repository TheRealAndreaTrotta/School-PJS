#include <stdio.h>

int main() {
    // Pointer 
    FILE *file;

    // Open file and Read
    file = fopen("prova.txt", "r");

    // File open with success
    if (file == NULL) {
        fprintf(stderr, "Impossibile aprire il file.\n");
        return 1; // Error code
    }

    char buffer[100];
    
    // Read a line of the file with fgets
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("%s", buffer);
    }

    // Close file
    fclose(file);

    return 0; 
}
