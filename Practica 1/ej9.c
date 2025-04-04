#include <stdio.h>
#include <stdint.h>

int main() {
    uint32_t a = 0b11100000000000000000000000000000;
    uint32_t b = 0b00000000000000000000000000000111;
    uint32_t m = 0b00000000000000000000000000000111;
    
    printf("%x\n", (a >> 29) == (b & m));

    uint32_t c = 0b10100000000000000000000000000000;

    printf("%x\n", (c >> 29) == (b & m));
    
    return 0;
}