#include <stdio.h>

/* int n = 10; - глобальные переменные зло */

int is_prime(int n) {
    if (n == 1) {
        return 0;
    }

    for (int i = 2; i * i <= n; ++i) {
        if (!(n % i)) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", is_prime(n));
}