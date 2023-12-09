//Chiedere in input l'altezza di un quadrato e visualizzare la sua costruzione a schermo.

#include <stdio.h>

int main(void) {
    int height;

    do{
        printf("Please, enter the height of the square: ");
        scanf("%d", &height);
    }while(height<1);

    for(int i = 1; i <= height; i++){
        for(int asterisk = 1; asterisk <= height; asterisk++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

