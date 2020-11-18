#include <stdio.h>

int main() {
    int a = 3, b = 4;
    int *pa = &a, *pb = &b;

    if (pa != pb) {
        puts("pa != pb");
    }

    int ar[21];
    int* cnt = ar;
    cnt += 10;

    printf("%p\n", cnt);
    printf("%p\n", ar);
    printf("%p\n", cnt + 10);

    if (cnt == (ar + 10)) {
        printf("equal\n");
    }

    /* можем сравнивать и проверять указывает ли
        на одну ячейку памяти или нет*/
    /* printf("%p\n", ar - ar); */
    printf("%p\n", NULL);
    cnt -= cnt;
    cnt[0] = 2;
}