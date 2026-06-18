//Write a program to Binary search. 

#include <stdio.h>

int main() {
    int n, i, target;
    printf("enter size array  ");
    scanf("%d", &n);
    int arr[n];

    printf("enter element:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);}
    printf("enter target element: ");
    scanf("%d", &target);

    int low = 0, high = n- 1, mid,found =0;
    while (low <=high) {
        mid = (low+ high) / 2;

        if (arr[mid]== target) {
            printf("Element found at index %d\n ",mid);
            found =1;
            break;
        }
        else if(arr[mid]< target)
            low = mid +1;
        else
            high = mid- 1; }

    if (found== 0)
        printf("Element not found\n");

    return 0;
}