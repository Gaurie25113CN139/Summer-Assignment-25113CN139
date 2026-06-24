// Write a program to Remove duplicate characters.

#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000], result[1000];
    int i, j = 0;

    printf("enter string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; i < strlen(str); i++)
    {
        int is_duplicate = 0;
        for (int k = 0; k < j; k++)
        {
            if (str[i] == result[k])
            {
                is_duplicate = 1;
                break;
            }
        }
        if (!is_duplicate)
        {
            result[j++] = str[i];
        }
    }

    result[j] = '\0';

    printf("string without duplicates: %s", result);

    return 0;
}