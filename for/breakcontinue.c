#include <stdio.h>

int main() {
    int i = 0;
    for (; i < 6; ++i) {
        printf("first %d\n", i);
        if (i == 7) {
            break;
        }

        printf("second %d\n", i);
        if (i == 5) {
            continue;
        }

        printf("third %d\n", i);
    }


    printf("end %d\n", i);
}