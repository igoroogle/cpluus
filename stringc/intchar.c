#include <stdio.h>
#include <ctype.h>

int main() {
    int c;
    printf("%d\n", (int) EOF);
    while ((c = getc(stdin)) != EOF) {
        printf("%d\n", c);
    }
}