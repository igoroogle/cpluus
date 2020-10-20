#include <stdio.h>


int main() {

    /*int a[2][2][2];
    /*
        0 0 {1, 0}
        0 1 1 {0, 1}
        1 0 1 {0, 1}
        1 1 1 {0, 1}
    */

    /*for (unsigned int i = 0; i < 2; ++i) {
        for (unsigned int j = 0; j < 2; ++j) {
            for (unsigned int k = 0; k < 2; ++k) {
                a[i][j][k] = (i & j) | k; <<
                printf("%d %d %d %d\n", i, j, k, a[i][j][k]);
            }
        }
    }*/

    /*for (unsigned int step = 0; step < 10; ++step) {
        printf("%u %u\n", step, (1 << step));
    }*/

    /*"<<=, >>=, |="
    for (unsigned int pow_val = 1; pow_val <= 1024; pow_val <<= 1) {
        printf("%u\n", pow_val);
    }*/
    
    /*int n = -1;
    unsigned m = 0;
    --m;
    printf("%d %u %d %u\n", ~n, ~m, n, m);) */

    /*
        0 0 0
        0 1 1
        1 0 1
        1 1 0
    */
    unsigned a, b;
    scanf("%u%u", &a, &b);
    a ^= b; /* a ^ b */
    b ^= a; /* a ^ b ^ a = b */
    a ^= b; /* a ^ b ^ b = a */
    printf("%u %u\n", a, b);
    /* a ^ a = 0 */
}