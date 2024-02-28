#include <stdio.h>

void switch_2(int *a, int *b);

int main(void){

    int x = 3, y = 6;

    printf("x value: %d\ty value: %d\n", x, y);
    switch_2(&x, &y);
    printf("x value: %d\ty value: %d\n", x, y);
    
    return 0;
}

void switch_2(int *a, int *b){
    int temp;
    
    temp = *a;
    *a = *b;
    *b = temp;
}