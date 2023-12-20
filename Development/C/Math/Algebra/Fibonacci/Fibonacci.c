#include <stdio.h>
int corrin(void){ 
    // This function ensures correct input 
    int number; char character;

    printf("Please, enter number: ");
    scanf("%d", &number); 
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
    int input = corrin(), first = 0, second = 1, next = 0;

    printf("Fibonacci series up to %d terms: \n", input);

    for (int i = 0; i < input; i++) {
        printf("%d, ", first);
        next = first + second;
        first = second;
        second = next;
    }

    return 0;
}
