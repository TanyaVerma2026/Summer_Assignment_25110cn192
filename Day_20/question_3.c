//Write a program to Find row-wise sum. 

#include <stdio.h>

int main() {
    int rows, cols,i, j,sum;
    printf("enter no. of rows and column: ");
    scanf("%d %d", &rows, &cols);
    int a[rows][cols];

    printf("enter matrix elements:\n");
    for(i = 0; i< rows; i++) {
        for(j = 0; j <cols; j++) {
            scanf("%d",&a[i][j]);
        }}

    printf("Row-wise Sum:\n");
    for(i = 0; i < rows; i++) {
        sum = 0;
        for(j = 0; j < cols; j++) {
            sum =sum+ a[i][j];
        }
        printf("Sum of Row %d = %d\n", i+ 1, sum);
    }
    return 0;
}