//calculating perimeter and area of a circle

#include <stdio.h>
#define PI 3.14

int main() {
    float radius, perimeter, area;

    //taking input form user
    scanf("%f", &radius);

    //calculating
    perimeter = 2 * PI * radius;
    area = PI * radius * radius;

    printf("Perimeter of the Circle = %f inches\n", perimeter);
    printf("Area of the Circle = %f inches square\n", area);

    return 0;
}