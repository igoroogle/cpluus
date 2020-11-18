#include <stdio.h>
#include <string.h>
#include <ctype.h>

int my_isdigit(char c) {
    if (('0' <= c) && (c <= '9')) {
        return 1;
    }
    return 0;
}

int main() {
    char s[20];
    gets(s);
    int len = strlen(s);
    puts(s);
    for (int i = 0; i < len; ++i) {
        printf("%c %d %d\n", s[i], my_isdigit(s[i]), isdigit(s[i]));
    }
}