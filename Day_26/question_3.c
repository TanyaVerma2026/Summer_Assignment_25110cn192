// wap create atm simulation.

#include <stdio.h>

int main() {
    int choice;float balance =5000, amount;

    printf("atm .....\n");
    printf("->Check Balance\n");
    printf("-> Deposit\n");
    printf("->Withdraw \n");
    printf("enter your choice ");
    scanf("%d", &choice);

    if (choice ==1) {
        printf("current Balance = %.2f\n",balance);
    }
    else if (choice == 2) {
        printf("enter amt to deposit: ");
        scanf("%f", &amount);
        balance = balance +amount;
        printf("amt deposited successfully.\n");
        printf("current Balance = %.2f\n", balance);
    }
    else if (choice == 3) {
        printf("enter amt to withdraw: ");
        scanf("%f", &amount);

        if (amount <=balance) {
            balance= balance -amount;
            printf("withdrawal successful.\n");
            printf("current Balance = %.2f\n", balance);
        } else {
            printf("insufficient balance.\n");
        }
    }
    else {
        printf("invalid Choice\n");
    }

    return 0;
}