// Write a program to Create library management system. 

#include <stdio.h>

int main() {
    int bookId[100];
    char title[100][50];
    char author[100][50];

    int count = 0;
    int choice, searchId, i, found;

    while (1) {
        printf("\nLIBRARY MANAGEMENT SYSTEM\n");
        printf("1. add book\n");
        printf("2. display all books\n");
        printf("3. search book\n");
        printf("4. exit\n");

        printf("enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {

            printf("enter book id: ");
            scanf("%d", &bookId[count]);

            printf("enter book title: ");
            scanf("%s", title[count]);

            printf("enter author name: ");
            scanf("%s", author[count]);

            count++;

            printf("book added successfully!\n");
        }

        else if (choice == 2) {

            if (count == 0) {
                printf("no books found.\n");
            }
            else {
                printf("\nbook records\n");

                for (i = 0; i < count; i++) {
                    printf("\nbook %d\n", i + 1);
                    printf("book id: %d\n", bookId[i]);
                    printf("title: %s\n", title[i]);
                    printf("author: %s\n", author[i]);
                }
            }
        }

        else if (choice == 3) {

            if (count == 0) {
                printf("no books found.\n");
            }
            else {
                printf("enter book id to search: ");
                scanf("%d", &searchId);

                found = 0;

                for (i = 0; i < count; i++) {
                    if (bookId[i] == searchId) {

                        printf("\nbook found\n");
                        printf("book id: %d\n", bookId[i]);
                        printf("title: %s\n", title[i]);
                        printf("author: %s\n", author[i]);

                        found = 1;
                        break;
                    }
                }

                if (found == 0) {
                    printf("book not found.\n");
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