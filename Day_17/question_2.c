//Write a program to unionArr of array

#include <stdio.h>

int main() {
    int arr1[50], arr2[50], unionArr[100];
    int num1, num2, i, j, k = 0, found;

    printf("enter size of 1st array:");
    scanf("%d", &num1);

    printf("enter elements of 1st array:\n");
    for(i = 0; i < num1; i++) 
    {
        scanf("%d", &arr1[i]);
        unionArr[k++] = arr1[i];
    }

    printf("enter size of 2nd array:");
    scanf("%d", &num2);

    printf("enter elements of 2nd array:\n");
    for(i = 0; i<num2; i++) {
        scanf("%d", &arr2[i]);}

    for(i = 0; i <num2; i++) {
        found = 0;
        for(j = 0; j <k; j++) {
            if(arr2[i]==unionArr[j]) {
                found = 1;
                
                break;
            }
        }
        if (!found){
            unionArr[k++]= arr2[i];}
    }

    printf("unionArr of arrays: ");
    for(i = 0; i < k; i++) {
        printf("%d ", unionArr[i]);
    }

    return 0;
}