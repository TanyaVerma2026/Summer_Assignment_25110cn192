//Write a program to Write function for perfect no.

#include <stdio.h>

int isPerfect(int num) {
    int i,sum = 0;

    for (i = 1; i < num; i++) {
        if (num % i == 0) {
            sum +=i;
        }
    }

    if (sum== num)
        return 1;  
    else
        return 0;   
}

int main() {
    int num;

    printf("Enter a no.: ");
    scanf("%d", &num);

    if (isPerfect(num))
        printf("%d is a Perfect no..\n", num);
    else
        printf("%d is not a Perfect No.\n", num);

    return 0;
}