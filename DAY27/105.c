// Write a program to Create student record management system.

#include <stdio.h>

int main() {
    int roll[100];
    char name[100][50];
    char course[100][50];

    int count = 0;
    int choice, searchRoll, i, found;

    while (1) {
        printf("\nSTUDENT RECORD MANAGEMENT SYSTEM\n");
        printf("1. Add student record\n");
        printf("2. Display all student records\n");
        printf("3. Search student record\n");
        printf("4. Exit\n");

        printf("enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {

            printf("enter roll number: ");
            scanf("%d", &roll[count]);

            printf("enter name: ");
            scanf("%s", name[count]);

            printf("enter course: ");
            scanf("%s", course[count]);

            count++;

            printf("student record added successfully!\n");
        }

        else if (choice == 2) {

            if (count == 0) {
                printf("no student records found.\n");
            }
            else {
                printf("\nstudent records\n");

                for (i = 0; i < count; i++) {
                    printf("\nstudent %d\n", i + 1);
                    printf("roll number: %d\n", roll[i]);
                    printf("name: %s\n", name[i]);
                    printf("course: %s\n", course[i]);
                }
            }
        }

        else if (choice == 3) {

            if (count == 0) {
                printf("no student records found.\n");
            }
            else {
                printf("enter roll number to search: ");
                scanf("%d", &searchRoll);

                found = 0;

                for (i = 0; i < count; i++) {
                    if (roll[i] == searchRoll) {

                        printf("\nstudent found\n");
                        printf("roll number: %d\n", roll[i]);
                        printf("name: %s\n", name[i]);
                        printf("course: %s\n", course[i]);

                        found = 1;
                        break;
                    }
                }

                if (found == 0) {
                    printf("student not found\n");
                }
            }
        }

        else if (choice == 4) {
            printf("exiting program\n");
            break;
        }

        else {
            printf("invalid choice\n");
        }
    }

    return 0;
}