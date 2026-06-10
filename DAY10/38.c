// Write a program to Print reverse pyramid.
//*********
// *******
//  *****
//   ***
//    *

#include <stdio.h>
int main()
{
    int i, j, k, r;
    printf("enter number of rows: ");
    scanf("%d", &r);
    for (i = r; i >= 1; i--)
    {
        for (j = 1; j <= r - i; j++)
        {
            printf(" ");
        }
        for (k = 1; k <= 2 * i - 1; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
