#include <stdlib.h>

#define RESET "\033[0m"          
#define RED "\033[31m"           
       

#define SZ 100

const char* get_ordinal(int number) {
    switch(number) {
        case 1: return "first";
        case 2: return "second";
        case 3: return "third";
        case 4: return "fourth";
        case 5: return "fifth";
        case 6: return "sixth";

        default: return "unknown"; 
    }
}

void welcome(void) {
    puts("---------------------------------------------------------");
    puts("                 WELCOME TO MY MEMORIZER                 ");
    puts("---------------------------------------------------------\n");
}

void endl(void) {
    puts("---------------------------------------------------------\n");
}