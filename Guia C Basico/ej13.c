#include <stdio.h>
#include <stdint.h>

int main() {
    uint32_t a[] = {0, 0, 0, 0, 0, 0};
    for (int i = 0; i < 60000000; i++) {
        int res = rand() % 6;
        a[res]++;
    }
    for (int i = 1; i < 6; i++) {
        printf("Veces que salio %d = %d\n", i, a[i]);
    }
    printf("Veces que salio 6 = %d\n", a[0]);
}