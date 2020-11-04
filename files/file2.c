#include <stdio.h>

int main() {
    FILE * foutput = fopen("input.txt", "wb");
    fprintf(foutput, "%d\n\r", 228);
    fprintf(foutput, "%d\n\r", 512);
    fclose(foutput);
}