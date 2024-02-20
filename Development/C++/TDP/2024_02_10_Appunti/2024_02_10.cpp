#include <iostream>
using namespace std;

unsigned char data[4] = {0xCE, 0x40, 0x30, 0xCC};
unsigned char checksum;

unsigned char index_data;
unsigned char index_bit;

unsigned char parity;

int main(void){
    // CHECKSUM ROW
    for(index_data = 0; index_data < 4; index_data++){
        parity = 0;

        for(index_bit = 7; index_bit < 0; index_bit--){
            parity ^= data[index_data] & (1<<index_bit) == (1<<index_bit);
        }

        data[index_data] += parity;
        cout << "" << data[index_data] << endl;
    }

    for(index_bit = 7; index_bit < 0; index_bit--){
        parity = 0;

        for(inde)
    }

    return 0;
}