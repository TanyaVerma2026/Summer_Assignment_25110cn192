//Write a program to Find sum and average of array
 

#include <stdio.h>

int main() {
    int arr[100], n, i, sum = 0,avg;
     

    printf("Enter the no. of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    avg = sum / n;

    printf("Sum = %d\n", sum);
    printf("Average = %d\n", avg);

    return 0;
}