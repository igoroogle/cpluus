#include <stdio.h>

int main() {
    printf("Hello, World!\\%%fin\n");
    printf("\a");

    int a = 12;
    printf("%d\n", a);
    printf("%o\n", a);
    printf("%x\n", a);
    printf("\n");

    a = 0x12; /* 16-ричная */
    printf("%d\n", a);
    printf("%o\n", a);
    printf("%x\n", a);
    printf("\n");

    a = 012; /* 8-ричная */
    printf("%d\n", a);
    printf("%o\n", a);
    printf("%X\n", a);
    printf("\n");
}