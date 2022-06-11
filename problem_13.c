//Find max

#include <stdio.h>

int main() {
    int num1, num2, num3;

    printf("Input the first integer: ");
    scanf("%d", &num1);
    printf("Input the second integer: ");
    scanf("%d", &num2);
    printf("Input the third integer: ");
    scanf("%d", &num3);

    (num1 > num2 && num1 > num3) ? printf("Maximum value of three integers: %d\n", num1) : (num2 > num3) ? printf("Maximum value of three integers: %d\n", num2) : printf("Maximum value of three integers: %d\n", num3);

    return 0;
}