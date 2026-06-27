// Write a program to Create quiz application.

#include <stdio.h>
int main() {
    int score = 0;
    char answer;

    printf("QUIZ APPLICATION\n");

    printf("question 1: how many continents are there?\n");
    printf("a) 5\nb) 6\nc) 7\nd) 8\n");
    printf("enter your answer (a/b/c/d): ");
    scanf(" %c", &answer);
    if (answer == 'c' || answer == 'C') {
        score++;
    }

    printf("question 2: what is 5 * 7?\n");
    printf("a) 35\nb) 42\nc) 12\nd) 60\n");
    printf("enter your answer (a/b/c/d): ");
    scanf(" %c", &answer);
    if (answer == 'a' || answer == 'A') {
        score++;
    }

    printf("question 3: which planet is the hottest?\n");
    printf("a) mercury\nb) mars\nc) jupiter\nd) venus\n");
    printf("enter your answer (a/b/c/d): ");
    scanf(" %c", &answer);
    if (answer == 'd' || answer == 'D') {
        score++;
    }

    printf("your total score is: %d out of 3\n", score);

    return 0;
}