#include <stdlib.h>
#include <stdio.h>

int main() {
    int a = 3;
    void* ptr =  &a;
    *((int*) ptr) = 5;
    printf("%d\n", a);

    double b = 3.3;
    ptr = &b;
    *((double*) ptr) = 5.5;
    printf("%g\n", b);

    /* fread(void *ptr, size_t size, size_t memblocksize, FILE *)..
        fwrite(void *ptr, size_t size, size_t memblocksize, FILE *).. */
    int* ar = malloc(3 * sizeof(int));
    fread(ar, 3, sizeof(int), stdin);
    fwrite(ar, 3, sizeof(int), stdout);
    fwrite(ar, 3, sizeof(int), stderr);
    /* memset(void *ar, int val, size)
       memset(ar, 1, array_size)
    */

    /* 
        memcpy(void* ar2, void* ar1, size)
        из массива ar1 в массив ar2
        memcpy(ar2, ar1, array_size);
    */

    
} 