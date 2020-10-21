#include <stdio.h>

int main() {
    /* stdin, stdout, stderr */
    /* putchar */
    char c;
    c = getc(stdin);
    putc(c, stdout);

    c = fgetc(stdin);
    fputc(c, stderr);

    printf("\n");
}