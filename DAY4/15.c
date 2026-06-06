#include <stdio.h>
int main() {
    int num, ogNum, rem, result=0;
    printf("enter a three-digit no.: ");
    scanf("%d", &num);
    ogNum = num;

    while (ogNum != 0) {
        rem = ogNum % 10;  
        result+=rem*rem*rem;
        ogNum = ogNum/10;
    }

    if (result == num) {
        printf("it is an armstrong number"); 
    }
    else {
        printf("it is not an armstrong number");
    }

    return 0;
}
