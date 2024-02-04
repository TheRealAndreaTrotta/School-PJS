#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
  char vet[50], vet2[50];
  int j=0;
  int flag=0;
  int c=0;
//input prima stringa    
      printf("inserisci stringa:");
      gets(vet);
  
//input sottostringa
      printf("inserisci una sottostringa da individuare nella frase precedente:");
      gets(vet2);
  
//verifico se la sottostringa Ã¨ presente nella stringa precedente
      for (int i=0; i<strlen(vet); i++){
        flag=0;
        while (j<strlen(vet) && flag == 0){
          
          if(vet[j]==vet2[i]){
             flag=1;
          }
          else{
            i=0;
            flag=0;
           //? c++;
           }
          j++; 
         }   
      }
  printf("la sottostringa si trova alla posizione numero %d della frase inserita", c);
          

    return 0;
}