// Write a program to Create student record system using arrays and strings. 

#include <stdio.h>

struct Student {
    int roll;
    char name[30];
    float marks;
};

int main() {
    struct Student s[10];
    int n, i;

    printf("enter no. of students: ");
    scanf("%d", &n);

    for(i=0;i<n;i++) {
        printf("\nstudent %d\n", i+1);

        printf("roll: ");
        scanf("%d",&s[i].roll);

        printf("name: ");
        scanf("%s",s[i].name);

        printf("marks: ");
        scanf("%f",&s[i].marks);
    }

    printf("\nstudent records\n");
    for(i=0;i<n;i++) {
        printf("%d %s %.2f\n", s[i].roll, s[i].name, s[i].marks);
    }

    return 0;
}