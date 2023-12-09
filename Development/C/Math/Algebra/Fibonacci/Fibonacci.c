#include <stdio.h>

int main(void) {
    int input = 0, first = 0, second = 1, next = 0;

    printf("Please enter a number: ");
    scanf("%d", &input);

    printf("Fibonacci series up to %d terms: \n", input);

    for (int i = 0; i < input; i++) {
        printf("%d ", first);
        next = first + second;
        first = second;
        second = next;
    }

    return 0;
}
