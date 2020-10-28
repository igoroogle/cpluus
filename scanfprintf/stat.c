#include <stdio.h>

int main() {
    int val, n;
    scanf("%d%d", &val, &n);
    printf("%0*d %0*d\n", n, val, n, val * 2);

    char s[] = "String";
    printf("%025s\n", s);
}