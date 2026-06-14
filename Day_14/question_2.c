//Write a program to Frequency of an element. 

#include <stdio.h>

int main() {
    int arr[100], n, element, i, count = 0;

    printf("Enter no. of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element whose frequency is found: ");
    scanf("%d", &element);

    for(i = 0; i < n; i++) {
        if(arr[i] == element) {
            count++;
        }
    }

    printf("Frequency of %d = %d\n", element, count);

    return 0;
}