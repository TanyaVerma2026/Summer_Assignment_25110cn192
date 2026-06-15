// Write a program to Rotate array right

#include <stdio.h>

int main() {
    int arr[100], n, d;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter no. of right rotation: ");
    scanf("%d", &d);

    d = d % n;              //rotation > array size

    int temp[d];

    for (int i = 0; i < d; i++) {                   // store last d then 
        temp[i] = arr[n - d + i];
    }

    for (int i = n - 1; i >= d; i--) {    // shift element to right
        arr[i] = arr[i - d];
    }

    for (int i = 0; i < d; i++) {          // copy 
        arr[i] = temp[i];
    }

    printf("Array after right rotation:");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}