/*------------------------------------------------------------------------------------------------------------
CONSEGNA
--------------------------------------------------------------------------------------------------------------
Realizzare un programma in C con due funzioni che calcolano rispettivamente l'area e la circonferenza di un 
cerchio, dato in input il raggio.
------------------------------------------------------------------------------------------------------------*/
// LIBRARY
#include <stdio.h>
#include <math.h>

// GLOBAL VARIABLES
double PI = 3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679;
double Area = 0;
double radius = 0;
double Circumference = 0;

// GRAPHIC FUNCTIONS
void welcome(void);
void endl(void);

// MATH FUNCTIONS 
void Circle_Area(double radius);
void Circle_Cir(double radius);

// PROGRAM
int main(void) {
    welcome();

    printf("+ Please, enter the radius: ");
    scanf("%lf", &radius);

    Circle_Area(radius);
    printf("\n");
    Circle_Cir(radius);
    
    endl();
    return 0;
}

// GRAPHIC FUNCTIONS
void welcome(void) {
    printf("+----------------------------------------------------------+\n");
    printf("+                         WELCOME                          +\n");
    printf("+----------------------------------------------------------+\n");
}

void endl(void){
    printf("\n+----------------------------------------------------------+\n");
}

// MATH FUNCTIONS 
void Circle_Area(double radius){
    Area = PI * pow(radius,2);
    printf("+ Area: %.4lf", Area);
}

void Circle_Cir(double radius){
    Circumference = radius * 2 * PI;
    printf("+ Circumference: %.4lf", Circumference);
}