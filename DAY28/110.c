// Write a program to Create Bank Account System.

#include <stdio.h>

int main() {
    int accNo;
    char name[50];
    float balance, amount;
    int choice;

    printf("enter account number: ");
    scanf("%d", &accNo);

    printf("enter account holder name: ");
    scanf("%s", name);

    printf("enter initial balance: ");
    scanf("%f", &balance);

    while (1) {

        printf("\nbank account system\n");
        printf("1. deposit\n");
        printf("2. withdraw\n");
        printf("3. check balance\n");
        printf("4. exit\n");

        printf("enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("enter amount: ");
                scanf("%f", &amount);
                balance += amount;
                printf("balance: %.2f\n", balance);
                break;

            case 2:
                printf("enter amount: ");
                scanf("%f", &amount);

                if (amount > balance)
                    printf("insufficient balance\n");
                else {
                    balance -= amount;
                    printf("balance: %.2f\n", balance);
                }
                break;

            case 3:
                printf("\naccount number: %d\n", accNo);
                printf("account holder: %s\n", name);
                printf("balance: %.2f\n", balance);
                break;

            case 4:
                return 0;

            default:
                printf("invalid choice\n");
        }
    }
}