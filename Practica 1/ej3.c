#include <stdio.h>

int main(){
    char c =50;
    short s =-5000;
    int i =74200;
    long l =-1234567890;

    printf("char (%lu): %d \n", sizeof(c), c);
    printf("short (%lu): %d \n", sizeof(s), s);
    printf("int (%lu): %d \n", sizeof(i), i);
    printf("long (%lu): %ld \n", sizeof(l), l);
}