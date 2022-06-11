//Bhaskara's formula

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, base, root1, root2;

    printf("Input the first number(a): ");
    scanf("%f", &a);
    printf("Input the second number(b): ");
    scanf("%f", &b);
    printf("Input the third number(c): ");
    scanf("%f", &c);

    base = pow(b,2) - (4 * a * c);

    if(base >= 0) {
        root1 = (-b + sqrt(base)) / (2 * a);
        root2 = (-b - sqrt(base)) / (2 * a);

        printf("Root1 = %f\n", root1);
        printf("Root2 = %f\n", root2);
    }
    else {
        printf("it is not possible to find the roots.\n");
    }

    return 0;
}