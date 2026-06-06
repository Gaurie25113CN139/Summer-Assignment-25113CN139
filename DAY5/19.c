#include <stdio.h>
int main() {
    int num, i;
    printf("enter a no.: ");
    scanf("%d", &num);
    
    printf("factors are: ");
    if (num== 0) {
        printf("every number");
        }
    
    for (i=1;i<=num;++i) {
        if (num%i == 0) {
            printf("%d ", i);
        }
    }
    return 0;
}
