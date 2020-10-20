#include <stdio.h>

int main() {
    /* 1, 1, 2, 3.. */
    /*int n, a, b, i;
    scanf("%d", &n);
    for (a = 1, b = 1, i = 1; i < n; b = a + b, a = b - a, ++i);
    printf("%d %d %d\n", i, a, b);*/
    /* int a = 1; */
    /* a += 2;  a = a + 2; */
    /* *, +, /, %, -, ^, &, |, <<, >>, ||, && */
    for (int i = 0; i <= 10; i += 2) {
        printf("%d\n", i);
    }
}