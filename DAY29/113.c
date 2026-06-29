// Write a program to Create Contact Management System.

#include <stdio.h>
#include <string.h>

int main() {
    char name[50], phone[20], search[50];
    int choice, added = 0;

    while (1) {

        printf("\ncontact management system\n");
        printf("1. add contact\n");
        printf("2. search contact\n");
        printf("3. display contact\n");
        printf("4. delete contact\n");
        printf("5. exit\n");

        printf("enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("enter name: ");
                scanf("%s", name);

                printf("enter phone number: ");
                scanf("%s", phone);

                added = 1;

                printf("contact added successfully!\n");
                break;

            case 2:
                if (added == 0) {
                    printf("no contact found\n");
                }
                else {
                    printf("enter name to search: ");
                    scanf("%s", search);

                    if (strcmp(name, search) == 0) {
                        printf("contact found\n");
                        printf("name: %s\n", name);
                        printf("phone: %s\n", phone);
                    }
                    else {
                        printf("contact not found\n");
                    }
                }
                break;

            case 3:
                if (added == 0)
                    printf("no contact found\n");
                else {
                    printf("\ncontact details\n");
                    printf("name: %s\n", name);
                    printf("phone: %s\n", phone);
                }
                break;

            case 4:
                if (added == 0)
                    printf("no contact found\n");
                else {
                    added = 0;
                    printf("contact deleted successfully!\n");
                }
                break;

            case 5:
                return 0;

            default:
                printf("invalid choice\n");
        }
    }

    return 0;
}