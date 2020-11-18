#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    int **a = malloc(sizeof(int*) * n);
    for (int i = 0; i < n; ++i) {
        a[i] = malloc(sizeof(int) * m);
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("----------\n");

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < n; ++i) {
        free(a[i]);
    }
    free(a); 
}