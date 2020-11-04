#include <stdio.h>
#include <string.h>

int main() {
    /* fseek(f, cмещение, позиция) : SEEK_SET - позицию в начало,
        SEEK_CUR - текущей, SEEK_END - конец файла */
    /* ftell(f) - текущее смещение */
    FILE * f = fopen("input.txt", "r");
    /*fseek(f, 1, SEEK_CUR);
    printf("%d\n", (int) ftell(f));
    fseek(f, 1, SEEK_CUR); <=> fseek(f, 2, SEEK_CUR); 
    
    printf("%d\n", (int) ftell(f));
    fseek(f, 1, SEEK_SET);
    printf("%d\n", (int) ftell(f));
    int c = fgetc(f);*/
    fseek(f, -1, SEEK_END);
    printf("%d\n", (int) ftell(f));
    /*putc(c, f);*/
    printf("\n");
}