// Write a program to Create student record system using arrays and strings. 

#include <stdio.h>

struct student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct student s[100];
    int n, i;
    printf("enter the no. of students: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        printf("\nenter details of student %d\n", i + 1);
        printf("roll no.: ");
        scanf("%d", &s[i].roll);
        printf("name: ");
        scanf(" %[^\n]", s[i].name);
        printf("marks: ");
        scanf("%f", &s[i].marks);
    }
    printf("\n----- student Records -----\n");
    printf("Roll\tName\t\tMarks\n");
    for(i = 0; i < n; i++) {
        printf("%d\t%-15s\t%.2f\n",s[i].roll,s[i].name,s[i].marks);
    }

    return 0;
}
