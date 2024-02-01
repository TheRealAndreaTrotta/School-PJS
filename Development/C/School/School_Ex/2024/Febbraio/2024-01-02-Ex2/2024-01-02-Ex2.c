/* Scrivi un programma che, creati due vettori di N numeri interi generati casualmente 
chiamati vet1 e vet2, memorizzi in un terzo vettore gli elementi di vet1 che non sono
in vet2. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SZ 10

#define MAX 10
#define MIN 1

int main(void){
    srand(time(NULL));

    int vectorial[SZ], vectorial2[SZ], vectorial3[SZ];
    int max = MAX, min = MIN;


    for(int i=0; i<SZ; i++){
        vectorial[i] = rand()%(max-min+1)+min;
        printf("%d, ", vectorial[i]);
    }

    printf("\n");

    for(int j=0; j<SZ; j++){
        vectorial2[j] = rand()%(max-min+1)+min;
        printf("%d, ", vectorial2[j]);
    }

    printf("\n");
    int flag = 0;
    int c = 0;

    for(int k=0; k<SZ; k++){
        for(int n=0; n<SZ; n++){
            if(vectorial[k]==vectorial2[n]){
                flag++;
            }
        }
        if(flag = 0){
            vectorial3[c] = vectorial[k];
            c++;
        }
        flag = 0;
    }

    for(int l=0; l<SZ; l++){
        printf("%d, ", vectorial3[l]);
    }

    return 0;
}