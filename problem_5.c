//program for computing perimeter and area of a rectangle

#include <stdio.h>

int main() {
    //declaring variables
    float height, width, perimeter, area;

    //assigning value
    height = 7;
    width = 5;

    //calculating
    perimeter = 2 * (height + width);
    area = height * width;

    //showing the result
    printf("Perimeter of the rectangle = %.0f inches\n", perimeter);
    printf("Area of the rectangle = %.0f square inches\n", area);

    return 0;
}