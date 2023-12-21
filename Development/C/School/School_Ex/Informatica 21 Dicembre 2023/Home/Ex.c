#include <stdio.h>

int main(void){
    int mn[] = {1,2,3};

    printf("%lu\n", sizeof(mn)); //print Byte value (4*3)
    printf("There is %d numbers in this array!\n",(sizeof(mn)/sizeof(mn[0])));
    return 0;
}