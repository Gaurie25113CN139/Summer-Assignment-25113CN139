// Write a program to Create Menu-Driven Calculator.

#include <stdio.h>

int main() {
    float num1, num2;
    int choice;

    while (1) {

        printf("\nmenu-driven calculator\n");
        printf("1. addition\n");
        printf("2. subtraction\n");
        printf("3. multiplication\n");
        printf("4. division\n");
        printf("5. modulus\n");
        printf("6. exit\n");

        printf("enter your choice: ");
        scanf("%d", &choice);

        if (choice == 6)
            break;

        printf("enter two numbers: ");
        scanf("%f %f", &num1, &num2);

        switch (choice) {

            case 1:
                printf("result = %.2f\n", num1 + num2);
                break;

            case 2:
                printf("result = %.2f\n", num1 - num2);
                break;

            case 3:
                printf("result = %.2f\n", num1 * num2);
                break;

            case 4:
                if (num2 == 0)
                    printf("cannot divide by zero\n");
                else
                    printf("result = %.2f\n", num1 / num2);
                break;

            case 5:
                printf("result = %d\n", (int)num1 % (int)num2);
                break;

            default:
                printf("invalid choice\n");
        }
    }

    return 0;
}