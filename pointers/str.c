#include <stdlib.h>
#include <stdio.h>

int main() {
    char *s1, *s2;
    s1 = malloc(sizeof(char) * 10);
    s2 = malloc(sizeof(char) * 10);
    char *s1safe = s1;
    char *s2safe = s2;

    /*
    scanf("%d\n", &n);
    char ar[n] <=> (gcc)
    char *ar = malloc(n * sizeof(char));
    */

    gets(s1);
    gets(s2);
    puts(s1);
    puts(s2);


    if ((s1 != NULL) && (s2 != NULL)) {
        while ((*s1 != '\0') && (*s2 != '\0') && (*s1 == *s2)) {
            ++s1;
            ++s2;
        }
    }

    //первый несовпадающий символ
    printf("%c %c\n", *s1, *s2);
    free(s1safe);
    free(s2safe);
} 