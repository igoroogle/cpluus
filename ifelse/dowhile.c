#include <stdio.h>

int main() {
    char c = 0;

    do {
        printf("%d\n", (int) c);
        --c;
    } while (c);
}