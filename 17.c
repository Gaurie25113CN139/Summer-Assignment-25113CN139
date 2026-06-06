#include <stdio.h>
int main() {
    int n, sum = 0;
    
    printf("enter a number: ");
    scanf("%d", &n);
  
    for (int i=1;i <= n/2;i++) {
        if (n%i == 0) {
            sum+=i;
        }
    }
    if (sum==n && n>0) {
        printf("it is a perfect number");
    } 
    else {
        printf("it is not a perfect number");
    }
    return 0;
}