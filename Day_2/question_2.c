//Write a program to Reverse a number. 

#include <stdio.h>

int main() {
    int num, reverse = 0, digit, sign = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if number is negative
    if (num < 0) {
        sign = -1;
        num = -num;   // Make it positive
    }

    while (num != 0) {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }

    reverse = reverse * sign;   // Restore sign

    printf("The reversed number is: %d\n", reverse);

    return 0;
}