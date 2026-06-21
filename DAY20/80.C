// Write a program to Find column-wise sum.

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

    printf("column-wise sums:\n");
    for (int j = 0; j < c; j++) {
        int sum = 0;
        for (int i = 0; i < r; i++) {
            sum += A[i][j];
        }
        printf("column %d: %d\n", j + 1, sum);
    }

    return 0;
}
