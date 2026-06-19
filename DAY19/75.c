// Write a program to Transpose matrix. 

#include <stdio.h>

int main() {
    int A[3][3], B[3][3], i, j, r, c;
    
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
            B[j][i] = A[i][j];
        }
    }
    
    printf("transpose of the matrix:\n");
    for (i = 0; i < c; i++) {
        for (j = 0; j < r; j++) {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}