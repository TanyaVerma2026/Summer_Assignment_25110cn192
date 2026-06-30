//Write a program to Create mini employee management system. 

#include <stdio.h>

struct employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct employee emp[100];
    int n, i;
    printf("Enter the no. of employees: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        printf("\nEnter details of employee %d\n", i + 1);
        printf("employee id: ");
        scanf("%d", &emp[i].id);
        printf("employee Name: ");
        scanf(" %[^\n]", emp[i].name);
       printf("Salary: ");
        scanf("%f", &emp[i].salary);}  
    printf("\n----employee Records ---\n");
    printf("ID\tName\t\tSalary\n");

    for(i = 0; i <n; i++) {
        printf("%d\t%-15s\t%.2f\n", emp[i].id, emp[i].name, emp[i].salary);
    }

    return 0;
}
