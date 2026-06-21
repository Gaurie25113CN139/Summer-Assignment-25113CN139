// Write a program to Find row-wise sum. 

#include <stdio.h>

int main() {
    int r, c;

    printf("enter rows and columns of matrix: ");
    scanf("%d %d", &r, &c);

    int A[r][c];

    printf("enter elements of matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("row-wise sums:\n");
    for (int i = 0; i < r; i++) {
        int sum = 0;
        for (int j = 0; j < c; j++) {
            sum += A[i][j];
        }
        printf("row %d: %d\n", i + 1, sum);
    }

    return 0;
}