#include <stdio.h>
#include <math.h>

typedef struct {
    double x1;
    double x2;
    int cnt;
} roots;

roots root(double a, double b, double c) {
    double d = b * b - 4.0 * a * c;
    roots result;
    if (d < 0) {
        result.cnt = 0;
        return result;
    }

    result.x1 = (-b - sqrt(d)) / (2.0 * a);

    if (d == 0) {
        result.cnt = 1;
        return result;
    }

    result.x2 = (-b + sqrt(d)) / (2.0 * a);
    result.cnt = 2;
    return result;
}


int main() {
    /*roots result;
    result.x1 = 0.1;
    result.x2 = 0.2;
    printf("%lf %lf\n", result.x1, result.x2);*/

    double a, b, c;
    scanf("%lf%lf%lf", &a, &b, &c);
    roots result = root(a, b, c);
    printf("%d %lf %lf\n", result.cnt, result.x1, result.x2);
}