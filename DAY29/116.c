// Write a program to Create Menu-Driven String Operations System.

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], copy[100];
    int choice;

    while (1) {

        printf("\nmenu-driven string operations system\n");
        printf("1. enter string\n");
        printf("2. find length\n");
        printf("3. copy string\n");
        printf("4. concatenate strings\n");
        printf("5. compare strings\n");
        printf("6. exit\n");

        printf("enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("enter first string: ");
                scanf("%s", str1);

                printf("enter second string: ");
                scanf("%s", str2);
                break;

            case 2:
                printf("length of first string = %d\n", strlen(str1));
                printf("length of second string = %d\n", strlen(str2));
                break;

            case 3:
                strcpy(copy, str1);
                printf("copied string = %s\n", copy);
                break;

            case 4:
                strcpy(copy, str1);
                strcat(copy, str2);
                printf("concatenated string = %s\n", copy);
                break;

            case 5:
                if (strcmp(str1, str2) == 0)
                    printf("strings are equal\n");
                else
                    printf("strings are not equal\n");
                break;

            case 6:
                return 0;

            default:
                printf("invalid choice\n");
        }
    }

    return 0;
}