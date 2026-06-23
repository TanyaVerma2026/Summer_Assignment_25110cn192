//Write a program to Find maximum occurring character.


#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int count[256] = {0};
    char maxChar;
    int maxCount = 0;
    printf("enter string: ");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        count[(unsigned char)str[i]]++;
    }
   for (int i = 0; i < 256; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            maxChar = i;
        }}

    printf("Max occurring character: %c\n", maxChar);
    printf("Frequency  %d\n", maxCount);

    return 0;
}