// Write a program to Compress a string. 

#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000], x;

    char compress[1000];

    int i, count = 1, index = 0;

    printf("enter string: ");
    fgets(str, sizeof(str), stdin);

    x = str[0];

    for (i = 1; i <= strlen(str); i++)
    {
        char number_string[10];
        int j;

        if (str[i] == x)
            count++;
        else
        {
            compress[index++] = x;

            if (count > 1)
            {
                sprintf(number_string, "%d", count);

                for (j = 0; j < strlen(number_string); j++)
                {
                    compress[index++] = number_string[j];
                }
            }

            x = str[i];
            count = 1;
        }
    }

    compress[index] = '\0';

    printf("compressed String: %s", compress);

    return 0;
}