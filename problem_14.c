//calculate a bike’s average consumption

#include <stdio.h>

int main() {
    float distance, fuel, avg;

    printf("Input total distance in km: ");
    scanf("%d", &distance);
    printf("Input total fuel spent in liters: ");
    scanf("%d", &fuel);

    avg = distance / fuel;

    printf("Average consumption (km/lt): %.2f\n", avg);

    return 0;
}