#include <stdio.h>

int main() {
    int n, i, a = 0, b = 1, c;

    printf("Enter n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Invalid input!Please enter a non-negative integer.");
    }
    else if (n == 0) {
        printf("Fibonacci term = %d", a);
    }
    else if (n == 1) {
        printf("Fibonacci term = %d", b);
    }
    else {
        for (i = 2; i <= n; i++) {
            c = a + b;
            a = b;
            b = c;
        }
        printf("Fibonacci term = %d", b);
    }

    return 0;
    
}