//Write a program to Print repeated character pattern.
//A
//BB
//CCC
//DDDD
//EEEEE
#include <stdio.h>
int main()
{
    int i, j, r;
    printf("enter number of rows: ");
    scanf("%d", &r);

    for (i = 1; i <= r; ++i)
    {
        for (j = 1; j <= i; ++j)
        {
            printf("%c ", 64 + i);
        }
        printf("\n");
    }
    return 0;
}
