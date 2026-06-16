//Write a program to Find pair with given sum. 

#include <stdio.h>

int main() {
    int n,sum, found =0;

    printf("enter no.of elements; ");
    scanf("%d", &n);

    int arr[n];

    printf("enter array element:");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("enter target sum:");
    scanf("%d", &sum);

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == sum) {
                printf("Pair found: (%d, %d)\n", arr[i],arr[j]);
                found = 1;
            }
        }
    }

    if (!found) {
        printf("No pair found%d\n", sum);
    }

    return 0;
}