#include <stdio.h>

int main() {
    /*int n;
    scanf("%d", &n);
    printf("n is %d\n", n);*/

    /*int a = 1, b = 2;
    scanf("%d%d", &a, &b);
    printf("%d %d\n", a, b);*/
    
    /*char s1[100] = {};
    char s2[100] = {};
    scanf("%s%s", s1, s2);
    printf("%s %s\n", s1, s2);*/
    
    /*int sum = 0, n;
    while (scanf("%d", &n) == 1) {
        sum += n;
    }
    printf("%d\n", sum);*/

    /*char s[123];
    int cnt = 0;
    while (scanf("%s", s) == 1) {
        ++cnt;
    }

    printf("%d\n", cnt);*/


    char c;
    int cnt = 0;
    while (scanf(" %c", &c) == 1) {
        ++cnt;
    }

    printf("%d\n", cnt);

}