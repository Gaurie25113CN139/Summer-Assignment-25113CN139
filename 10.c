#include <stdio.h>
int main()
{
    int a, b, i, j, flag;
    printf("enter lower no.: ");
    scanf("%d", &a); 
    printf("enter higher no.: ");
    scanf("%d", &b); 

    printf("prime numbers between the 2 numbers: ");

    for (i = a;i <= b;i++) {
        if (i==1 || i==0) {
            continue; }
        flag = 1;

        for (j = 2; j <= i / 2; ++j) {
            if (i%j==0) {
                flag=0;
                break; }
        }

        if (flag==1) {
            printf("%d ", i); }
    
    }
}        


