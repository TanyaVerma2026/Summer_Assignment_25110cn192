//Write a program to Create contact ma// Write a program to Create contact Management System.

#include <stdio.h>
#include <string.h>

struct contact {
    int id;
    char name[50];
    char phone[15];
};

int main() {
    struct contact c[100];
    int n = 0, choice, i, id, found;

    do {
        printf("\n..... contact management system ...\n");
        printf("1) add contact\n");
        printf("2) display all contacts\n");
        printf("3) search contact by ID\n");
        printf("4) Exit\n");
        printf("enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

        case 1:
            printf("enter contact id: ");
            scanf("%d", &c[n].id);
            printf("enter contact name: ");
            scanf("%s", c[n].name);
            printf("enter phone no.: ");
            scanf("%s", c[n].phone);
            n++;
            printf("contact added successfully!\n");
            break;

        case 2:
            if(n == 0) {
                printf("No contacts found.\n");
            } else {
                printf("\ncontact List:\n");
                printf("ID\tName\tPhone no.\n");

                for(i = 0; i < n; i++) {
                    printf("%d\t%s\t%s\n",
                           c[i].id,
                           c[i].name,
                           c[i].phone);
                }
            }
            break;
        case 3:
            printf("enter contact ID to search: ");
            scanf("%d", &id);

            found = 0;

            for(i = 0; i < n; i++) {
                if(c[i].id == id) {
                    printf("\ncontact Found:\n");
                    printf("contact ID   : %d\n", c[i].id);
                    printf("Name         : %s\n", c[i].name);
                    printf("Phone no. : %s\n", c[i].phone);
                    found = 1;
                    break;
                }
            }

            if(found == 0) {
                printf("contact not found.\n");
            }
            break;

        case 4:
            printf("Exiting program...\n");
            break;
        default:
            printf("invalid choice.. Please try again.\n");
        }
    } while(choice != 4);

    return 0;
}


