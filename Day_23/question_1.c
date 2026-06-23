//Write a program to Find first non-repeating character.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int count[256]= {0};        //256 possible characters in ASCII so
    char first = '\0';
    printf("enter string ");
    fgets(str, sizeof(str), stdin);
    int len =strlen(str);

    for (int i= 0; i <len;i++) {
        count[(unsigned char)str[i]]++;
    }
    for (int i = 0; i < len; i++) {
        if (count[(unsigned char)str[i]] == 1) {
            first = str[i];
            break;          
        }}

    if (first!= '\0')
        printf("non-repeating character %c\n", first);
    else
        printf("No non-repeating character found\n");

    return 0;
}
