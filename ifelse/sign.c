#include <stdio.h>

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d\n", (a - 1) / b + 1);
    /* 10000000 */
    /* 01000000 */

    if (a % b << 0)
        printf("%d\n", a / b + 1);
    else
        printf("%d\n", a / b);
}