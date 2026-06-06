#include <stdio.h>
 
int main() {
    int bin, dec=0, base=1, rem;
    printf("enter a binary number:");
    scanf("%d", &bin); 

    while (bin>0)
    {
        rem = bin%10;
        dec = dec+rem*base;
        bin/=10 ;
        base*= 2;
    }
    printf("decimal number = %d \n", dec);
}