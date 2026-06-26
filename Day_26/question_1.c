//wap to create no. guessing game 

#include <stdio.h>

void guessGame() {
    int secret, guess;
    printf("enter the secret no.: ");
    scanf("%d", &secret);
    do {
        printf("guess the n0.: ");
        scanf("%d", &guess);

        if (guess > secret)
            printf("too high!\n");
        else if (guess < secret)
            printf("too low!\n");
        else
            printf("you guessed the correct no.\n");

    } while (guess!= secret);
}

int main() {
    guessGame();  
    return 0;
}