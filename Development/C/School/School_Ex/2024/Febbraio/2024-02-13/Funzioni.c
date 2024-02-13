/*------------------------------------------------------------------------------------------------------------
CONSEGNA
--------------------------------------------------------------------------------------------------------------
Realizzare un programma in C con due funzioni che calcolano rispettivamente l'area e la circonferenza di un 
cerchio, dato in input il raggio.
------------------------------------------------------------------------------------------------------------*/
// LIBRARY
#include <stdio.h>
#include <math.h>

// MACROS
#define sz 10

// GLOBAL VARIABLES
double PI = 3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679;
char string[sz];

// GRAPHIC FUNCTIONS
void welcome(void);
void Endl(void);

// MATH FUNCTIONS 
double Circle_Area(double radius);
double Circle_Cir(double radius);

// PRINT FUNCTIONS
void print(char string[], double variables);

// PROGRAM
int main(void) {
    welcome();

    double A = 0, Cir = 0, radius = 0;

    printf("+ Please, enter the radius: ");
    scanf("%lf", &radius);

    A = Circle_Area(radius);
    print("Area", A);

    printf("\n");

    Cir = Circle_Cir(radius);
    print("Circumference", Cir);

    Endl();
    return 0;
}

void welcome(void) {
    printf("+----------------------------------------------------------+\n");
    printf("+                         WELCOME                          +\n");
    printf("+----------------------------------------------------------+\n");
}

void Endl(void){
    printf("\n+----------------------------------------------------------+\n");
}

void print(char string[sz], double variable){
    printf("+ %s: %.4lf", string, variable);
}

double Circle_Area(double radius){
    double Area = PI * pow(radius,2);
    return Area;
}

double Circle_Cir(double radius){
    double Circumference = radius * 2 * PI;
    return Circumference;
}

