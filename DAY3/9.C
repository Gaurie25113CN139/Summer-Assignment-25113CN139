#include <stdio.h>

int main() {
    int n, i, isprime = 1;

    printf("enter a no.: ");
    scanf("%d", &n);

    if (n<=1) {
        printf("no. is not prime");
        return 0;
    }

    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            isprime = 0;
            break;
        }
    }

    if (isprime == 1) {
        printf("no. is prime");}
    else {
        printf("no. is not prime");}

    return 0;
}
