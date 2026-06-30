// Write a program to Develop complete mini project using arrays, strings and functions. 

// I am creating a mini project inspired by one of the SDG's due to its potential usefullness and personal interest.
// After researching SDG 13 : Climate Action, I have decided to make a carbon footprint tracker that calculates a person's carbon score per day.
// Some factors it relies on - Transportation, Electricity consumed and Plastic usage.

#include <stdio.h>

char names[10][30];
int transport[10], electricity[10], plastic[10];
int n = 0;

void addRecord() {
    printf("\nenter name: ");
    scanf("%s", names[n]);

    printf("transport (km travelled today): ");
    scanf("%d", &transport[n]);

    printf("electricity used (units): ");
    scanf("%d", &electricity[n]);

    printf("plastic bags used: ");
    scanf("%d", &plastic[n]);

    n++;
}

void viewRecords() {
    int i;

    if(n == 0) {
        printf("\nno records found\n");
        return;
    }

    printf("\n Daily Records \n");
    for(i = 0; i < n; i++) {
        printf("\nname: %s\n", names[i]);
        printf("transport: %d km\n", transport[i]);
        printf("electricity: %d units\n", electricity[i]);
        printf("plastic bags: %d\n", plastic[i]);
    }
}

void carbonScore() {
    int i;
    float score;

    if(n == 0) {
        printf("\nno records found\n");
        return;
    }

    printf("\n Carbon Footprint Report \n");

    for(i = 0; i < n; i++) {

        score = transport[i] * 0.17 + electricity[i] * 0.83 + plastic[i] * 1.58;

        printf("\n%s", names[i]);
        printf("\nCarbon Score = %.2f\n", score);

        if(score < 6)
            printf("status: low \n");
        else if(score < 15)
            printf("status: moderate \n");
        else
            printf("status: high \n");
    }
}

void tips() {
    printf("\n Climate Action Tips \n");
    printf(" walk or cycle for short distances.\n");
    printf(" switch off unused lights and fans.\n");
    printf(" use LED bulbs.\n");
    printf(" carry reusable bags.\n");
    printf(" plant more trees.\n");
}

int main() {

    int choice;

    do {
        printf("\n SDG 13 : Climate Action \n");
        printf("1. Add daily record\n");
        printf("2. View records\n");
        printf("3. Calculate carbon score\n");
        printf("4. Climate tips\n");
        printf("5. Exit\n");

        printf("enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                addRecord();
                break;

            case 2:
                viewRecords();
                break;

            case 3:
                carbonScore();
                break;

            case 4:
                tips();
                break;

            case 5:
                printf("thank you! Stay green \n");
                break;

            default:
                printf("invalid choice\n");
        }

    } while(choice != 5);

    return 0;
}

