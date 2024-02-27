#include <stdbool.h>
#include <stdio.h>

bool is_valid_ip(const char *addr);

int main(void){
    char IP[] = "12.255.56.1";

    printf("Result: %d",is_valid_ip(IP));
    return 0;
}

bool is_valid_ip(const char *addr){
    int ip[4]; 

    int result = sscanf(addr, "%d.%d.%d.%d", &ip[0], &ip[1], &ip[2], &ip[3]);

    if (result == 4) {
        for (int i = 0; i < 4; i++) {
            if (ip[i] < 0 || ip[i] > 255) {
                return false; 
            }
        }
        return true; 
    }

    return false; 
}
