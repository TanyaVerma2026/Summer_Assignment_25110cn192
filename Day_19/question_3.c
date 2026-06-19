//Write a program to Transpose matrix.

#include <stdio.h>

int main() {
    int rows,col;
    int A[10][10];

    printf("enter no. of rows and columns: ");
    scanf("%d %d", &rows, &col);
    printf("enter elements of 1st matrix:\n");

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j <col; j++) {
            scanf("%d", &A[i][j]);
        }}

    printf("Original Matrix:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0;j < col; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");}

    printf("transpose of matrice:\n");
   for(int i = 0; i < col; i++) {
        for(int j = 0; j< rows; j++) {
            printf("%d ", A[j][i]);
        }
        printf("\n");
    }
 return 0;
}