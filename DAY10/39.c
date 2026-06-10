// Write a program to Print number pyramid.
//    1
//   121
//  12321
// 1234321
//123454321

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
            printf("%d", k);
        }
        for (k = i - 1; k >= 1; k--)
        {
            printf("%d", k);
        }
        printf("\n");
    }
    return 0;
}
