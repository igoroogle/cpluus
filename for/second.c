#include <stdio.h>

int main() {

    /*for (int i = 0; i < 10; ++i) {
        printf("%d ", i);
    }
    printf("\n");

    for (int i = 0; i < 10; i++) {
        printf("%d ", i);
    }
    printf("\n");*/

    printf("postfix: ");
    int i = 0;
    while (i < 10) {
        printf("%d ", i++);
    }
    printf("\n");

    printf("prefix: ");
    i = 0;
    while (i < 10) {
        printf("%d ", ++i);
    }
    printf("\n");
}