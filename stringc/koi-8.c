#include <stdio.h>

int main() {
    int c;
    while ((c = getc(stdin)) != EOF) {
        if (c > 127) {
            c -= 128;
        }
        putchar(c);
    }
    printf("\n");
}