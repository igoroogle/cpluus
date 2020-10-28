#include <stdio.h>

int main() {
    char format_input[] = "%d%d%d";
    char format_output[] = "%d %d %d %d %d %d\n";

    int a, b, c, n, m, k;
    scanf(format_input, &n, &m, &k);
    scanf(format_input, &a, &b, &c);
    printf(format_output, a, b, c, n, m, k);
}