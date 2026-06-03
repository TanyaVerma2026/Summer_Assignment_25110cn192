//Write a program to Check whether a number is prime.

#include <stdio.h>

int main() {
    int n, i, prime = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Negative numbers are not prime.\n");
    }
    else if (n == 0) {
        printf("0 is not prime.\n");
    }
    else if (n == 1) {
        printf("1 is not prime.\n");
    }
    else {
        for (i = 2; i <n; i++) {
            if (n % i == 0) {
                prime = 0;
                break;
            }
        }

        if (prime)
            printf("%d is a prime number.\n", n);
        else
            printf("%d is not a prime number.\n", n);
    }

    return 0;
}