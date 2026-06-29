// Write a program to Create Menu-Driven Array Operations System.

#include <stdio.h>

int main() {
    int arr[100], n, i;
    int choice;
    int largest, smallest, sum;

    while (1) {

        printf("\nmenu-driven array operations system\n");
        printf("1. enter array\n");
        printf("2. display array\n");
        printf("3. find largest element\n");
        printf("4. find smallest element\n");
        printf("5. find sum\n");
        printf("6. exit\n");

        printf("enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("enter number of elements: ");
                scanf("%d", &n);

                printf("enter array elements:\n");
                for (i = 0; i < n; i++)
                    scanf("%d", &arr[i]);

                break;

            case 2:
                printf("array elements: ");

                for (i = 0; i < n; i++)
                    printf("%d ", arr[i]);

                printf("\n");
                break;

            case 3:
                largest = arr[0];

                for (i = 1; i < n; i++)
                    if (arr[i] > largest)
                        largest = arr[i];

                printf("largest element = %d\n", largest);
                break;

            case 4:
                smallest = arr[0];

                for (i = 1; i < n; i++)
                    if (arr[i] < smallest)
                        smallest = arr[i];

                printf("smallest element = %d\n", smallest);
                break;

            case 5:
                sum = 0;

                for (i = 0; i < n; i++)
                    sum += arr[i];

                printf("sum = %d\n", sum);
                break;

            case 6:
                return 0;

            default:
                printf("invalid choice\n");
        }
    }

    return 0;
}