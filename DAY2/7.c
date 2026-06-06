#include <stdio.h>
int main()
{
    int n, prod = 1, rem;
    printf("enter a no.: ");
    scanf("%d", &n);
 
    while (n != 0)
    {
        rem = n % 10;
        prod = prod*rem;
        n = n / 10;
    }
    printf("product of digits is %d", prod);
    return 0;
}
