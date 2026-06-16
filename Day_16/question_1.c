//Write a program to Find missing number in array. 

#include <stdio.h>

int main()
{
    int n ,  arr[n - 1],arraySum = 0,missing;

    printf("enter value of n: ");
    scanf("%d", &n);

    printf("enter %d elements: ", n - 1);
    for (int i = 0; i < n - 1; i++)
    {
        scanf("%d", &arr[i]);
    }

    int sum = n * (n + 1) / 2;

    for (int i = 0; i < n - 1; i++)
    {
        arraySum =arraySum+ arr[i];
    }

    missing = sum -arraySum;

    printf("Missing no. is: %d\n", missing);

    return 0;
}