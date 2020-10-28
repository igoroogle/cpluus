#include <stdio.h>

int main() {
    char a = 0, b = 0, c = 0;
    scanf("%c %c %c", &a, &b, &c); /* с пробельными символами, иначе %c%c если подряд */
    printf("%hhd %hhd %hhd\n", a, b, c);
    printf("%c%c%c\n", a, b, c);
}