//Write a program to Create employee management system.

#include <stdio.h>
#include <string.h>

struct employee {
    int id;
     char name[50];
   float salary;     
};
int main() {
    struct employee emp[100];
    int n = 0, choice,i,id,found;

    do {
        printf("\n ....employee record management system.....\n");
        printf("1) Add employee record\n");
        printf("2) display All employee\n");
        printf("3)Search employee by id\n");
        printf("4) Exit\n");
        printf("enter your choice: ");
        scanf("%d", &choice);

        switch(choice){

        case 1:
            printf("enter id: ");
            scanf("%d", &emp[n].id);
            printf("enter name: ");
            scanf("%s", emp[n].name);
            printf("enter salary: ");
            scanf("%f", &emp[n].salary);
            n++;
            printf("employee record added successfully!\n");
            break;
        case 2:
            if(n == 0) {
                printf("No  records found.\n");
            } else {
                printf("\nemployee records:\n");
                printf("id\tname\tsalary\n");
                for(i = 0; i < n; i++) {
                    printf("%d\t%s\t%.2f\n",
                           emp[i].id,
                           emp[i].name,
                           emp[i].salary);
                }
            }
            break;

        case 3:
            printf("enter id to search: ");
            scanf("%d", &id);
            found = 0;
            for(i = 0; i < n; i++) {
                if(emp[i].id == id) {
                    printf("\nrecord Found:\n");
                    printf("id : %d\n", emp[i].id);
                    printf("namee      : %s\n", emp[i].name);
                    printf("salary      : %.2f\n", emp[i].salary);
                    found = 1;
                    break;
                }}
            if(found == 0) {
                printf("employee record not found.\n");
            }
            break;

        case 4:
            printf("Exiting program...\n");
            break;
        default:
            printf("Invalid choice! Please try again.\n");
        }

    } while(choice!= 4);

    return 0;
}
 