//

#include <stdio.h>

int main() {
    int rows;
    printf("enter no. of rows:");
    scanf("%d", &rows);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < rows - i- 1; j++)
            printf(" ");

        for (int j = 0; j < 2 * i + 1;j++)
            printf("*");

        printf("\n");
    }

    return 0;
}