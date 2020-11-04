#include <stdio.h>
#include <string.h>

int main() {
    fprintf(stdout, "%d", 3);
    fflush(stdout);
    fprintf(stderr, "%d", 4);
} 