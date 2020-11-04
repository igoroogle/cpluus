#include <stdio.h>
#include <string.h>

int main() {
    FILE * f = fopen("out2.txt", "w");
    /* freopen("out3.txt", "w", f); */
    fputs("stdout\n", stdout);
    fputs("stderr\n", stderr);
    fputs("file2\n", f);
    fputc('a', stdout);
}