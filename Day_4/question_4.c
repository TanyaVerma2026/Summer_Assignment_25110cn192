#include <stdio.h>
#include <math.h>

int main() {
    int start, end, num, temp, digits, rem;
    int sum;

    printf("Enter range: ");
    scanf("%d %d", &start, &end);

    printf("Armstrong numbers between %d and %d are:\n", start, end);

    for (num = start; num <= end; num++) {
        temp = num;
        digits = 0;

        while (temp != 0) {
            digits++;
            temp= temp/10;
        }

        temp = num;
        sum = 0;

        while (temp != 0) {
            rem = temp % 10;
            sum += pow(rem, digits);
            temp= temp/10;
        }

        if (sum == num)
            printf("%d ", num);
    }
 return 0;
 
}