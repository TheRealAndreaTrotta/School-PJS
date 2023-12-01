// calcolare il fattoriale di un numero
#include <stdio.h>

int main(void){
    int fattoriale = 1, input = 0;

    printf("Prego, inserisca il numero che desidera calcolare: ");
    scanf("%d", &input);

    while(input != 0){
        fattoriale *= input;
        input --;
    }

    printf("Il fattoriale risulta:\t%d\n", fattoriale);
    return 0;   
}


