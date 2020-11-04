#include <stdio.h>
#include <string.h>

int main() {
    FILE * finput = fopen("input.txt", "w");
    int n = 200;
    for (int i = 0; i < n; ++i) {
        fprintf(finput, "%d\n", i);
        if (i == 16) {
            fputc(26, finput);
        }
    }
    fclose(finput);
}
/* 228\n\r512\n\r */