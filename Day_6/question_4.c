//Write a program to Find x^n without pow(). 

#include <stdio.h>

int main() {
    int x, n;
    double result =1.0;

    printf("Enter base (x): ");
    scanf("%d",&x);

    printf("Enter exponent(n): ");
    scanf("%d", &n);

    int exp = (n < 0) ?-n :n;

    for (int i = 0;i <exp; i++) {
        result =result* x;
    }

    if (n < 0)
        result = 1.0 / result;

    printf("%d^%d = %lf\n", x, n, result);

    return 0;
}