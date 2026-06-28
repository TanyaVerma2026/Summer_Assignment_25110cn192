

// Write a program to Create Library Management System.

#include <stdio.h>
#include <string.h>

struct book {
    int bookId;
    char title[50];
    char author[50];
};

int main() {
    struct book b[100];
    int n = 0, choice, i, id, found;

    do {
        printf("\n..... library management system ...\n");
        printf("1) add book\n");
        printf("2) display all books\n");
        printf("3) search book by book I\n");
        printf("4) exit\n");
        printf("enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
        case 1:
            printf("enter book id: ");
            scanf("%d", &b[n].bookId);
            printf("enter book title: ");
            scanf("%s", b[n].title);
            printf("enter author name: ");
            scanf("%s", b[n].author);

            n++;
            printf("book added successfully!\n");
            break;

        case 2:
            if(n == 0) {
                printf("No books found.\n");
            } else {
                printf("\nLibrary books:\n");
                printf("book ID\tTitle\tAuthor\n");

                for(i = 0; i < n; i++) {
                    printf("%d\t%s\t%s\n",
                           b[i].bookId,
                           b[i].title,
                           b[i].author);
                }
            }
            break;

        case 3:
            printf("enter book ID to search: ");
            scanf("%d", &id);

            found = 0;

            for(i = 0; i < n; i++) {
                if(b[i].bookId == id) {
                    printf("\nbook Found:\n");
                    printf("book id : %d\n", b[i].bookId);
                    printf("title   : %s\n", b[i].title);
                    printf("Author  : %s\n", b[i].author);
                    found = 1;
                    break;
                }
            }

            if(found == 0) {
                printf("book not found.\n");
            }
            break;

        case 4:
            printf("Exiting program...\n");
            break;
        default:
            printf("Invalid choice! Please try again.\n");
        }

    } while(choice != 4);

    return 0;
}