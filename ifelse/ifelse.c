#include <stdio.h>

int main() {
    int a, b;
    scanf("%d%d", &a, &b);

    if (a < b){
        printf("<\n");
    }

    if (a > b) {
        printf(">\n");
    }

    if (a <= b) {
        printf("<=\n");
    }

    if (a >= b) {
        printf(">=\n");
    }

    if (a != b) {
        printf("!=\n");
    }

    if (a == b) {
        printf("==\n");
    }

    if ((a = b)) {
        printf("=\n");
    }


    if ((a <= 5 <= b)) {
        printf("5\n");
    }
}