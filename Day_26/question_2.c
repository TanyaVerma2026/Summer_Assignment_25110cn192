//wap to create voting eligibility system

#include <stdio.h>

void voting(int age) {
    if (age>= 18)
        printf("you are eligible to vote\n");
    else
        printf("you are not eligible to vote");}
int main() {
    int age;

    printf("enter your age: ");
    scanf("%d", &age);
    voting(age);
    return 0;
}