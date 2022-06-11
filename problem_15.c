//calculating distance between two point

#include <stdio.h>
#include <math.h>

int main() {
    float x1, x2, y1, y2, distance;

    printf("Input x1: ");
    scanf("%f", &x1);
    printf("Input x1: ");
    scanf("%f", &y1);
    printf("Input x2: ");
    scanf("%f", &x2);
    printf("Input y2: ");
    scanf("%f", &y2);

    distance = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

    printf("Distance between the said points: %f\n", distance);

    return 0;
}