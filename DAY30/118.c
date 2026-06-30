// Write a program to Create mini library system. 

#include <stdio.h>

struct Book {
    int id;
    char name[30];
};

int main() {
    struct Book b[10];
    int n, i, id, found=0;

    printf("enter no. of books: ");
    scanf("%d",&n);

    for(i=0;i<n;i++) {
        printf("\nbook %d\n", i+1);

        printf("book ID: ");
        scanf("%d",&b[i].id);

        printf("book name: ");
        scanf("%s",b[i].name);
    }

    printf("\nenter book ID to search: ");
    scanf("%d",&id);

    for(i=0;i<n;i++) {
        if(b[i].id==id) {
            printf("book found: %s\n", b[i].name);
            found=1;
            break;
        }
    }

    if(!found)
        printf("book not found\n");

    return 0;
} 