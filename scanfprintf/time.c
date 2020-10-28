#include <stdio.h>

int main() {
    int h, m, s;
    /*int ret_scanf =  scanf("%d:%d:%d", &h, &m, &s);
    printf("%d\n", ret_scanf);*/

    scanf("%d : %d : %d", &h, &m, &s);
    printf("%02d:%02d:%02d\n", h, m, s);
    printf("%d:%02d:%02d\n", h, m, s);
}