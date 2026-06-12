// Write a program to Write function for palindrome.

#include <stdio.h>
int palindrome(int n)
{
    int rev = 0, rem, temp = n;

    while (n > 0) {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    return temp == rev;
}

int main()
{
    int n;

    printf("enter a no.: ");
    scanf("%d", &n);

    if (palindrome(n))
        printf("palindrome");
    else
        printf("not a palindrome");

    return 0;
}