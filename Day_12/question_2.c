//Write a program to Write function for Armstrong.

#include <stdio.h>

int isArmstrong(int num) {
    int originalNum, rem, result = 0;

    originalNum = num;

    while (originalNum != 0) {
        rem = originalNum % 10;
        result += rem * rem * rem;
        originalNum /= 10;
    }

    if (result == num)
        return 1;   
    else
        return 0;  
}

int main() {
    int num;

    printf("Enter a n0.: ");
    scanf("%d", &num);

    if (isArmstrong(num))
        printf("%d is an Armstrong no..\n", num);
    else
        printf("%d is not an Armstrong no.\n", num);

    return 0;
}
