#include <stdio.h>


int main() {
    int a[5][10];
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 10; ++j) {
            a[i][j] = i + j;
        }
    }

    for (int i = 0; i < 5; ++i) {
        int j = i;
        for (int j = 0; j < 10; ++j) {
            printf("%d ", a[i][j]);
        }
        printf("%d\n", j);
    }
}