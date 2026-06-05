//Write a program to Check strong number. 

#include <stdio.h>

int main() {
    int num, temp, rem, sum = 0, fact, i;

    printf("Enter a number: ");
    scanf("%d", &num);

     if (num < 0) {
        printf("Strong numbers are defined only for non-negative integers.\n");
        return 0;
    }

    temp = num;

    while (temp > 0) {
        rem = temp % 10;
        fact = 1;

        for (i = 1; i <= rem; i++) {
            fact= fact*i;
        }

        sum += fact;
        temp /= 10;
    }

    if (sum == num)
        printf("%d is a Strong Number.", num);
    else
        printf("%d is not a Strong Number.\n", num);

    return 0;
}