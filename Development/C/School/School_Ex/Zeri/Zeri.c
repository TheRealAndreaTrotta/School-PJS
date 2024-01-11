// Ex 2 (11/01/2024)
#include <stdio.h>
#define sz 8

int main(void) {
  int input[sz];
  int pivout = 0;
  int counter = 0, line = 1;

  for (int i = 0; i < sz; i++) {
    printf("%d) Please, enter a number: ", line);
    scanf("%d", &input[i]);
    line++;
  }

  if (input[0] > input[sz-1]) {
    pivout = input[0];
    input[0] = input[sz-1]; 
    input[sz-1] = pivout;
  }

  for (int j = 0; j < sz; j++) {
    if ((j > 0) || (j < sz-1)) {
      input[j] = 0;
    }
    printf("%d, ", input[j]);
  }

  return 0;
}