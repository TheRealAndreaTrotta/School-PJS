//3 int somma_tabellina(int t) 
// ritorna la somma della tabellina. Esempio se t=2 ritorna 2+4+6+8+..+20

#include <stdio.h>

void welcome(void);
void tabs(int number, int index);

int main(void){
    welcome();

    int number = 0, index = 0;

    printf("+ Please, enter a number: ");
    scanf("%d", &number);

    printf("+ Please, enter the index: ");
    scanf("%d", &index);

    tabs(number, index);

    printf("\n+------------------------------------------------------------------+\n");

    return 0;
}

//Graphic
void welcome(void){
    printf("+------------------------------------------------------------------+\n");
    printf("+                           WELCOME                                +\n");
    printf("+------------------------------------------------------------------+\n");
}

// Function for print tabs
void tabs(int number, int index){
    int num = 0;
    int sum = 0;

    printf("+ ");
    for(int i=0; i<=index; i++){
        if(i==index-1){
            printf("%d ", num);
        } 
        else if(i==index){
            printf("+ %d = %d", num, sum);
        }
        else{
            printf("%d + ", num);
        }
        num += number;
        sum += num;
    }
}