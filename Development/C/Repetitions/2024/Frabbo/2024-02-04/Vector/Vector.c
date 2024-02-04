//LUDOPATIA

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SZ 10
#define MIN 1
#define MAX 100

void welcome(void);
void rand_Vec(int vector[]);
void print_Vec(int vector[]);

int main(void){
    srand(time(NULL));
    welcome();

    int vector[SZ];  

    printf("+ ");

    rand_Vec(vector);
    print_Vec(vector);

    printf("\n+------------------------------------------------------------------+\n");

    return 0;
}

//Graphic
void welcome(void){
    printf("+------------------------------------------------------------------+\n");
    printf("+                            WELCOME                               +\n");
    printf("+------------------------------------------------------------------+\n");
}

//An array of random numbers
void rand_Vec(int vector[]){
    for(int i=0; i<SZ; i++){
        vector[i] = rand()%(MAX-MIN+1)+MIN;
    }
}

// Vector print function
void print_Vec(int vector[]){
    for(int i=0; i<SZ; i++){
        printf("%d, ", vector[i]);
    }
}
