// Write a program to Print character triangle.
//A
//AB
//ABC
//ABCD
//ABCDE

#include <stdio.h>
int main() {    
    int r, i, j;
    
    printf("enter number of rows: ");
    scanf("%d", &r);
    
    for(i = 1; i <= r; i++) {
       
        for(j = 1; j <= i; j++) {
            printf("%c ", 'A' + j - 1);
        }
        
        printf("\n");
    }
    
    return 0;
}
