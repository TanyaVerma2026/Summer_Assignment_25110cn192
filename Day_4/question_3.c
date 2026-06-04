#include <stdio.h>

int main()
{
    int n, oriNum, rem, res = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    oriNum = n;

    while (n != 0)
    {
        rem = n % 10;
        res = res + (rem * rem *rem);
        n = n/ 10;
    }

    if (res == oriNum)
        printf("%d is an Armstrong number.", oriNum);
    else
        printf("%d is not an Armstrong number.", oriNum);

    return 0;
}