// Write a program to Check symmetric matrix. 

// Write a program to Check Symmetric Matrix

#include <stdio.h>

int main() {
    int r, c;

    printf("enter rows and columns of matrix: ");
    scanf("%d %d", &r, &c);

    if (r != c) {
        printf("matrix is not symmetric\n");
        return 0;
    }

    int A[r][c];

    printf("enter elements of matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    int isSymmetric = 1;

    for (int i = 0; i < r; i++) {
        for (int j = i + 1; j < c; j++) {
            if (A[i][j] != A[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
        if (!isSymmetric) {
            break;
        }
    }

    if (isSymmetric) {
        printf("matrix is symmetric\n");
    } else {
        printf("matrix is not symmetric\n");
    }

    return 0;
}