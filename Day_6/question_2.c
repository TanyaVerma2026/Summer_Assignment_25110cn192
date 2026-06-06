//Write a program to Convert binary to decimal. 

#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    char binary[33];
    int decimal = 0,start = 0,sign = 1;

    printf("Enter a binary number:");
    scanf("%s", binary);

    if (binary[0]== '-') {
        sign = -1;
        start = 1;
    }

    int len=  strlen(binary);

    for (int i = start; i < len; i++) {
        if (binary[i] != '0'  && binary[i] != '1') {
            printf("Invalid binary number!\n");

            return 1;
        }

        decimal = decimal * 2 + (binary[i] - '0');
    }

    decimal = decimal*sign;

    printf("Decimal = %d\n", decimal);

    return 0;
}