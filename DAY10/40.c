// Write a program to Print character pyramid.
//    A
//   ABA
//  ABCBA
// ABCDCBA
//ABCDEDCBA

#include <stdio.h>
int main()
{
    int i, j, k, r;
    printf("enter number of rows: ");
    scanf("%d", &r);
    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= r - i; j++)
        {
            printf(" ");
        }
        for (k = 1; k <= i; k++)
        {
            printf("%c", 'A' + k - 1);
        }
        for (k = i - 1; k >= 1; k--)
        {
            printf("%c", 'A' + k - 1);
        }
        printf("\n");
    }
    return 0;
}
