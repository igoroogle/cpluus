#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    while (n--) {
        int x;
        scanf("%d", &x);

        if (x == -1) {
            break;
        }

        if (x == 13) {
            continue;
        }

        printf("%d\n", x + 1);
    }
}