#include <stdio.h>
#include <stdint.h>

int main() {
    uint32_t a[] = {1, 2, 3, 4};
    int r = 2;
    int largo_a = sizeof(a) / 4;
    uint32_t b[largo_a];
    for (int i = 0; i < largo_a; i++) {
        int n = (i + largo_a - r) % largo_a;
        b[n] = a[i];
    }
    for (int i = 0; i < largo_a; i++) {
        printf("b[%d] = %d\n", i, b[i]);
    }
    return 0;
}