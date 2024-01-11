/*
Ex 1 (11/01/2024)
Scrivi un programma che riceva in input un array di 8 numeri interi e calcoli quanti 
elementi dell'array sono maggiori dell'elemento in ultima posizione.
*/

#include <stdio.h>
#define sz 8

int main(void) {
  int input[sz];
  int counter = 0, line = 1;

  for (int i = 0; i < sz; i++) {
    printf("%d) Please, enter a number: ", line);
    scanf("%d", &input[i]);
    line++;
  }

  for (int j = 0; j < sz - 1; j++) {
    if (input[j] > input[sz - 1]) {
      counter++;
    }
  }

  printf("\nThere are %d numbers that are greater than %d", counter,
         input[sz - 1]);

  return 0;
}