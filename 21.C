#include <stdio.h>
int main() {
    int dec, quo, rem, bin[32], i=0; 

    printf("enter a decimal no.: ");
    scanf("%d", &dec);

    quo=dec;
    while (quo > 0) {
        rem = quo%2;
        bin[i] = rem;
        quo = quo/2;
        i++;
    }
    printf("binary no.: ");
    for (int j = i-1; j>=0; j--) {
        printf("%d", bin[j]);
    }
    printf("\n");

    return 0;
}