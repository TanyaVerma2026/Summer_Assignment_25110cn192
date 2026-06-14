//Wap to Second largest element. 

#include <stdio.h>

int main() {
    int arr[100], n, i,largest, secLargest;

    printf("Enter no.of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    largest = secLargest = arr[0];

    for(i = 1; i < n; i++) {
        if(arr[i] > largest) {
            secLargest = largest;

            largest = arr[i];
        }
        else if(arr[i] > secLargest && arr[i] != largest) {
            secLargest = arr[i];
        }
    }

    printf("Second largest element = %d\n", secLargest);

    return 0;
}