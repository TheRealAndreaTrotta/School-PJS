#include <stdio.h>
#include <string.h>

int main(void) {
    char vet[50], vet2[50];
    int j = 0;
    int flag = 0;
    int position = 0; // Inizializza la posizione a -1 per indicare "non trovato"

    // Inserimento della prima stringa
    printf("Inserisci una stringa: ");
    gets(vet);

    // Inserimento della sottostringa
    printf("Inserisci una sottostringa da individuare nella frase precedente: ");
    gets(vet2);

    // Ciclo attraverso i caratteri della stringa principale
    for (int i = 0; i < strlen(vet); i++) {
        j = 0;
        flag = 1; // Inizializza il flag a 1 (vero)

        // Verifica se i caratteri corrispondono per la sottostringa
        while (j < strlen(vet2) && flag == 1) {
            if (vet[i + j] != vet2[j]) {
                flag = 0; // Imposta il flag a 0 (falso) se i caratteri non corrispondono
            }
            j++;
        }

        // Se il flag è ancora 1, la sottostringa è trovata alla posizione i
        if (flag == 1) {
            position = i;
            break;
        }
    }

    // Stampa il risultato in base alla posizione trovata
    if (position != 0) {
        printf("La sottostringa inizia alla posizione numero %d nella frase inserita.\n", position);
    } else {
        printf("La sottostringa non e' stata trovata nella frase inserita.\n");
    }

    return 0;
}

