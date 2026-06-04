#include <stdio.h>
#include <math.h>

int countDigits(int n) {
    int count = 0;
    while (n != 0) {
        count++;
        n = n / 10;
    }
    return count;
}

int isArmstrong(int n) {
    int original = n, rem, sum = 0;
    int digits = countDigits(n);

    while (n != 0) {
        rem = n % 10;
        sum += pow(rem, digits);
        n = n / 10;
    }

    return (sum == original);
}

int main() {
    int start, end;
    int found = 0;   // 👈 flag variable

    printf("Enter start of range: ");
    scanf("%d", &start);

    printf("Enter end of range: ");
    scanf("%d", &end);

    printf("Armstrong numbers between %d and %d are:\n", start, end);

    for (int i = start; i <= end; i++) {
        if (isArmstrong(i)) {
            printf("%d ", i);
            found = 1;   // 👈 mark that we found at least one
        }
    }

    if (found == 0) {
        printf("0");
    }

    return 0;
}