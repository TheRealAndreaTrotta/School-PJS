#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SZ 20

void farray(int array[]) {
    int c = 0;

    for(int i = 0; i < SZ;  i++) {
        array[i] = c + rand() % 30;
    }
}

void parray(int array[]) {
    for(int i = 0; i < SZ;  i++) {
        printf("%d, ", array[i]);
    }
    puts("");
} 
