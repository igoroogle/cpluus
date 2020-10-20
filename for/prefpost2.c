#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;
    scanf("%d", &n);

    bool flag = (n > 10);
    flag ||= (n < 20);
    printf("%d\n", (int) flag);
}