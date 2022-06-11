//day converter

#include <stdio.h>

int main() {
    int days, year, week;

    printf("Number of days: ");
    scanf("%d", &days);

    year = days / 365;
    days %= 365;
    week = days / 7;
    days %= 7;

    printf("Years: %d\n", year);
    printf("Weeks: %d\n", week);
    printf("Days: %d\n", days);

    return 0;
}