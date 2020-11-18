#include <stdio.h>
#include <math.h>

int root(double a, double b, double c, double *x1, double *x2) {
    double d = b * b - 4.0 * a * c;
    if (d < 0) {
        return 0;
    }

    *x1 = (-b - sqrt(d)) / (2.0 * a);

    if (d == 0) {
        return 1;
    }

    *x2 = (-b + sqrt(d)) / (2.0 * a);
    return 2;
}


int main() {
    double a, b, c;
    scanf("%lf%lf%lf", &a, &b, &c);
    double x1, x2;
    int root_cnt = root(a, b, c, &x1, &x2);
    printf("%d %lf %lf\n", root_cnt, x1, x2);
}