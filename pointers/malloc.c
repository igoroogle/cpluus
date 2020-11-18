#include <stdlib.h>
#include <stdio.h>

int main() {
    /*  void malloc(size) - выделяет память
        void free(*ptr) - освобождает память
    */

    /* int a = 3;
    int *pa = &a; */
    int *pa;
    pa = malloc(sizeof(int)); /* создали как в коментарии выше */

    if (pa == NULL) {
        printf("no memory\n");
        return 0;
    }
    
    *pa = 3;
    printf("%d\n", *pa);

    /* создаём динамический массив длины 4*/
    int *ar;
    ar = malloc(sizeof(int) * 4);
    ar[3] = 10;
    printf("%d\n", ar[3]);
    free(ar);
    free(pa);
}