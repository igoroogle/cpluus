#include <stdio.h>

int main() {
    FILE * finput = fopen("input.txt", "r");
    int sum = 0, num;
    while (!feof(finput)) {
        fscanf(finput, "%d", &num);
        printf("%d\n", num);
        sum += num;
    }

    printf("%d\n", sum);
    fclose(finput);
}
/* 228\n\r512\n\r */