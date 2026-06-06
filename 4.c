#include<stdio.h>
int main() {
    int n, count=0;
    printf("enter a no.:");
    scanf("%d", &n);
    if (n==0) {
        printf("count=1");
    }
    else {
        while (n!=0) {
        n=n/10;
        ++count;
        }
        printf("count=%d", count);
    }
}