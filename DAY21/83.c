// Write a program to Count vowels and consonants. 

#include <stdio.h>

int main() {
    char str[100];
    int vow = 0, cons = 0;
    int i;

    printf("enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {

        if ((str[i] >= 'A' && str[i] <= 'Z') ||
            (str[i] >= 'a' && str[i] <= 'z')) {

            switch (str[i]) {
                case 'A': 
                case 'E': 
                case 'I': 
                case 'O': 
                case 'U':
                case 'a': 
                case 'e': 
                case 'i': 
                case 'o': 
                case 'u':
                    vow++;
                    break;

                default:
                    cons++;
                    break;
            }
        }
    }

    printf("vowels: %d\n", vow);
    printf("consonants: %d\n", cons);

    return 0;
} 