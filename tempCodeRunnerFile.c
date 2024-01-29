#include <stdio.h>
#include <string.h>

int main(void) {
    char array[15];
    char parola;
    int i=0;
    int c=0;
    int lenght = sizeof(array)/sizeof(array[i]);

    printf("inserisci una parola: ");
        scanf("%s", &parola);

    for(i=0; i<lenght; i++){
    if(array[i] == 'a' ||
        array[i] == 'A'||
        array[i] == 'e'||
        array[i] == 'E'||
        array[i] == 'i'||
        array[i] == 'I'||
        array[i] == 'o'||
        array[i] == 'O'||
        array[i] == 'u'||
        array[i] == 'U')
        c++;
    }

    printf("%d", c);

    
    return 0;
}