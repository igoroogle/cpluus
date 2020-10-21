#include <stdio.h>

int main() {
    /* printf("%c", (char) 97); */
    /*for (char i = 32; i < 127; ++i) {
        putchar(i);
        putchar('\n');
    }*/

    /*printf("%d\n", (int) 'a'); 97
    printf("%d\n", (int) 'z'); 122
    printf("%d\n", (int) 'A'); 65
    printf("%d\n", (int) 'Z'); 90
    printf("%d\n", (int) '0'); 48
    printf("%d\n", (int) '9'); 57*/

    /*char c = getc(stdin);
    if ((c >= 97) && (c <= 122)) {
        printf("lower\n");
    } else if ((c >= 65) && (c <= 90)) {
        printf("upper\n");
    } else if ((c >= 48) && (c <= 57)) {
        printf("digit\n");
    } else {
        printf("other\n");
    }*/

    char c = getc(stdin);
    if ((c >= 'a') && (c <= 'z')) {
        printf("lower\n");
    } else if ((c >= 'A') && (c <= 'Z')) {
        printf("upper\n");
    } else if ((c >= '0') && (c <= '9')) {
        printf("digit\n");
    } else {
        printf("other\n");
    }

}