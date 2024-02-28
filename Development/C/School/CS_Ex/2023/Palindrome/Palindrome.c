#include <stdio.h>
#include <string.h>

#define SZ 100

int main(void){
    char string[SZ];
    char pivout[SZ];

    printf("Please write something: ");
    gets(string);

    int ispalindrome = 1;
    int lenght = strlen(string);

    for(int j=0; j<lenght; j++){
        pivout[j] = string[j];
    }

    for(int i=0; i<lenght; i++){
        if(pivout[i] != string[lenght - i - 1]){
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