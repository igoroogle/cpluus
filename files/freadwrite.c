#include <stdio.h>
#include <string.h>

int main() {
    FILE * f = fopen("input.txt", "rb");
    double buf[20];
    fread(buf, sizeof(buf), 1, f);
    printf("%g\n", buf[0]);
    close(f);
}   