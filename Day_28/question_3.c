//Write a program to Create ticket booking system


#include <stdio.h>
#include <string.h>

struct ticket {
    int ticketNo;
    char name[50];
    char destination[50];
};

int main() {
    struct ticket t[100];
    int n = 0, choice, i, ticketNo, found;

    do {
        printf("\n..... ticket Booking System .....\n");
        printf("1) Book ticket\n");
        printf("2) Display All tickets\n");
        printf("3) Search ticket by ticket number\n");
        printf("4) Exit\n");
        printf("enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

        case 1:
            printf("enter ticket number: ");
            scanf("%d", &t[n].ticketNo);
            printf("enter passenger name: ");
            scanf("%s", t[n].name);
            printf("enter Destination: ");
            scanf("%s", t[n].destination);
            n++;
            printf("ticket booked successfully!\n");
            break;

        case 2:
            if(n == 0) {
                printf("No tickets booked.\n");
            } else {
                printf("\nBooked tickets:\n");
                printf("ticket No\tName\tDestination\n");

                for(i = 0; i < n; i++) {
                    printf("%d\t\t%s\t%s\n",
                           t[i].ticketNo,
                           t[i].name,
                           t[i].destination);
                }
            }
            break;

        case 3:
            printf("enter ticket number to search: ");
            scanf("%d", &ticketNo);

            found = 0;

            for(i = 0; i < n; i++) {
                if(t[i].ticketNo == ticketNo) {
                    printf("\nticket Found:\n");
                    printf("ticket number : %d\n", t[i].ticketNo);
                    printf("Passenger Name: %s\n", t[i].name);
                    printf("Destination   : %s\n", t[i].destination);
                    found = 1;
                    break;
                }
            }

            if(found == 0) {
                printf("ticket not found.\n");
            }
            break;

        case 4:
            printf("exiting program...\n");
            break;

        default:
            printf("invalid choice.. plzz try again.\n");
        }

    } while(choice != 4);

    return 0;
}