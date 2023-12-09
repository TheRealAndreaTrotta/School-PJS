#include <stdio.h>

int corrin(void){ 
    // This function ensures correct input 
    int number; char character;

    printf("Please, enter number: ");
    
    do{
        if(number < 1){
            printf("\tERROR: Not a valid input\n\nPlease, enter number: ");
            while ((character = getchar()) != '\n' && character != EOF);        // Input buffer cleanup

        }   else if (scanf("%d", &number) != 1)  {
                printf("\tERROR: Not a valid input\n\nPlease, enter number: ");
            
                while ((character = getchar()) != '\n' && character != EOF);        // Input buffer cleanup
            }   else {
                    break;
                }

    } while ((scanf("%d", &number) != 1) || (number < 1));

    return number;
}

int main(void) {
    int height = corrin();
    int number = 0;
    
    for(int i = 1; i <= height; i++){
        for(int j = 1; j <= i-1; j++){
            printf("%d ", number);
            number++;
        }
        printf("\n");
    }
    return 0;
}
