//Write a program to Print reverse star pattern. 

#include <stdio.h>
int main(){
    int input,i ,j;

    printf("enter no. of rows:");
    scanf("%d",&input);

    for(i=5;i>=1;i--){
        for(j=5;j>=i;j--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}