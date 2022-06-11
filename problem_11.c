//calculating average with weight

#include <stdio.h>

int main() {
    float weight_1, weight_2, item_1, item_2, avg;

    printf("Weight-Item1: ");
    scanf("%f", &weight_1);
    printf("No. of item1: ");
    scanf("%f", &item_1);
    printf("Weight-Item2: ");
    scanf("%f", &weight_2);
    printf("No. of item2: ");
    scanf("%f", &item_2);

    avg = ((weight_1 * item_1) + (weight_2 * item_2)) / (item_1 + item_2);

    printf("Average Value = %f\n", avg);

    return 0;
}