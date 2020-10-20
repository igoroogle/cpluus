#include <stdio.h>

int a[10];

int main() {
    int* b = a;
    b += 2;
    for (int i = 0; i < 10; ++i) {
        a[i] = i;
    }

    /*int i;
    for (i = 0; i < 10; ++i) {
        printf("%d ", a[i]);
        printf("%d ", i[a]);
        printf("%d ", *(i + a));
        printf("%d ", *(a + i));
    }*/
    a[1] = 7;
    printf("%d\n", b[-1]);
}