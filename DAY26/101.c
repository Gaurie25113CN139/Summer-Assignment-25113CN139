// Write a program to create a Number Guessing Game.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int num, guess;
    char choice = 'y';

    srand(time(0));
    num = rand() % 100 + 1;   

    printf("NUMBER GUESSING GAME\n");

    while (choice == 'y' || choice == 'Y') {

        printf("guess a number between 1 and 100: ");
        scanf("%d", &guess);

        if (guess > num) {
            printf("guess is bigger than the number\n");
        }
        else if (guess < num) {
            printf("guess is smaller than the number\n");
        }
        else {
            printf("accurate guess!\n");
            break;
        }

        printf("do you want to continue? (y/n) ");
        scanf(" %c", &choice);
    }

    printf("game end\n");

    return 0;
}