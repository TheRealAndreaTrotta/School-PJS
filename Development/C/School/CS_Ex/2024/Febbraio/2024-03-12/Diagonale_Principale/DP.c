#include <stdio.h>

#define rows 5
#define column 5

int main(void){
    int matrix[rows][column];

    for(int i=0; i<column; i++){
        for(int j=0; j<rows; j++){
            if(j==i){
                matrix[i][j] = 1;
            }
            else{
                matrix[i][j] = 0;
            }
            printf("%d  ", matrix[i][j]);
        }
        puts("");
    }
    return 0;
}