//Convertinr time

#include <stdio.h>

int main() {
    int hr, min, sec;

    printf("Input seconds: ");
    scanf("%d", &sec);

    hr = sec / 3600;
    sec %= 3600;
    min = sec / 60;
    sec %= 60;

    printf("H:M:S - %d:%d:%d\n", hr, min, sec);

    return 0;
}