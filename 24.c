#include <stdio.h>
int main() {
    int x, n , result=1;
    printf("enter base no.: ");
    scanf("%d", &x);
    printf("enter power: ");
    scanf("%d", &n);
    printf("%d to the power %d = ", x, n);
    while (n!=0) {
        result = x*result;
        --n;
    }
    printf("%d",result);
    return 0;
}