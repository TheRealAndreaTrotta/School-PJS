#include <stdio.h>

int main(void) {
    int arr[3]; // Utilizzo di un array di dimensione 3 per memorizzare i tre numeri
    char character;
    
    for (int i = 0; i < 3; i++) {
        printf("Please, enter a number: ");    
        
        do {
            if (scanf("%d", &arr[i]) != 1 || arr[i] < 1) {
                printf("\tERROR: Not a valid input\n\nPlease, enter a number: ");
                while ((character = getchar()) != '\n' && character != EOF); // Pulizia del buffer di input
            } 
        } while (arr[i] < 1);
    }
    
    printf("You entered: ");
    for (int j = 0; j < 3; j++) {
        printf("%d, ", arr[j]);
    }
    
    return 0;
}
