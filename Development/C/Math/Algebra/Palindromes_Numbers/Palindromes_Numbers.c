#include <stdio.h>

int main(void){
    char number[100];
    char pivot[100];
    int counter = 0;
    int i = 0, j = 0;

    printf("Please enter number: ");
    for(i=0; (number[i]=getchar() != '\n') && (i<100-1); i++){
        counter++;
    }
    number[i] = '\0';

    for(j=0; j<counter; j++){
        pivot[j] = number[j];
    }
    pivot[j] = '\0';

    int ispalindrome = 1;

    for(int k=0; k<counter; k++){
        if(pivot[k] != number[counter - k - 1]){
            ispalindrome = 0;
        }
    }

    if(ispalindrome == 1){
        printf("Is a palindrome\n");
    } else {
        printf("Isn't a palindrome\n");
    }

    return 0;
}