#include <stdio.h>

int main() {
    int a[21] = {};
    int* ar2 = a;
    int* cnt = a;
    cnt += 10;
    cnt[0] = 10;

    for (int i = 0; i < 21; ++i) {
        printf("%d %d\n", i, *ar2);
        ++ar2;
    }

    for (int i = -10; i <= 10; ++i) {
        cnt[i] = i;
    }

    printf("print cnt:\n");
    for (int i = -10; i <= 10; ++i) {
        printf("%d\n", cnt[i]);
    }
}