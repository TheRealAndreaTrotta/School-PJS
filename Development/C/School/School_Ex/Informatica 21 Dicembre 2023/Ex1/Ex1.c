/*All'interno din un array di 10 elenti(vet[10]), l'utente inserirà 10 numeri
trasformare in zeri i numeri pari*/

#include <stdio.h>
#define sz 10

int main(void){
    int vet[10];

    for(int i=0; i<10; i++){
        printf("Please, enter number: ");
        scanf("%d", &vet[i]);
    }
 
    for(int j=0; j<10; j++){
        if(vet[j]%2==0){
            vet[j]=0;
        }
    }

    for(int k=0; k<10; k++){
        printf("%d, ", vet[k]);
    }
    return 0;
}