#include <stdio.h>
#include <ctype.h>

int main() {
    
    /*char c = getc(stdin);
    if ((c >= 'A') && (c <= 'Z')) {
        c += 'a' - 'A';
    } else if ((c >= 'a') && (c <= 'z')) {
        c -= 'a' - 'A';
    }
    putchar(c);
    printf("\n");*/
    char c = getc(stdin);
    if (isspace(c)) {
        printf("isspace\n");
    }

    if (isupper(c)) {
        printf("isupper\n");
    }

    if (islower(c)) {
        printf("islower\n");
    }

    if (isdigit(c)) {
        printf("isdigit\n");
    }

    if (isalpha(c)) {
        printf("isalpha\n");
    }

    tolower(c);
    toupper(c);
}