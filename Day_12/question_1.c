//Write a program to Write function for palindrome. 


#include <stdio.h>
#include <string.h>

int isPalindrome(char str[])
 {
    int start = 0;
    int end= strlen(str)- 1;

    while (start < end) {
        if (str[start]!= str[end]) {
            return 0;   
        }
        start++;
        end--;
    }
    return 1;  
}

int main() {
    char str[100];

    printf("Enter a strin g: ");
    scanf("%s",str);

    if (isPalindrome(str))
        printf("Palindrome \n");
    else
        printf("Not a palindrome \n");

    return 0;
}