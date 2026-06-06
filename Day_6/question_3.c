//Write a program to Count set bits in a number. 

#include <stdio.h>

int main() 
{int n, count = 0;
    unsigned int  num;

    printf("Enter an integer: ");
    scanf("%d",&n);

    num = (unsigned int)n;

    while (num) {
        count += (num & 1);
        num>>= 1;
    }

    printf("Number of set bits = %d\n",count);

    return 0;
    
}