#include<stdio.h>

int main(){
    int sum=0,digit,num;

    printf("enter a no.:");
    scanf("%d",&num);

    while(num>0){
        digit=num%10;
        sum=sum+digit;
        num=num/10;
    }
    
    printf("the sum of given no. is:%d",sum);

    return 0;

}
