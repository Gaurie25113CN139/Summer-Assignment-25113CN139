// Write a program to Find maximum occurring character. 

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int freq[256] = {0};
    int i, len, max_freq = 0;
    char max_char;

    printf("enter string: ");
    fgets(str, sizeof(str), stdin);

    len = strlen(str) - 1;

    for (i = 0; i < len; i++) {
        freq[str[i]]++;
    }

    for (i = 0; i < 256; i++) {
        if (freq[i] > max_freq) {
            max_freq = freq[i];
            max_char = i;
        }
    }

    printf("maximum occurring character: %c\n", max_char);
    return 0;
}