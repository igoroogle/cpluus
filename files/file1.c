#include <stdio.h>

int main() {
    /* FILE * f = fopen("/path/to/file", mode); */
    /* FILE * f = fopen("input.txt", "r"); на чтение */
    /* FILE * f = fopen("/unexist_catalog/output.txt", "w");*/ 
    /* FILE * f = fopen("output.txt", "a"); дописать в конец*/ 
    /* r+, w+, a+ */
    /* rt - текстовый, rb - бинарный, wb, ab.... */
    /* fclose(f);  0 - если успешно закрыт, 1 - иначе (ошибка) */
    /* "Hello\n" -> Linux (\n), Windows -> "\r\n", Mac -> "\n\r" */
    /* fseek(f, cмещение, позиция) : SEEK_SET - позицию в начало,
        SEEK_CUR - текущей, SEEK_END - конец файла */

    FILE * finput = fopen("input.txt", "r");
    FILE * foutput = fopen("output.txt", "w");
    /* fseek(f, 1, SEEK_SET); */
    int n;
    fscanf(finput, "%d", &n);
    fprintf(foutput, "%d\n", n * 2);
    fclose(finput);
    fclose(foutput);
    
    /*FILE * fapp = fopen("output.txt", "a");
    fprintf(fapp, "\nIt's file");
    fclose(fapp);*/

    /* fgetc(f) -> int return */
    /* fputc(c, f) */

}