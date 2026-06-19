//Write a program to Find diagonal sum. 

#include <stdio.h>

int main() {
    int A[3][3], i, j, r, c, sum = 0;
    
    printf("enter rows and columns: ");
    scanf("%d %d", &r, &c);
    
    printf("enter elements of the matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            if (i == j) {
                sum += A[i][j];
            }
        }
    }
    
    printf("diagonal sum: %d\n", sum);
    
    return 0;
}