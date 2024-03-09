// Library
#include <stdio.h>
#include <stdlib.h>

// Macros
#define sz 11

// Graphics Functions
void welcome(void);
void endl(void);

// Print Functions
void print_iva(unsigned char p_iva[]);

// Math Functions
unsigned char Luhn(unsigned char p_iva[]);

int main(void){
    welcome();

    unsigned char p_iva[] = {0,2,3,4,2,5,2,0,1,5,0};

    p_iva[sz-1] = Luhn(p_iva);
    
    print_iva(p_iva);

    endl();
    return 0;
}
void welcome(void){
    puts("+--------------------------------------------------------------------+");
    puts("+                          IVA CALCULTATOR!                          +");
    puts("+--------------------------------------------------------------------+");
}

void endl(void){
    puts("\n+--------------------------------------------------------------------+");
}

unsigned char Luhn(unsigned char p_iva[]){
    char x = 0, y = 0, z = 0;

    for(int i=0; i<sz; i++){
        // Even
        if(i%2==0){
            y += p_iva[i];
            if(p_iva[i] >= 5){
                z+=p_iva[i];
            }
        }
        // Odd
        else{
            x += p_iva[i];
        }
    }
    y*=2;

    // Result
    int c = 10-((x+y+z)%10);

    /*  
        printf("x = %d, ", x);
        printf("y = %d, ", y);
        printf("z = %d, ", z);
        printf("c = %d, ", c);
    */

    return abs(c);
}

void print_iva(unsigned char p_iva[]){
    printf("+ P-IVA: ");

    for(int i=0; i<sz; i++){
        printf("%d", p_iva[i]);
    }
}