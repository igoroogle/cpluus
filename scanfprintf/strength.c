#include <stdio.h>

int main() {
    long double ans = 228.224;
    printf("%+025.5Le\n", ans);
    printf("%+025.5Lf\n", ans);
}