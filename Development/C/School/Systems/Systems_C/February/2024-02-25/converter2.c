/*------------------------------------------------------------------------------------------------------------
CONSEGNA
--------------------------------------------------------------------------------------------------------------
Implementare un programma C che dato un menu di selezione consenta di effettuare la conversione prescelta.

Sarà obbligatorio l'uso del costrutto switch case e il ricorso ad algoritmi differenti per le varie conversioni. 
E' vietato l'uso delle specifiche di conversione per le codifiche esadecimali e ottali e si caldeggia quando 
possibile il ricorso agli operatori bitwise.

Il programma legge due input:

l'intero corrispondente alla voce di menu
il numero nella codifica di partenza
e stampa il numero nella codifica di destinazione.

Ad esempio supponendo che il menu sia il seguente

1] dec2char
2] dec2bin
3] dec2hex
4] dec2oct
5] char2dec
6] hex2dec
7] bin2dec
8] oct2dec
0] Esci
Input:
3 254
Output:
0xFE
Input:
1 951
Output:
9 5 1  (stampati come caratteri ascii)
Altri esempi:
2 126
1 1 1 1 1 1 1 0
4 1000
1750
5  3 5 0 x (letti come caratteri, ad esempio con getchar e 'x' fa da terminatore di immissione)
350
------------------------------------------------------------------------------------------------------------*/

// LIBRARY
#include <stdio.h>

// GRAPHIC FUNCTIONS
void welcome(void);
void endl(void);

void loading(void);

// MENU FUNCTION
void menu(void);

// MATH FUNCTIONS
char dec2char(int number);
int dec2bin(int number);
void dec2hex(int number);   // Non utilizzata            

int main(void){
    int result = 0;
    char result_c;
    
    welcome();
    menu();
    endl();

    int choice = 0;

    // INPUT PHASE  
    do{
        if(choice < 0 || choice > 8){
            puts("\033[1;31m+\tERROR: INVALID ARGUMENT\033[0m");        
        }

        printf("+ Please, enter your choise: ");
        scanf("%d", &choice);

    }while(choice < 0 || choice > 8);

    int input = 0;

    if(choice != 0){
        do{
            if(input < 0){
                puts("\033[1;31m+\tERROR: INVALID ARGUMENT\033[0m");        
            }

            printf("+ Please, enter number: ");
            scanf("%d", &input);

        }while(input < 0);
    }

    switch(choice){
        case 1:
        printf("+ Result: %c\n", dec2char(input));
        break;

        case 2:
        printf("+ Result: %d\n", dec2bin(input));
        break;

        case 3:
        printf("+ Result: 0x%X\n", input);
        break;

        default:
        printf("+ Exit ");
        loading(); puts("");
        break;
        //
    }

    endl();
    return 0;
}

// GRAPHIC FUNCTIONS
void welcome(void){
    puts("+--------------------------------------------------------------------+");
    puts("+                             WELCOME!                               +");
    puts("+--------------------------------------------------------------------+");
}

void endl(void){
    puts("+--------------------------------------------------------------------+");
}

void loading(void){
    char caricamento[] = "...";

    for(int zzz = 0; zzz < 3; zzz ++){
        printf("%c", caricamento[zzz]);
        fflush(stdout); 
        usleep(300000); // Attendi 300 millisecondi (0.3 secondi).
    }
}

// MENU
void menu(void){
    puts("+                              MENU                                  +");
    puts("+ 1]  DEC2CHAR                                                       +");
    puts("+ 2]  DEC2BIN                                                        +");
    puts("+ 3]  DEC2HEX                                                        +");
    puts("+ 4]  DEC2OCT                                                        +");
    puts("+ 5]  CHAR2DEC                                                       +");
    puts("+ 6]  HEX2DEC                                                        +");
    puts("+ 7]  BIN2DEC                                                        +");
    puts("+ 6]  OCT2DEC                                                        +");
    puts("+ 0]  EXIT                                                           +");
}

// MATH FUNCTIONS 
char dec2char(int number){
    char result = number;
    return result;
}

int dec2bin(int number) {
    int binary = 0;
    int i = 1;                               // Posizione del bit

    while (number > 0){
        binary += (number % 2) * i;          // Aggiungi il bit binario alla posizione corretta
        number = number / 2;                 // Dividi il numero per 2 per proseguire con il bit successivo
        i *= 10;                             // Moltiplica la posizione del bit per 10
    }

    return binary;
}

// non viene utilizzata ma l'ho creata comunque
void dec2hex(int number) {
    char hex[100];
    int i = 0;

    // Converte il numero decimale in esadecimale
    while (number != 0) {
        int remainder = number % 16;                          // Resto della divisione per 16
        if (remainder < 10)
            hex[i++] = remainder + '0';                       // Converte i numeri da 0 a 9 in caratteri
        else
            hex[i++] = remainder + 'A' - 10;                  // Converte i numeri da 10 a 15 in lettere A-F
        number = number / 16;                                 // Dividi il numero per 16
    }

    // Stampa i simboli esadecimali, partendo dall'ultimo
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", hex[j]);
    }
}