// Write a program to Find common characters in strings.

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    printf("enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    
    printf("enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    char com[100];
    int k = 0;

    for (int i = 0; i < len1; i++) {
        for (int j = 0; j < len2; j++) {
            if (str1[i] == str2[j]) {
                com[k++] = str1[i];
                break;
            }
        }
    }

    com[k] = '\0';
    printf("common characters: %s\n", com);
    return 0;
}