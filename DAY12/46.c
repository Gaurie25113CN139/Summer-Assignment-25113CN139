// Write a program to Write function for Armstrong. 

#include <stdio.h>
int armstrong(int n)
{
    int sum = 0, rem, temp = n;

    while (n > 0) {
        rem = n % 10;
        sum = sum + rem * rem * rem;
        n = n / 10;
    }
    return temp == sum;
}   
int main()
{
    int n;

    printf("enter a no.: ");
    scanf("%d", &n);

    if (armstrong(n))
        printf("armstrong no.");
    else
        printf("not an armstrong no.");

    return 0;
}