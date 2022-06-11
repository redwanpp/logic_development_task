//program to display multiple variables

#include <stdio.h>

int main() {
    //declaration
    int a = 125, b = 12345;
    long ax = 1234567890;
    short s = 4043;
    float x = 2.13459;
    double dx = 1.1415927;
    char c = 'W';
    unsigned long ux = 2541567890;

    printf("%d+ %c,", a, c);
    printf("%lf, ", dx);
    printf("%lf, ", dx);
    printf("%d + %ld,", (int)dx, ax);
    printf("%d + %f, ", a, x);
    printf("%hi + %d, ", s, b);
    printf("%ld + %d, ", ax + b);
    printf("%hu + %c, ", s, c);
    printf("%ld + %c, ", ax, c);
    printf("%ld + %lu, ", ax, ux);

    return 0;
}
