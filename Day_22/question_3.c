//Write a program to Character frequency. 

#include <stdio.h>
#include <string.h>

int main() {
    char str[100], ch;
    int i, count = 0;
   printf("enter string: ");
   fgets(str, sizeof(str), stdin);
    printf("enter char to find frequency: ");
    scanf("%c", &ch);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i]== ch)
            count++;
    }
    printf("Frequency of '%c' = %d\n", ch, count);
    return 0;
}