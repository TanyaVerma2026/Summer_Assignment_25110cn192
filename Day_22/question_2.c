//Wap to Count words in a sentence. 

#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int i, count = 0;
   printf("enter sentence: ");
    fgets(str, sizeof(str),stdin);

    for (i = 0; str[i] != '\0'; i++) {   //i++ =new line
        if (str[i] == ' ')               // if charcter is space the count ++ like 0 to 1
            count++;
    }

    printf("N0. of words = %d\n",count+1);
    return 0;
}
