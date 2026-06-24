// Write a program to Find longest word.

#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000], longest_word[1000];
    int i, j = 0, max_len = 0, current_len = 0;

    printf("enter string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; i < strlen(str); i++)
    {
        if (str[i] != ' ')
        {
            current_len++;
            longest_word[j++] = str[i];
        }
        else
        {
            longest_word[j] = '\0';
            if (current_len > max_len)
            {
                max_len = current_len;
            }
            j = 0;
            current_len = 0;
        }
    }

    longest_word[j] = '\0';
    if (current_len > max_len)
    {
        max_len = current_len;
    }

    printf("longest word: %s", longest_word);

    return 0;
}