#include<stdio.h>
int fib(int num);
int main() {
    int n, fibonacci;
    printf("enter a no.: ");
    scanf("%d", &n);
    fibonacci=fib(n);
    printf("fib(%d):%d", n, fibonacci);
    return 0;
}
int fib(int n) {

    if (n==0 || n==1)
        return n;
    else
        return fib(n-1) + fib(n-2);
}
//used recurssion.
