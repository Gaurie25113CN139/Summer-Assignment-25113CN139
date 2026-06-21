// Write a program to Find string length without strlen(). 

#include <stdio.h>

int main() {
    char str[100];
    int len = 0;

    printf("enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[len] != '\0') {
        len++;
    }

    printf("length of string: %d\n", len-1);
    return 0;
}