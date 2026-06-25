//Write a program to Find common characters in strings.

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    printf("enter 1st string: ");
    scanf("%s", str1);
    printf("enter 2nd string: ");
    scanf("%s", str2);
    printf("Common character ");

    for (int i = 0; str1[i]!= '\0'; i++) {
        for (int j = 0;str2[j] != '\0'; j++) {
            if (str1[i]== str2[j]) {
                printf("%c ",str1[i]);
                break; 
            }}}

    return 0;
}
 