#include <stdio.h>


int main() {
    /*int a[10][10] = {};
    a[2, 3, 3, 4][8] = 4;

    for (int i = 0; i < 10; ++i) {
        a[i][0] = i;
        for (int j = 0; j < 10; ++j) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }*/
    int a[2][2][2] = {{{0, 0}, {0 1}}, {{1, }, {6, 7}}};

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            for (int k = 0; k < 2; ++k) {
                printf("%d %d %d %d\n", i, j, k, a[i][j][k]);
            }
        }
    }

}