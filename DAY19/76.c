//Write a program to Find diagonal sum. 

#include <stdio.h>

int main() {
    int A[3][3], i, j, r, c, prim = 0, sec = 0;
    
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
                prim+= A[i][j];
            }
            if (i + j == r - 1) {
                sec += A[i][j]; }
        }
    }
    
    printf("primary diagonal sum: %d\n", prim);
    printf("secondary diagonal sum: %d\n", sec);
    
    return 0;
}
