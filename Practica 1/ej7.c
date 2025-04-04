#include <stdio.h>

int main() {
    int a = 5;
    int b = 3;
    int c = 2;
    int d = 1;

    printf ("a + b * c / d = %u\n", a + b * c / d);
    printf ("a mod b = %u\n", a % b);
    printf ("a = %x\n", a);
    printf ("not a = %x\n", ~a);

    return 0;
}