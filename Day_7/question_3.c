//Write a program to Recursive sum of digits. 

#include <stdio.h>

int sumOfDigit(int n)
{
    if (n == 0)
        return 0;
    else
        return (n % 10) + sumOfDigit(n / 10);
}

int main()
{
    int num;

    printf("Enter a number:  ");
    scanf("%d", &num);

    if (num < 0)
        num = -num; 

    printf("Sum of digits = %d\n", sumOfDigit(num));

    return 0;
}