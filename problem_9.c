//taking two number as input and add them

#include <stdio.h>

int main() {
    int num1, num2, sum;

    printf("Input first integer: ");
    scanf("%d", &num1);
    printf("Input second integer: ");
    scanf("%d", &num2);

    sum = num1 + num2;

    printf("Sum of the above two integers = %d\n", sum);

    return 0;
}