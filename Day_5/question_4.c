//Write a program to Find largest prime factor

#include <stdio.h>

int main() {
    long long num;
    long long largestPrimeFactor = -1;

    printf("Enter a number:");
    scanf("%lld", &num);

    if (num <= 1) {
        printf("No prime factors exist for %lld \n", num);
        return 0;
    }

    while (num % 2 == 0) {
        largestPrimeFactor = 2;
        num /= 2;
    }

    for (long long i = 3; i * i <= num; i += 2) {
        while (num % i == 0) {
            largestPrimeFactor = i;
            num =num/ i;
        }
    }

    if (num > 2)
        largestPrimeFactor =num;

    printf("Largest Prime Factor= %lld\n",largestPrimeFactor);

    return 0;
}