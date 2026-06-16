//Write a program to Find maximum frequency element. 


#include <stdio.h>

int main() {
    int n ,maxCount = 0; 

    printf("enter no. of element; ");
    scanf("%d", &n);

    int arr[n];

    printf("enter array element:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int element = arr[0];

    for (int i = 0; i < n;i++) {
        int count = 1;

        for (int j = i+ 1;j < n; j++) {
            if (arr[i] ==arr[j]) {
                count++;
            }
        }

        if (count >maxCount) {
            maxCount = count;
            element = arr[i];
        }
    }

    printf("Max frequency element: %d", element);

    return 0;
}