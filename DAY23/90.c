// Write a program to Find first repeating character.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int freq[256] = {0};
    int i, len;

    printf("enter string: ");
    fgets(str, sizeof(str), stdin);

    len = strlen(str) - 1; 

    
    for (i = 0; i < len; i++) {
        freq[str[i]]++;
    }

    
    for (i = 0; i < len; i++) {
        if (freq[str[i]] > 1) {
            printf("first repeating character: %c\n", str[i]);
            return 0;
        }
    }

    printf("no repeating character\n");
    return 0;
}