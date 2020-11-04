#include <stdio.h>
#include <string.h>

int main() {
    FILE * f = fopen("input.txt", "rt");
    if (f == NULL) {
        perror("Ошибка");
        return 0;
    }
    printf("%d\n", ferror(f)); // выводит ненулевое, если ошибка
    /* clearerr(f) - сброс ошибки */
    /* remove("name.txt") и rename("name.txt") (удалить и переименовать файл*/

    char buf[20];
    while (!feof(f)) {
        int c = getc(f);
        if (c == 'a') {
            ungetc('A', f);
        } else {
            ungetc(c, f);
        }

        fgets(buf, sizeof(buf), f);
        fputs(buf, stdout);
    }
    fclose(f);
} 