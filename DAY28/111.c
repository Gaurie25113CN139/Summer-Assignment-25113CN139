// Write a program to Create Ticket Booking System.

#include <stdio.h>

int main() {
    int ticketNo = 101, choice, booked = 0;
    char name[50], destination[50];

    while (1) {

        printf("\nticket booking system\n");
        printf("1. book ticket\n");
        printf("2. cancel ticket\n");
        printf("3. view ticket\n");
        printf("4. exit\n");

        printf("enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                if (booked == 1) {
                    printf("ticket already booked\n");
                }
                else {
                    printf("enter passenger name: ");
                    scanf("%s", name);

                    printf("enter destination: ");
                    scanf("%s", destination);

                    booked = 1;

                    printf("ticket booked successfully!\n");
                    printf("ticket number: %d\n", ticketNo);
                }
                break;

            case 2:
                if (booked == 0)
                    printf("no ticket booked\n");
                else {
                    booked = 0;
                    printf("ticket cancelled successfully\n");
                }
                break;

            case 3:
                if (booked == 0)
                    printf("no ticket booked\n");
                else {
                    printf("\nticket details\n");
                    printf("ticket number: %d\n", ticketNo);
                    printf("passenger name: %s\n", name);
                    printf("destination: %s\n", destination);
                }
                break;

            case 4:
                return 0;

            default:
                printf("invalid choice\n");
        }
    }

    return 0;
}