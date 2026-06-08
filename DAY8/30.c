// Write a program to Print number triangle.
//1
//12
//123
//1234
//12345

#include <stdio.h>
int main() {
    int r, i, j;
    
    printf("enter number of rows: ");
    scanf("%d", &r);
    
    for(i = 1; i <= r; i++) {
       
        for(j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        
        printf("\n");
    }
    return 0;
}
