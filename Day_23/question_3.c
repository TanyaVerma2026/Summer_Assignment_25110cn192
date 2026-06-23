//Write a program to Check anagram string. 

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int count[256] = {0};

    printf("enter 1st string");
    scanf("%s", str1);
    printf("enter 2nd string ");
    scanf("%s", str2);

    if (strlen(str1) !=strlen(str2)) {
        printf("String/ are not anagram\n");
        return 0;
    }
    for (int i = 0; str1[i] != '\0'; i++) {
        count[(unsigned char)str1[i]]++;
        count[(unsigned char)str2[i]]--;
    }
    for (int i = 0; i < 256; i++) {
        if (count[i] != 0) {
            printf("string are not anagrams\n");
            return 0;
        }}

    printf("string are anagram\n");
   return 0;
}