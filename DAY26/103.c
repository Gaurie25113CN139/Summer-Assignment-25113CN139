// Write a program to Create ATM simulation.

#include <stdio.h>

int main() {
    float balance = 1000.0;
    int choice;
    float amount;

    printf("ATM SIMULATION\n");
    printf("initial balance: %f\n", balance);

    while (1) {
        printf("1. Check balance\n");
        printf("2. Deposit money\n");
        printf("3. Withdraw money\n");
        printf("4. Exit\n");

        printf("enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("your balance : %f\n", balance);
                break;
            case 2:
                printf("enter the amount to deposit: ");
                scanf("%f", &amount);
                balance += amount;
                printf("amount deposited.\n");
                break;
            case 3:
                printf("enter the amount to withdraw: ");
                scanf("%f", &amount);
                if (amount > balance) {
                    printf("insufficient balance.\n");
                } else {
                    balance -= amount;
                    printf("amount withdrawn successfully.\n");
                }
                break;
            case 4:
                printf("thank you for using this ATM.\n");
                return 0;
            default:
                printf("invalid choice\n");
        }
    }

    return 0;
}