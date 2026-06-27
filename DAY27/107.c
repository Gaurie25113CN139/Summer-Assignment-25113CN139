// Write a program to Create Salary Management System.

#include <stdio.h>

int main() {
    int empId[100];
    char name[100][50];
    int salary[100];

    int count = 0;
    int choice, i;

    while (1) {
        printf("\nSALARY MANAGEMENT SYSTEM\n");
        printf("1. Add employee\n");
        printf("2. Display all employees\n");
        printf("3. Display salary brackets\n");
        printf("4. Exit\n");

        printf("enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {

            printf("enter employee id: ");
            scanf("%d", &empId[count]);

            printf("enter employee name: ");
            scanf("%s", name[count]);

            printf("enter salary: ");
            scanf("%d", &salary[count]);

            count++;

            printf("employee added successfully!\n");
        }

        else if (choice == 2) {

            if (count == 0) {
                printf("no employee records found.\n");
            }
            else {
                printf("\nemployee records\n");

                for (i = 0; i < count; i++) {
                    printf("\nemployee %d\n", i + 1);
                    printf("employee id: %d\n", empId[i]);
                    printf("name: %s\n", name[i]);
                    printf("salary: %d\n", salary[i]);
                }
            }
        }

        else if (choice == 3) {

            if (count == 0) {
                printf("no employee records found.\n");
            }
            else {

                printf("\nemployees with salary below 30000\n");
                for (i = 0; i < count; i++) {
                    if (salary[i] < 30000) {
                        printf("%d  %s  %d\n", empId[i], name[i], salary[i]);
                    }
                }

                printf("\nemployees with salary between 30000 and 50000\n");
                for (i = 0; i < count; i++) {
                    if (salary[i] >= 30000 && salary[i] <= 50000) {
                        printf("%d  %s  %d\n", empId[i], name[i], salary[i]);
                    }
                }

                printf("\nemployees with salary above 50000\n");
                for (i = 0; i < count; i++) {
                    if (salary[i] > 50000) {
                        printf("%d  %s  %d\n", empId[i], name[i], salary[i]);
                    }
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