#include <stdio.h>

int main() {
    int n, i, factorial=1;

    printf("Enter a number: ");
    scanf("%d", &n);
    
    if (n<0){
        printf("error:factorial of negative no. does not exist");
        return 1;
    }
    for (i = 1; i <= n; i++) {
        factorial *= i;
    }

    printf("Factorial of %d = %d\n", n, factorial);

    return 0;
}
//completed