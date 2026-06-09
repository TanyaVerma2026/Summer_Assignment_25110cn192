//Write a program to Print number triangle. 

#include <stdio.h>
int main(){
    int input,i ,j;

    printf("enter no. of rows:");
    scanf("%d",&input);

     for(i = input; i >= 1; i--) {
        for(j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}