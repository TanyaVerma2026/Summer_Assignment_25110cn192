//Write a program to Check string rotation. 

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], temp[200];

    printf("enter 1st string: ");
    scanf("%s", str1);

    printf("enter 2nd string: ");
    scanf("%s", str2);
    if (strlen(str1) != strlen(str2)) {
        printf("Stringare not rotation of each other.\n");
        return 0;}
    strcpy(temp, str1);         //copy str1 value to temp
    strcat(temp, str1);          //concatenate) temp=temp+str1

    if (strstr(temp, str2) != NULL)        //strstr) searches for str2 present in temp or not
        printf("Strings are rotations of each other\n");  
    else
        printf("Strings are not rotations of each other ");

    return 0;
}