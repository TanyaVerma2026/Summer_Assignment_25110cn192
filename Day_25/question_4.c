//Write a program to Sort words by length.

//Write a program to Sort words alphabetically. 


#include <stdio.h>
#include <string.h>

int main() {
    char words[10][50], temp[50];
    int n, i, j;
    printf("enter no. of words: ");
    scanf("%d", &n);
    printf("enter words:\n");
    for(i = 0; i < n; i++) {
        scanf("%s", words[i]);
    }

    for(i = 0; i < n - 1; i++) {
        for(j = i + 1; j < n; j++) {
            if(strlen(words[i]) > strlen(words[j])) {   //strcmp- compare two strings alphabetically
                strcpy(temp, words[i]);         //like (ravi,amit)-returns +ive value coz ravi comes after amit so condition true & swapping occur
                strcpy(words[i], words[j]);
                strcpy(words[j], temp);
            }
        }}

    printf("\nwords in alphabetcal order:\n");
    for(i = 0; i < n; i++) {
        printf("%s\n", words[i]);
    }
    return 0;
}