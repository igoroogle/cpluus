#include <stdio.h>

/*int show_val(int val) {
    if (val < 0) {
        printf("we hate negative numbers\n");
        return 0;
    }
    printf("%d\n", val);
    return 0;
}*/

void show_val(int val) {
    if (val < 0) {
        printf("we hate negative numbers\n");
    }
    printf("%d\n", val);
}


int main() {
    int n;
    scanf("%d", &n);
    show_val(n);
    /* return 1; return 0; echo $? - код ошибки */
}