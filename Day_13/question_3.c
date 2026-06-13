//Write a program to Find largest and smallest element. 


#include <stdio.h>

int main() {
    int arr[100], n, i ,large, small;
     

    printf("Enter the no. of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    large = arr[0];
    small = arr[0];

    for(i = 1; i < n; i++) {
        if(arr[i] > large)
            large = arr[i];

        if(arr[i] < small)
            small = arr[i];
    }

    printf("Largest element= %d\n", large);
    printf("Smallest element = %d\n", small);

    return 0;
}