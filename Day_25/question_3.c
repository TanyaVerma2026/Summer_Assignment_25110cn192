//Write a program to Sort names alphabetically. 


#include <stdio.h>
#include <string.h>

int main() {
    char name[10][50], temp[50];
    int n, i, j;
    printf("enter no. of names: ");
    scanf("%d", &n);
    printf("enter names:\n");
    for(i = 0; i < n; i++) {
        scanf("%s", name[i]);
    }

    for(i = 0; i < n - 1; i++) {
        for(j = i + 1; j < n; j++) {
            if(strcmp(name[i], name[j]) > 0) {      //strcmp- compare two strings alphabetically
                strcpy(temp, name[i]);         //like (ravi,amit)-returns +ive value coz ravi comes after amit so condition true & swapping occur
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
        }}

    printf("\nNames in alphabetcal order:\n");
    for(i = 0; i < n; i++) {
        printf("%s\n", name[i]);
    }
    return 0;
}