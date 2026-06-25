//Write a program to Merge two sorted arrays.(string)

#include <stdio.h>
#include <string.h>

int main() {
    char arr1[50][20], arr2[50][20], merged[100][20];
    int n1, n2;
    printf("enter no. of strings in 1st array: ");
    scanf("%d", &n1);
    printf("enter sorted strings for 1st array:\n");
    for(int i = 0; i < n1; i++) {
        scanf("%s", arr1[i]);
    }
    printf("enter no. of strings in 2nd array: ");
    scanf("%d", &n2);
    printf("Enter sorted strings for 2nd array:\n");
    for(int i = 0; i < n2; i++) {
        scanf("%s", arr2[i]);
    }
    int i = 0, j = 0, k = 0;

    while(i < n1 && j < n2) {
        if(strcmp(arr1[i], arr2[j]) <= 0)
            strcpy(merged[k++], arr1[i++]);
        else
            strcpy(merged[k++], arr2[j++]);
    }

    while(i < n1)
        strcpy(merged[k++], arr1[i++]);

    while(j < n2)
        strcpy(merged[k++], arr2[j++]);

    printf("\nMerged Sorted Array:\n");
    for(int x = 0; x < k; x++) {
        printf("%s ", merged[x]);
    }

    return 0;
}