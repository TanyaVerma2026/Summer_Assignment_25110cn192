////Write a program to Move zeroes to end. 

#include <stdio.h>

int main() {
    int arr[100], n, i,j=0;

    printf("enter no.of elements: ");
    scanf("%d", &n);

    printf("enter the array element\n");
    for(i = 0; i< n;i++) {
        scanf("%d",&arr[i]);
    }
    for(i = 0;i < n; i++) {
        if(arr[i] != 0) {
            arr[j] = arr[i]; //placed all non zeros in starti ng
            j++;
        }
    }

    while(j< n) {
        arr[j] = 0; //fill zeros
        j++;
    }

    printf("modified array:\n");
    for(i = 0; i < n; i++) {
        printf("%d ",arr[i]);
    }

    return 0;
}