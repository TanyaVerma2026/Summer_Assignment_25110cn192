//Write a program to Multiply matrices. 

#include <stdio.h>

int main() {
    int r1, c1,r2,c2, i, j,k;

    printf("enter rows & column of 1st matrix: ");
    scanf("%d %d", &r1, &c1);
   printf("enter rows & column of 2nd matrix: ");
    scanf("%d %d", &r2, &c2);

     if (c1!= r2) {
        printf("matrix multiplication is not posible.\n");
        return 0;
    }

    int A[r1][c1],B[r2][c2], C[r1][c2];

    printf("enter elements of 1st matrix:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            scanf("%d", &A[i][j]);
        }}
           printf("enter elements of 2nd matrix:\n");
    for (i = 0; i < r2;i++) {
        for (j = 0;j < c2; j++) {
            scanf("%d", &B[i][j]);
        }}

    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            C[i][j] = 0;
        }}
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            for (k = 0; k < c1; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }}
    }

    printf("final Matrix:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            printf("%d\t",C[i][j]);
        }
        printf("\n");
    }

    return 0;
}