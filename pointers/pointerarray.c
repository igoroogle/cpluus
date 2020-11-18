#include <stdio.h>

int main() {
    /*
    int* pa;
    pa++, ++pa, pa = pa + 1 pa += 1, same
    pa--, --pa, pa = pa - 1 pa -= 1 same
    */
    
    int ar[10]; // ar[0] ar[1] .. ar[9]
    //ar - указатель на первый элемент массива
    int asdf;
    int* ar2 = ar;
    printf("%d\n", (int) ar2);
    /*ar2++; можно инкрементировать указатель, 
        прибавит пропорционально sizeof(int) */

    /*ar2--; можно делать декремент указателя, 
        отнять пропорционально sizeof(int) */

    printf("%d\n", (int) sizeof(int));
    printf("%d\n", (int) ar2);
    /* printf("%d\n", (int) (ar2 + sizeof(int)));*/
    printf("------\n");

    for (int i = 0; i < 10; ++i) {
        printf("%p %p %p\n", &(ar[i]), ar + i, ar2); /* &(ar + i) */ 
        printf("%d\n", (int) (ar + i));
        *ar2 = i;
        ++ar2;
        /* a + i <=> арифм. a + i * sizeof(int) для инта */
    }

    printf("%p\n", &asdf);
    printf("print elements\n");
    for (int i = 0; i < 10; ++i) {
        printf("%d\n", ar[i]);
    }

    --ar2; // вернулся к последнему элементу массива
    *ar2 = 11;
    printf("%d\n", ar[9]);
    ar2[-2] = 228;

    printf("print elements 2\n");
    for (int i = 0; i < 10; ++i) {
        printf("%d\n", ar[i]);
    }
}