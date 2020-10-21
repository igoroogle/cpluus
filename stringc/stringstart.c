#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char s[100] = "abcdef";
    /*for (int i = 0; i < 10; ++i) {
        if (s[i] == '\0') {
            printf("slash 0\n");
        }

        printf("%d\n", (int) s[i]);
    }*/
    /* printf("%d\n", (int) sizeof(s)); */

    fgets(s, 8, stdin);

    /*int len = 0;
    while (s[len] != '\0') {
        ++len;
    }
    printf("%d %d\n", len, (int) strlen(s));*/

    int len = strlen(s);
    for (int i = 0; i < len; ++i) {
        putchar(s[i]);
    }
    /* puts(s); */

}