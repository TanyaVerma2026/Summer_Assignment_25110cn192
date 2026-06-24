//Write a program to Compress a string. 

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, count;
    printf("enter string: ");
    scanf("%s", str);
    int len =strlen(str);
    for (i =0; i < len; i++) {
        count= 1;                    //pretend each char precnt single tym
                                                        //len-1 )-avoid accessing memory outside 
        while (i <len- 1&& str[i]== str[i + 1]) {     //str[i]== str[i + 1] )-present char =next charcter or not
            count++;                            
            i++;}
        printf("%c%d", str[i], count);
    }   
    printf("\n ");
    return 0;
}