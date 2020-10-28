#include <stdio.h>

int main() {
    /* a * b = dd 9 символов*/
    int n, m;
    scanf("%d", &n);

    for (int i = 0; i <= n; ++i) {
        for (int j = 0; j <= 4; ++j) {
            printf("%2d * %2d = %2d\t", j, i, i * j);
        }
        printf("\n");
    }

    printf("\n\n");

    for (int i = 0; i <= n; ++i) {
        for (int j = 5; j <= 9; ++j) {
            printf("%2d * %2d = %2d\t", j, i, i * j);
        }
        printf("\n");
    }
}