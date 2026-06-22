//Write a program to Check palindrome string.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, len,flag = 1;
    printf("enter string: ");
    scanf("%s", str);
    len= strlen(str);

    for (i = 0;i< len /2; i++) {
        if (str[i]!= str[len-i - 1]) {
            flag = 0;
            break;
        }}

   if (flag)
        printf("string is palindrome\n");
    else 
        printf("string is not palindrome\n");
    return 0;
}