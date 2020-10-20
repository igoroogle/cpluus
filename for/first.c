#include <stdio.h>

int main() {
    /*for (int i = 0, j = 1; i + j < 10; i = j, j = j + 1) {
        printf("%d %d\n", i, j);
    }*/

    /*int sum = 0, i = 1;
    for (; i <= 10; i = i + 1, sum = sum + i);
    printf("%d\n", sum);*/

    int i = 0;
    /*while (1) {
        i = i + 1;
        printf("%d\n", i);
        if (i == 10) {
            break;
        }
    }

    i = 0;*/
    for(;;) {
        i = i + 1;
        printf("%d\n", i);
        if (i == 10) {
            break;
        }
    }


}