#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main() {
    /*unsigned char c = fgetc(stdin);
    printf("%d\n", (int) c);*/
    /* char s[100]; */
    /* fgets(s, 100, stdin); */
    /* scanf("%2s", s); */
    /* puts(s); */

    /*char s[] = "123";
    int x;
    sscanf(s, "%d", &x);
    printf("%d\n", x + 3);*/

    /*char s[100];
    int n;
    scanf("%d", &n);
    sprintf(s, "%d", n + 10);
    putchar(s[2]);*/

    /*  atof(s) - преобразовывает в double
        atoi(s) - преобразовывает в int
        atol(s) - в long
        atoll(s) - в long long int
    */

    char s[] = "1234";
    int n = atoi(s);
    printf("%d\n", n + 1);

}