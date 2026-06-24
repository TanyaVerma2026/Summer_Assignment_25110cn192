//Write a program to Find longest word. 

#include <stdio.h>
#include <string.h>

int main() {
    char str[200],longest[100];
    int i, start= 0,maxLen = 0, len;
    printf("enter sentence ");
    fgets(str,sizeof(str), stdin);

    int n = strlen(str);
   for (i = 0; i <= n; i++) {
        if (str[i]== ' '||str[i]=='\0' || str[i] =='\n') {    //check -entererd sentence is end or not
            len =i- start;

            if (len >maxLen) {
                maxLen= len;
                strncpy(longest, &str[start], len);
                longest[len] ='\0';
            }
            start = i + 1;}}
    printf("Longest word %s\n", longest);
    printf("Length: %d\n",maxLen);
    return 0;
}