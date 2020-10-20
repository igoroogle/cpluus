#include <stdio.h>

int a[100] = {0, 1, 4, 9, 16, 25, 36, 49, 64, 81};

int main() {
    /*for (int i = 0; i < 100; ++i) {
        a[i] = i * i;
    }*/

    int n;
    scanf("%d", &n);
    printf("%d %d\n", n * n, a[n]);
}