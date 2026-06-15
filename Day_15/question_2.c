//Write a program to Rotate array left


#include <stdio.h>

int main() {
    int arr[100],n, d;

    printf("Enter size of array:");
    scanf("%d", &n);

    printf("Enter array elements:");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter no.of left rotation:");
    scanf("%d", &d);

    d = d % n;   //  rotation >array size

    int temp[d];

    for (int i = 0; i < d; i++) {
        temp[i] = arr[i];
    }
    for (int i = d; i <n; i++) { //shift
        arr[i - d] = arr[i];
    }

    for (int i = 0; i <d; i++) {    // Copy stored elements to the end
   
        arr[n -d + i] = temp[i]; 
    }

    printf("Array after left rotation: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}