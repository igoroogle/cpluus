#include <stdio.h>


int main() {
    char a[100] = {1, 2, 3, 4, 5};
    /*for (int i = 0; i < 5; ++i) {
        printf("%d ", a[i]);
    }
    printf("\n");*/
    printf("%d\n", (int) sizeof(a));
    /* printf("%d\n", (int) sizeof(char)); */
}