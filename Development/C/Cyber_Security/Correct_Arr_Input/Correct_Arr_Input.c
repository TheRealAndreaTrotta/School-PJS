#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int arr[3]; // Utilizzo di un array di dimensione 3 per memorizzare i tre numeri
    char character;
    
    for (int i = 0; i < 3; i++) {
        bool Valid = false; // Flag per indicare se l'input è valido
        
        while (!Valid) {
            printf("Please, enter a number: ");    
            if (scanf("%d", &arr[i]) != 1 || arr[i] < 1) {
                printf("\tERROR: Not a valid input\n\n");
                while ((character = getchar()) != '\n' && character != EOF); // Pulizia del buffer di input
            } else {
                Valid = true; // Imposta il flag a true se l'input è valido
            }
        }
    }
    
    printf("You entered: ");
    for (int j = 0; j < 3; j++) {
        printf("%d, ", arr[j]);
    }
    
    return 0;
}
