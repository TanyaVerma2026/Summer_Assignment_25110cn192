//Write a program to Find diagonal sum. 

#include <stdio.h>

int main() {
    int n, matrix[10][10];
    int sum = 0;

    printf("e nter order of square matrix: ");
    scanf("%d", &n);

    printf("enter the matrix element:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }}
    for(int i = 0; i < n; i++) {
        sum =sum+ matrix[i][i];
    }

    printf("Sum of principal diagonal elements = %d\n", sum);

    return 0;
}