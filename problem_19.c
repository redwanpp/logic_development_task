//cheak value

#include <stdio.h>

int main() {
    int p, q, r, s;

    printf("Input the first integer: ");
    scanf("%d", &p);
    printf("Input the scond integer: ");
    scanf("%d", &q);
    printf("Input the third integer: ");
    scanf("%d", &r);
    printf("Input the fourth integer: ");
    scanf("%d", &s);

    //cheaking conditon with ternari  operator
    (q >= 0 && r >= 0 && s >= 0 && (p % 2 == 0) && (q > r) && (s > p) && ((r + s) > (p + q))) ? printf("Correct values\n") : printf("Wrong values\n");

    return 0;
}