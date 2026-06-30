//Write a program to Create mini library system 

#include <stdio.h>

struct book {
    int id;
    char title[50];
    char author[50];
};

int main() {
    struct book b[100];
    int n, i;

    printf("enter the no. of books: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        printf("\nenter details of book %d\n", i + 1);
        printf("book ID: ");
        scanf("%d", &b[i].id);
        printf("book Title: ");
        scanf(" %[^\n]", b[i].title);
        printf("Author Name: ");
        scanf(" %[^\n]", b[i].author);
    }
    printf("\n----- Library Records----\n");
    printf("ID\tTitle\t\t\tAuthor\n");

    for(i = 0; i < n; i++) {
        printf("%d\t%-20s\t%-20s\n",  b[i] .id, b[i].title,b[i].author);
    }

    return 0;
}