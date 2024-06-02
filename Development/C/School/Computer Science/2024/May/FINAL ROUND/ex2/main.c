#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 20
#define MAX_NUM 30

int main() {
    int numbers[SIZE];
    int i, j, num;

    // Inizializza il generatore di numeri casuali
    srand(time(NULL));

    // Inizializza l'array con numeri non ripetuti
    for (i = 0; i < SIZE; i++) {
        // Genera un numero casuale e verifica se è già presente nell'array
        do {
            num = rand() % MAX_NUM + 1;
            // Controlla se il numero è già presente nell'array
            for (j = 0; j < i; j++) {
                if (numbers[j] == num) {
                    num = 0; // Numero già presente, azzera num
                    break;
                }
            }
        } while (num == 0); // Ripeti finché non viene generato un numero non presente

        // Assegna il numero all'array
        numbers[i] = num;
    }

    // Stampa il risultato
    printf("Array di 20 elementi con numeri non ripetuti da 1 a 30:\n");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}
