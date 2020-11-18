#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void toupper(char s[]) { /* 1) char s[22], 2) char s[], 3) char *s */
    int len = strlen(s);
    for (int i = 0; i < len; ++i) {
        if (islower(s[i])) {
            s[i] += 'A' - 'a';
        }
    }
}


int main() {
    char s[22];
    scanf("%s", s);
    toupper(s);
    printf("%s\n", s);
}