//taking two integer from user and product them

#include <stdio.h>

int main() {
    int num1, num2, prod;

    printf("Input first integer: ");
    scanf("%d", &num1);
    printf("Input second integer: ");
    scanf("%d", &num2);

    prod = num1 * num2;

    printf("Product of the above two integer: %d\n", prod);

    return 0;
}