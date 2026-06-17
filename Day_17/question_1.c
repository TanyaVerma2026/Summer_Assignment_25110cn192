//Write a program to Merge arrays. 

#include <stdio.h>

int main() {
    int arr1[50], arr2[50], merge[100];
    int n1, n2, i, j;

    printf("enter size of 1st array: ");
    scanf("%d", &n1);

    printf("enter elemens of 1st array:\n");
    for(i = 0;i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("enter size of 2nd array: ");
    scanf("%d", &n2);

    printf("enter elemens of 2nd array:\n");
    for(i = 0;i < n2; i++) {
        scanf("%d", &arr2[i]);
    }


    for(i = 0;i < n1; i++) {
        merge[i] = arr1[i];
    }

    for(j = 0; j< n2;j++) {
        merge[i + j] =arr2[j];
    }

    printf("merge Array:");
    for(i = 0; i <  n1 + n2; i++) {
        printf("%d ", merge[i]);
    }

    return 0;
}