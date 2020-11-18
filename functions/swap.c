#include <stdio.h>

void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
    printf("inside function: a = %d,  b = %d\n", *a, *b);
}


int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    swap(&a, &b); /* поменять a и b */
    printf("outside function: a = %d,  b = %d\n", a, b);
}