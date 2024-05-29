/*------------------------------------------------------------------------------------------------------------
CONSEGNA
--------------------------------------------------------------------------------------------------------------
Memorizzare in un array bidimensionale N x N tutti zeri tranne nelle celle della diagonale principale dove 
memorizzare uno
------------------------------------------------------------------------------------------------------------*/

// LIBRARY
#include <stdio.h>

// MACROS
#define rows 5
#define column 5

// GRAPHIC FUNCTIONS
void welcome(void);
void endl(void);

// FUNCTION
void fill_diagonal(int matrix[][column]);

int main(void){
    welcome();

    int matrix[rows][column];
    fill_diagonal(matrix);

    endl();
    return 0;
}

void welcome(void){
    puts("+--------------------------------------------------------------------+");
    puts("+                             WELCOME!                               +");
    puts("+--------------------------------------------------------------------+");
}

void endl(void){
    puts("+--------------------------------------------------------------------+");
}

void fill_diagonal(int matrix[][column]){
    for(int i=0; i<column; i++){
        printf("+ ");
        for(int j=0; j<rows; j++){
            if(j==i){
                matrix[i][j] = 1;
                printf("\033[1;31m%d  \033[0m", matrix[i][j]);
            }
            else{
                matrix[i][j] = 0;
                printf("%d  ", matrix[i][j]);
            }
        }
        puts("");
    }
}

/*--------------------------------------------------------------------------------------------------------------
MAN (Ita Lang.)
----------------------------------------------------------------------------------------------------------------
Come funziona?
    - fill_diagonal serve a creare una matrice quadrata dove tutte le celle sono impostate a zero, 
      tranne quelle sulla diagonale principale. Sulla diagonale principale, cioè dalla cella in alto 
      a sinistra a quella in basso a destra, le celle hanno il valore 1.

Ecco come funziona in modo più semplice:
    1. Si immagina una griglia di numeri, come una tabella, con un certo numero di righe e colonne (le stesse).
    2. Si parte dalla cella in alto a sinistra e si scende lungo la diagonale principale.
    3. Ogni volta che si incontra una cella su questa linea, ci si ferma e si mette un "1" al suo interno.
    4. Per tutte le altre celle, cioè quelle che non sono sulla diagonale principale, si mette un "0".
    5. Alla fine, avrai una griglia dove la diagonale principale è piena di "1" e tutto il resto è "0".
--------------------------------------------------------------------------------------------------------------*/