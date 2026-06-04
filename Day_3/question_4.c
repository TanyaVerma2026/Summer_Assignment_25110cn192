//Write a program to Find LCM of two numbers. 

#include <stdio.h>

// Recursive function to find GCD
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    int a, b, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    lcm = (a * b) / gcd(a, b);

    printf("LCM = %d", lcm);

    return 0;
}
