// Write a program to Check anagram strings.

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char str1[100], str2[100];
    int freq[256] = {0};
    int i, len1, len2;

    printf("enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    len1 = strlen(str1) - 1;
    len2 = strlen(str2) - 1;

    if (len1 != len2) {
        printf("strings are not anagrams\n");
        return 0;
    }

    for (i = 0; i < len1; i++) {
        freq[str1[i]]++;
        freq[str2[i]]--;
    }

    for (i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            printf("strings are not anagrams\n");
            return 0;
        }
    }

    printf("strings are anagrams\n");
    return 0;
}