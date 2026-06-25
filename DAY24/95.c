// Write a program to Find longest word.

#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000];
    char word[1000], longest_word[1000];

    int i, j = 0;
    int current_len = 0, max_len = 0;

    printf("enter string: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] != ' ' && str[i] != '\n')
        {
            word[j++] = str[i];
            current_len++;
        }
        else
        {
            word[j] = '\0';

            if(current_len > max_len)
            {
                max_len = current_len;
                strcpy(longest_word, word);
            }

            j = 0;
            current_len = 0;
        }
    }
    word[j] = '\0';
    if(current_len > max_len)
    {
        strcpy(longest_word, word);
    }
    printf("longest word: %s", longest_word);

    return 0;
}
    
