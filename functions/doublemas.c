#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int** get_array(int n, int m) {
    int **a = malloc(n * sizeof(int*));
    for (int i = 0; i < n; ++i) {
        a[i] = malloc(m * sizeof(int));
    }
    return a;
}

void read_massive(int **a, int n, int m) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j)  {
            scanf("%d", &a[i][j]);
        }
    }
}

void write_massive(int **a, int n, int m) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j)  {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void clear_massive(int **a, int n, int m) {
    for (int i = 0; i < n; ++i) {
        free(a[i]);
    }
    free(a);
}

void print_line() {
    printf("---------------------\n");
}


int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    int **a = get_array(n, m);
    read_massive(a, n, m);
    print_line();
    write_massive(a, n, m);
    clear_massive(a, n, m);
}