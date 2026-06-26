//wap t0 create quiz application

#include <stdio.h>

int main() {
    int ans,score =0;

    printf("..quiz application...\n");

    printf("Q1. Can u tell me which one is my favourite color?\n");
    printf("1. peach 2. rusted-orange 3.thulium pink  4. burgundy\n");
    printf("enter your answer: ");
    scanf("%d", &ans);
    if (ans ==2)
        score++;
    else
        printf("Wrong Answer!\n");

    printf("\nQ2. who among all these is my favourite actor?\n");
    printf("1.srk 5 2.ab 6 3.the sk 7 4.dp\n");
    printf("enter your answer: ");
    scanf("%d", &ans);
    if (ans== 3)
        score++;
    else
        printf("Wrong Answer!\n");

    printf("\nQ3. which i love as a pet animal?\n");
    printf("1. rabbit 2. puppy 3. kitty 4. none of these\n");
    printf("Enter your answer: ");
    scanf("%d", &ans);
    if (ans == 4)
        score++;
    else
        printf("Wrong Answer!\n");

    printf("\nQ2. what i love the most in below options?\n");
    printf("1.earings  2.bangles  3.rings  4.bracelet\n");
    printf("enter your answer: ");
    scanf("%d", &ans);
    if (ans== 1)
        score++;
    else
        printf("Wrong Answer!\n");

    printf("\nQ2. what i love being a women?\n");
    printf("1.equality 2.parties  3.permissions  4.nothing\n");
    printf("enter your answer: ");
    scanf("%d", &ans);
    if (ans== 4)
        score++;
    else
        printf("Wrong Answer!\n");

    printf("\nYour Score = %d/5\n", score);

    if (score == 5)
        printf("Good Job!\n");
    else if (score == 4)
        printf("nice try!\n");
    else
        printf("Better Luck Next Time!\n");

    return 0;
}