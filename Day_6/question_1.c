//Write a program to Convert decimal to binary.

#include <stdio.h>

int main() {
    int decimal,binary[32], i = 0  ;   

    printf("Enter an integer:");
    scanf("%d", &decimal);

    if (decimal ==0) {
        printf("Binary = 0 \n");
        return 0;
    }

    if (decimal < 0) {
        printf("Binary = -");
        decimal = -decimal;  
    } else {
        printf("Binary = error");
    }

    while (decimal > 0) {
        binary[i++] = decimal % 2;
        decimal /= 2;
    }

    for (int j = i - 1;j >= 0; j--) {
        printf("%d", binary[j]);
    }

    printf("\n");
    return 0;
}