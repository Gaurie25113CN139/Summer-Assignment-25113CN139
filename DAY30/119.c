// Write a program to Create mini employee management system. 

#include <stdio.h>

struct Employee {
    int id;
    char name[30];
    float salary;
};

int main() {
    struct Employee e[10];
    int n, i;

    printf("enter no. of employees: ");
    scanf("%d",&n);

    for(i=0;i<n;i++) {
        printf("\nemployee %d\n", i+1);

        printf("ID: ");
        scanf("%d",&e[i].id);

        printf("name: ");
        scanf("%s",e[i].name);

        printf("salary: ");
        scanf("%f",&e[i].salary);
    }

    printf("\nemployee details\n");
    for(i=0;i<n;i++) {
        printf("%d %s %.2f\n", e[i].id, e[i].name, e[i].salary);
    }

    return 0;
}