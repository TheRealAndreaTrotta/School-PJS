#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#define SZ 10

void farray(int array[]) {
    for(int i = 0; i < SZ; i++) {
        bool unique;
        int temp;
        do {
            unique = true;
            temp = 1 + rand() % 30;

            for(int j = 0; j < i; j++) {
                if(array[j] == temp) {
                    unique = false;
                    break;
                }
            }
        } while(!unique);
        array[i] = temp;
    }
}

void shuffle(int array[]){

}

void parray(int array[]) {
    for(int i = 0; i < SZ; i++) {
        if(i + 1 == SZ) {
            printf("%d", array[i]);
        }
        else {
            printf("%d, ", array[i]);
        }
    }
    puts("");
}