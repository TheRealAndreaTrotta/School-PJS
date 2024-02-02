/* Scrivi un programma che, creati due vettori di N numeri interi generati casualmente 
chiamati vet1 e vet2, memorizzi in un terzo vettore gli elementi di vet1 che non sono
in vet2. */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SZ 20

#define MAX 10
#define MIN 1

int main(void){
    srand(time(NULL));

    int vet1[SZ], vet2[SZ], vet3[SZ];
    int lenght = (sizeof vet1) / (sizeof vet1[0]);
    int i, j, k = 0;
    int flag = 0;

    for(i = 0; i < lenght; i++){
        vet1[i] = rand()%(MAX-MIN+1)+MIN;
    }
    for(i = 0; i < lenght; i++){
        vet2[i] = rand()%(MAX-MIN+1)+MIN;
    }

    for(i = 0; i < lenght; i++){
        vet3[i] = 0;
    }

    for(i = 0; i < lenght; i++){
        for(j = 0; j < lenght; j++){
            if(vet1[i] == vet2[j]){
                flag++;
            }
        }
        if(flag == 0){
            vet3[k] = vet1[i];
            k++;
        }
        flag = 0;
    }

    for(i = 0; i < lenght; i++){
        printf("%d ", vet1[i]);
    }
    printf("\n");
    for(i = 0; i < lenght; i++){
        printf("%d ", vet2[i]);
    }
    printf("\n");
    for(i = 0; i < lenght; i++){
        if(vet3[i] != 0){
            printf("%d ", vet3[i]);
        }
    }
    printf("\n");

    return 0;
}