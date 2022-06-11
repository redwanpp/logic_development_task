//converting days

#include <stdio.h>

int main() {
    int year, month, day;

    printf("Input no. of days: ");
    scanf("%d", &day);

    year = day / 365;
    day %= 365;
    month = day / 30;
    day %= 30;

    printf("%d Year(s)\n", year);
    printf("%d Month(s)\n", month);
    printf("%d Day(s)\n", day);

    return 0;
}