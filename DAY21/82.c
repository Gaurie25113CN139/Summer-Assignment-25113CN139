// Write a program to Reverse a string. 

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int len, i;

    printf("enter a string: ");
    fgets(str, sizeof(str), stdin);

    len = strlen(str) - 1;

    printf("reversed string: ");
    for (i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
    return 0;
}