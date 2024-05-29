/*------------------------------------------------------------------------------------------------------------
CONSEGNA
--------------------------------------------------------------------------------------------------------------
Creare una funzione che dati tre valori naturali, se tra questi c’è (almeno) una coppia, restituisce il valore 
del numero ripetuto, altrimenti restituisce -1.

Creare un programma che usi la funzione per vedere tra due triplette di numeri naturali qual è quella che 
contiene la coppia più alta.
------------------------------------------------------------------------------------------------------------*/

// LIBRARY
#include <stdio.h>

// MACROS
#define SZ 3

// GRAPHIC FUNCTIONS
void welcome(void);
void endl(void);

// FUNCTIONS
int input(int array[]);
int couple(int numbers[]);

// PROGRAM
int main(void){
    welcome();

    int numbers[SZ]; 
    int numbers2[SZ]; 

    input(numbers);
    puts("+");
    input(numbers2);

    int result = couple(numbers);
    int result2 = couple(numbers2);
    
    printf("+ Results: %d, %d\n", result, result2);

    if(result > result2){
        puts("+ The first couple is greater than the second");
    } 
    else if (result2 > result){
        puts("+ The second couple is greater than the first");
    }
    else if (result == result2 && result != -1 && result2 != -1){
        puts("+ The triplets both contain a couple, but the couple are different");
    }
    else {
        puts("+ The triplets both have different numbers");
    }

    endl();
    return 0;
}

void welcome(void){
    puts("+--------------------------------------------------------------------+");
    puts("+                     WELCOME TO EXERCISE TWO!                       +");
    puts("+--------------------------------------------------------------------+");
}

void endl(void){
    puts("+--------------------------------------------------------------------+");
}

int input(int array[]){
    for (int i = 0; i < 3; i++) {
        if (i == 0) {
            printf("+ Please enter the first number: ");
        } else if (i == 1) {
            printf("+ Please enter the second number: ");
        } else {
            printf("+ Please enter the third number: ");
        }
        scanf("%d", &array[i]);
    }
}


int couple(int numbers[]) {
    for (int i=0; i<SZ-1; i++) {
        for (int j=i+1; j < SZ; j++) {
            if (numbers[i] == numbers[j]) {
                return numbers[i];
            }
        }
    }
    return -1; 
}

/*-------------------------------------------------------------------------------------------------------------
MAN (Ita Lang.)
---------------------------------------------------------------------------------------------------------------
Come funziona?
    - La funzione COUPLE verifica se il primo numero è uguale al secondo o al terzo, in caso contrario,
      verifica se il secondo numero è uguale al terzo.

      Quando viene verificata la presenza di una coppia viene restituito il valore che valida la coppia stessa.
      Se i numeri sono completamente discordi tra loro, viene restiutito -1.
-------------------------------------------------------------------------------------------------------------*/

