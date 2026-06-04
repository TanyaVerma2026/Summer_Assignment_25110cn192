//Write  program to Generate Fibonacci series. 

#include <stdio.h>

int main()
{
    int n, first = 0, sec = 1, next, i;

    printf("Enter the no. of terms:");
    scanf("%d", &n);

    printf("Fiboncci Series:  ");

    for(i = 0; i < n; i++)
    {
        printf("%d ", first);
        next = first + sec;
        first = sec;
        sec = next;
    }

    return 0;
}