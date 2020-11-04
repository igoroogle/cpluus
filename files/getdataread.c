#include <stdio.h>
#include <string.h>

int main() {
    FILE * f = fopen("input.txt", "wb");
    /*char buf[] = "abc";*/
    char buf[] = "abc";
    fwrite(buf, sizeof(buf), 1, f);
}