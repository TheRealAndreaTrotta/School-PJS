#include <stdio.h>
#include <stdint.h>

int main(void) {

    // IP_0 = 192.168.1.1; IP_1 = 192.168.1.5;  
    uint32_t ip_0 = (192u * 256u * 256u * 256u) + (168u * 256u * 256u) + (1u * 256u) + 1u;
    uint32_t ip_1 = (192u * 256u * 256u * 256u) + (168u * 256u * 256u) + (1u * 256u) + 5u;
    
    //printf("%u\n", ip_0); // IP0 convertito in intero decimale
    //printf("%u\n", ip_1); // IP1 convertito in intero decimale

    int difference = ip_1 - ip_0 + 1;   // Aggiungo uno per includere l'indirizzo in se

    printf("\nThe differenze between IP::192.168.1.1 and IP::192.168.1.5 is %d\n", difference);

    return 0;
}

// da migliorare, questo programma determinal solo la distanza tra questi due IP non di tutti quelli proponibili