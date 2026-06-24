//Write a program to Remove duplicate characters

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, len;
    int box[256] = {0};

    printf("enter string ");
    fgets(str,sizeof(str), stdin);
    len = strlen(str);
    printf("String after  removing duplicate ");

    for (i = 0; i <len; i++) {
        if (str[i] !='\n' && !  box[(unsigned char)str[i]]) {    //check new line or not
            printf("%c", str[i]);
            box[( unsigned char)str[i]] = 1;
        }}

    printf("\n");
   return 0;
}