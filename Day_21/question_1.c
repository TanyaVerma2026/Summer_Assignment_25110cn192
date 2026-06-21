//Write a program to Find string length without strlen(). 

#include <stdio.h>

int main() {
    char str[100];
    int length = 0;
  printf("enter string:");
    fgets(str,sizeof(str), stdin);

    while (str[length]!= '\0') {          //means null character
        length++;
    }

    printf("length of string = %d\n", length);

    return 0;
}
