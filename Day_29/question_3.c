//Create menu-driven string os.

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int choice;
    printf("enter 1st string: ");
    gets(str1);

    do{
        printf("1.find length\n");
        printf("2. copy string\n");
        printf("3.concatenate strings\n");
        printf("4.compare strings\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        switch(choice) {
            case 1:
                printf("Length = %lu\n", strlen(str1));
                break;
            case 2:
                strcpy(str2, str1);
                printf("Copied String = %s\n", str2);
                break;
            case 3:
                printf("enter 2nd string: ");
                gets(str2);
                strcat(str1, str2);
                printf("Concatenated String = %s\n", str1);
                break;
            case 4:
                printf("enter 2nd string: ");
                gets(str2);
                if(strcmp(str1, str2) == 0)
                    printf("strings are equal\n");
                else
                    printf("strings are not equal\n");
                break;
            case 5:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 5);

    return 0;
}