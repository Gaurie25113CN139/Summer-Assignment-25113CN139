// Write a program to Subtract matrices. 

#include <stdio.h>

int main() {
    int A[3][3], B[3][3], C[3][3], i, j, r, c;
    
    printf("enter rows and columns: ");
    scanf("%d %d", &r, &c);
    
    printf("enter elements of first matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    
    printf("enter elements of second matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &B[i][j]);
        }
    }
    
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            C[i][j] = A[i][j] - B[i][j];
        }
    }
    
    printf("subtraction of matrices:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}