#include <stdio.h>

int main() {
    int val = 5;
    printf("%p\n", &val); // получаем адрес переменной
    printf("%d\n", *(&val)); // разименовываем указатель

    /*int*
    unsigned*
    char*
    double* */
    int * pval = &val;
    *pval = 7;
    printf("%d\n", val);

    int* pval2 = pval;
    int* pval3 = &val;
    *pval2 = 3;
    printf("%d\n", val);

    *pval3 = 11;
    printf("%d\n", val);
    int **ppval = &pval; //указатель на указатель

    int superval = 228;
    int* psuperval = &superval;
    printf("superval: %d\n", superval);

    *psuperval *= 2; //меняю superval
    printf("superval: %d\n", superval);
    *ppval = psuperval;
    *pval = 1234;
    printf("superval: %d\n", superval);
}