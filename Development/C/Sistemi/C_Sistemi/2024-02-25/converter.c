#include <stdio.h>

// Funzioni per le varie conversioni

// Converte un intero in un carattere ASCII e stampa
void dec2char(int n) {
    printf("%c ", n);
}

// Converte un intero in binario e stampa
void dec2bin(int n) {
    int i;
    for (i = 31; i >= 0; i--) {
        printf("%d", (n >> i) & 1); // Utilizza l'operatore di shift e AND bitwise
    }
    printf(" ");
}

// Converte un intero in esadecimale e stampa
void dec2hex(int n) {
    printf("0x%X ", n);
}

// Converte un intero in ottale e stampa
void dec2oct(int n) {
    printf("%o ", n);
}

// Converte un carattere ASCII in un intero e stampa
void char2dec(char c) {
    printf("%d ", c);
}

// Converte una stringa esadecimale in un intero e stampa
void hex2dec(char *hex) {
    int n;
    sscanf(hex, "%X", &n); // Utilizza sscanf per la conversione da esadecimale a intero
    printf("%d ", n);
}

// Converte una stringa binaria in un intero e stampa
void bin2dec(char *bin) {
    int n = 0;
    while (*bin != '\0') {
        n = (n << 1) + (*bin - '0'); // Utilizza l'operatore di shift e l'operatore di sottrazione
        bin++;
    }
    printf("%d ", n);
}

// Converte una stringa ottale in un intero e stampa
void oct2dec(char *oct) {
    int n;
    sscanf(oct, "%o", &n); // Utilizza sscanf per la conversione da ottale a intero
    printf("%d ", n);
}

int main() {
    int choice, num;
    char input[20];
    
    do {
        // Stampa del menu
        printf("Menu:\n");
        printf("1] dec2char\n");
        printf("2] dec2bin\n");
        printf("3] dec2hex\n");
        printf("4] dec2oct\n");
        printf("5] char2dec\n");
        printf("6] hex2dec\n");
        printf("7] bin2dec\n");
        printf("8] oct2dec\n");
        printf("0] Esci\n");
        printf("Scelta: ");
        scanf("%d", &choice);

        // Switch per selezionare l'operazione
        switch(choice) {
            case 1:
                printf("Input: ");
                scanf("%d", &num);
                dec2char(num);
                break;
            case 2:
                printf("Input: ");
                scanf("%d", &num);
                dec2bin(num);
                break;
            case 3:
                printf("Input: ");
                scanf("%d", &num);
                dec2hex(num);
                break;
            case 4:
                printf("Input: ");
                scanf("%d", &num);
                dec2oct(num);
                break;
            case 5:
                printf("Input: ");
                scanf("%s", input);
                char2dec(input[0]);
                break;
            case 6:
                printf("Input: ");
                scanf("%s", input);
                hex2dec(input);
                break;
            case 7:
                printf("Input: ");
                scanf("%s", input);
                bin2dec(input);
                break;
            case 8:
                printf("Input: ");
                scanf("%s", input);
                oct2dec(input);
                break;
            case 0:
                printf("Uscita...\n");
                break;
            default:
                printf("Scelta non valida.\n");
        }
    } while (choice != 0);

    return 0;
}
