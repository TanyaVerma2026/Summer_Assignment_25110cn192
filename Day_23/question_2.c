//Write a program to Find first repeating character. 

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int count[256]= {0};        //256 possible characters in ASCII so
    
     printf("enter string: ");
    scanf("%s", str);
 for (int i = 0; str[i] != '\0'; i++) {
        count[(unsigned char)str[i]]++;
   
      if (count[(unsigned char)str[i]]== 2) {
            printf("repeating character: %c\n", str[i]);
            return 0;
        }}

    printf("No repeating character found.\n");
    return 0;
}

