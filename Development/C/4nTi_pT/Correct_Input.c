#include <stdio.h>

int main(void) { //corrin
    int number;
    char character;

    printf("Please, enter number: ");
    
    do{
        if(number < 1){
            printf("\tERROR: Not a valid input\n\nPlease, enter number:");
            while ((character = getchar()) != '\n' && character != EOF);

        } else if (scanf("%d", &number) != 1)  {
            printf("\tERROR: Not a valid input\n\nPlease, enter number:");
            
            while ((character = getchar()) != '\n' && character != EOF); // Pulizia del buffer di input
        } 

    } while ((scanf("%d", &number) != 1) || (number < 1));

    printf("You typed: %d\n", number);

    return 0;
}

