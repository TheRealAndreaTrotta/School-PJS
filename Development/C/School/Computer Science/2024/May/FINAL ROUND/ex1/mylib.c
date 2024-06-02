#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SZ 10

int input(const char* prompt) {
    int value;

    printf("%s", prompt); scanf("%d", &value);

    return value;
}

void farray(int array[]) {
    for(int i = 0; i < SZ;  i++) {
        array[i] = 1 + rand() % 9;
    }
}

void parray(int array[]) {
    for(int i = 0; i < SZ;  i++) {
        if(i == SZ) {
            printf("%d\n", array[i]);
        }
        else {
            printf("%d, ", array[i]);
        }
    }
    puts("");
}

void sos(int array[], int x, int y) {
    for(int i = 0; i < SZ;  i++) {
        if(array[i] == x) {
            array[i] = y;
        }
    }
}   