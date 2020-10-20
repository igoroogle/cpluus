#include <stdio.h>

int gcd_loop(int a, int b) {
    while (b) {
        int r = a % b;
        b = a;
        a = r;
    }
    return a;
}

int gcd_rec(int a, int b) {
    return b ? gcd_rec(b, a % b) : a;
}

int main() {
    int a, b;
    scanf("%d%d", &a, &b);

    /*&& - and*/
    /*|| - or*/
    /*! - not*/

    /*if () {
        printf("not a\n");
    }

    if (a || b) {
        printf("or\n");
    }

    if (a && !b) {
        printf("and\n");
    }*/

    int max_val = a;
    if (b > a) {
        max_val = b;
    }
    printf("%d\n", max_val);

    /*(условие) ? true : false;*/
    printf("%d\n", (a > b) ? a : b);

    int c;
    scanf("%d", &c);
    printf("%d\n", (a > b) ? (a > c) ? a : c : (b > c) ? b : c);
}