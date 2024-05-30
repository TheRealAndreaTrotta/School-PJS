#include "mylib.c"

int main(void) {
    char* sentence = malloc(LEN * (sizeof(char)));

    if(sentence == NULL) {
        fprintf(stderr, "ERROR: Allocation\n");
    }

    printf("Please, write something: ");
    fgets(sentence, LEN, stdin); printf("%s", sentence);

    free(sentence);
    
    return 0;
}