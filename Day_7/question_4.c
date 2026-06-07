//rite a program to Recursive reverse number. 

#include <stdio.h>

int reverse = 0;

int reverseNo(int n)
{
    if (n == 0)
        return reverse;

    reverse = reverse * 10 + (n % 10);
    return reverseNo(n /10);
}

int main()
{
    int num;

    printf("Enter a no.: ");
    scanf("%d", &num);

    if (num < 0)
    {
        num = -num;
        printf("Revesed no. = -%d\n", reverseNo(num));
    }
    else
    {
        printf("Reversed no. = %d\n", reverseNo(num));
    }

    return 0;
}