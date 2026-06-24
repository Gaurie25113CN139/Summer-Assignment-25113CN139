// Write a program to Check string rotation. 

#include <stdio.h>
#include <string.h>

int isRotation(char *s1, char *s2) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);

    if (len1 != len2) {
        return 0;
    }

    char temp[2 * len1 + 1];
    strcpy(temp, s1);
    strcat(temp, s1);

    if (strstr(temp, s2)) {
        return 1;
    }

    return 0;
}

int main() {
    char s1[100], s2[100];

    printf("enter first string: ");
    scanf("%s", s1);

    printf("enter second string: ");
    scanf("%s", s2);

    if (isRotation(s1, s2)) {
        printf("rotations of each other\n");
    } else {
        printf("not rotations of each other\n");
    }

    return 0;
}