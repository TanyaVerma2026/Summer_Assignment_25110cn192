//wap  to develop complete mini project using arrays, strings and functions. 


#include <stdio.h>
#include <string.h>
#define MAX 5

char movies[MAX][30] = {"Avengers", "Avatar ","Jawan  "," Pushpa", "Leo"};
int seats[MAX] = {20, 20, 20, 20, 20};

void displayMovies() {
    int i;
    printf("\n----..Movie List..--\n");
    printf("No.\tMovie Name\tAvailable Seats\n");

    for(i = 0; i < MAX; i++) {
        printf("%d\t%s\t\t%d\n", i + 1, movies[i], seats[i]);
        }}
void bookTicket() {
    int choice, ticket;
    displayMovies();

    printf("\nenter movie no.: ");
    scanf("%d ",&choice);
    if(choice < 1|| choice > MAX) {
        printf("invalid movie choice!\n");
        return;
    }
    printf("enter no. tickets: ");
    scanf("%d", &ticket);

    if(ticket <= seats[choice - 1]) {
        seats[choice - 1] -= ticket;
        printf("Booking Successful....\n");
        printf("enjoy watching %s\n", movies[choice - 1]);
    } else {
        printf("sorrry!! Not enough seats available.\n");
    }
}

void cancelTicket() {
    int choice, ticket;

    displayMovies();

    printf("\nenter movie no.: ");
    scanf("%d", &choice);

    if(choice <1 || choice > MAX) {
        printf("Invalid movie choice!\n");
        return;
    }

    printf("enter no of tickets to cancel: ");
    scanf("%d", &ticket);
    seats[choice- 1] += ticket;
    printf("Ticket cancelled Successfully!\n");
}
int main() {
    int ch;

    do {
        printf("\n --------MOVIe TIcKeT BOOKING ----------\n");
        printf("1. display Movies\n");
        printf("2. Book Ticket\n");
        printf("3. cancel Ticket\n");
        printf("4. exit\n");
        printf("enter your choice: ");
        scanf("%d", &ch);
        switch(ch) {
            case 1:
                displayMovies();
                break;
            case 2:
                bookTicket();
                break;
            case 3:
                cancelTicket();
                break;
            case 4:
                printf("Thank You!\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    } while(ch != 4);
    return 0;
}