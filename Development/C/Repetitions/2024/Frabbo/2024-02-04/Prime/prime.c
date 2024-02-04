//2 boolean primo(int n) --> ritorna vero se n e' primo

#include <stdio.h>

void welcome(void);
void prime_id(int a);

int main(void){
    welcome();

    int number = 0;

    printf("+ Please, enter a number: ");
    scanf("%d", &number);

    prime_id(number);

    printf("\n+------------------------------------------------------------------+\n");

    return 0;
}

//Graphic
void welcome(void){
    printf("+------------------------------------------------------------------+\n");
    printf("+                          IS PRIME?                               +\n");
    printf("+------------------------------------------------------------------+\n");
}

// Prime identificator function
void prime_id(int a){
    int counter = 0;

    for(int i=1; i<a; i++){
        if(a%i==0){
            counter++;
        }
    }

    if(counter>1){
        printf("+ No is not");
    }
    else{
        printf("+ Yes it is");
    }
}