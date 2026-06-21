//Write a program to Convert lowercase to uppercase. 


#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    printf("enter string: ");
    fgets(str,sizeof(str), stdin);
   while (str[i] !='\0') {
        if (str[i] >= 'a'&&str[i]<= 'z') {
            str[i] = str[i]-32;              // by using i can convert this to u-case
                        }                //a=97 A=65  
        i++;
    }
 printf("Uppercase: %s", str);

    return 0;
}