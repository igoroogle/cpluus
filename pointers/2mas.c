#include <stdlib.h>
#include <stdio.h>

int main() {
    /* массив a[0] a[1] .. (одномерный) int* как указатель,
        равный a и int как элементы */
    /* 2-мерный a[0][0].. int** как указатель равный a
        и int* как элементы */
    int n, m;
    scanf("%d%d", &n, &m);

    /* создаём двумерный динамический массив */
    int** a = malloc(sizeof(int*) * n);
    for (int i = 0; i < n; ++i) {
        a[i] = malloc(sizeof(int) * m);
    }

    /* инициализируем (заполняем) двумерный динамический массив */
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            scanf("%d", &a[i][j]);
        }
    }

    /* выводим */
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    /* очищаем массив */
    for (int i = 0; i < n; ++i) {
        free(a[i]);
    }
    free(a);
}