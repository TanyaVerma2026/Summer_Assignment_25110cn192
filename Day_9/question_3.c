//Write a program to Print repeated character pattern. 


#include <stdio.h>
int main(){
    int input,i ,j;

    printf("enter no. of rows:");
    scanf("%d",&input);

      for(i = 1; i <= input; i++) {
        for(j = 1; j <= i; j++) {
            printf("%c", 'A' + i - 1);
        }
        printf("\n");
    }
    
    return 0;
    
}