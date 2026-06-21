// Write a program to Subtract matrices. 

#include <stdio.h>

int main() {
    int r1, c1, r2, c2, i, j;

    printf("enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);

    if (r1 != r2 || c1 != c2) {
        printf("asubtraction not possible.\n");
       
        return 0;
    }

    int A[r1][c1], B[r2][c2], C[r1][c1];

    printf("enter elements of first matrix:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("enter elements of second matrix:\n");
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            C[i][j] = A[i][j] - B[i][j];
        }
    }

    printf("sum of matrices:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
