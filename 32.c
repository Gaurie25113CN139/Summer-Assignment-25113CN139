// Write a program to Print repeated-number pattern.
//1
//22
//333
//4444
//55555
#include <stdio.h>
int main() {
    int r, i, j;
    
    printf("enter number of rows: ");
    scanf("%d", &r);
    
    for(i = 1; i <= r; i++) {
       
        for(j = 1; j <= i; j++) {
            printf("%d ", i);
        }
        
        printf("\n");
    }
    
    return 0;
}
