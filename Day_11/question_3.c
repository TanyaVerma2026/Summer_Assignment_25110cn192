//Write function to check prime 

#include <stdio.h>

int isPrime(int n) {
    int i;

    if (n <= 1)
        return 0;

    for (i = 2; i < n;i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int n;

    printf("Entera no.: ");
    scanf("%d",&n);

    if (isPrime(n))
        printf("%d is a Prime No.\n", n);
    else
        printf("%d is Not a Prime No.\n", n);

    return 0;
}
