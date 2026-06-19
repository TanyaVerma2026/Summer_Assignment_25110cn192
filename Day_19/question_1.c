//Write a program to Add matrices.

#include <stdio.h>

int main() {
    int rows,col;
    int A[10][10], B[10][10], Sum[10][10];

    printf("enter no. of rows and columns: ");
    scanf("%d %d", &rows, &col);
    printf("enter elements of 1st matrix:\n");

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j <col; j++) {
            scanf("%d", &A[i][j]);
        }}

    printf("enter element of 2nd matrix:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j< col; j++) {
            scanf("%d",&B[i][j]);
        }}
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < col; j++) {
            Sum[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("Sum of the matrice:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0;j< col; j++) {
            printf("%d ", Sum[i][j]);
        }
        printf("\n");
    }
 return 0;
}