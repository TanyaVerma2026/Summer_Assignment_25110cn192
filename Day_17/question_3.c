//Write a program to Intersection of arrays. 

#include <stdio.h>

int main() {
    int arr1[50], arr2[50],num1, num2, i,j ;

    printf("enter size of 1st array: ");
    scanf("%d", &num1);

    printf("enter elements of 1st array:\n");
    for(i = 0; i < num1; i++) {
        scanf("%d",&arr1[i]);
    }

    printf("enter size of 2nd array: ");
    scanf("%d",&num2);

    printf("enter elements of 2nd array:\n");
    for(i = 0; i <num2; i++) {
        scanf("%d", &arr2[i]);
    }

    printf("Intersection of arrays: ");
    for(i = 0; i< num1; i++) {
        for(j = 0; j <num2; j++) {
            if(arr1[i] ==arr2[j]) {
                printf("%d ", arr1[i]);
                break;
            }
        }
    }

    return 0;
}