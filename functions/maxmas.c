#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void read_massive(int *a, int n) {
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
    }
}

void write_massive(int *a, int n) {
    for (int i = 0; i < n; ++i) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void print_line() {
    printf("---------------------\n");
}

int max_val(int *a, int n) {
    int ans = a[0];
    for (int i = 1; i < n; ++i) {
        if (a[i] > ans) {
            ans = a[i];
        }
    }
    return ans;
}


int main() {
    int n;
    scanf("%d", &n);
    int *a = malloc(sizeof(int) * n);
    read_massive(a, n);
    print_line();
    write_massive(a, n);
    printf("%d\n", max_val(a, n));
    free(a);
}