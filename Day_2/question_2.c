//Write a program to Reverse a number. 

#include <stdio.h>

int main() {
    int reverse=0,digit,num;
    
    printf("enter a no.:");
    scanf("%d",&num);

    while(num>0){
        digit=num%10;
        reverse=reverse*10+digit;
        num=num/10;
    }

    printf("the reversed no. is:%d",reverse);

    return 0;
}