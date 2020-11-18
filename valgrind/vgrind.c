#include <stdio.h>
#include <stdlib.h>

int main() {
    int *val = malloc(sizeof(int));
    *val = 3;
    printf("%d\n", *val);
    free(val);
}