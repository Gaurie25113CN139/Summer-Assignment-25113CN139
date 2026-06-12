// Write a program to Write function for Armstrong. 

#include <stdio.h>
#include <math.h>

int countDigits(int num);
int armstrong(int num);

int main() {
    int n;
    printf("enter a no: ");
    scanf("%d", &n);

    if (armstrong(n)) {
        printf("armstrong number");
    } 
    else {
        printf("not an armstrong number");
    }

    return 0;
}
int countDigits(int num) {
    int count = 0;
    while (num != 0) {
        num /= 10;
        count++;
    }
    return count;
}

int armstrong(int num) {
    int originalNum = num;
    int digits = countDigits(num);
    int sum = 0;

    while (num != 0) {
        int rem = num % 10;
        sum += (pow(rem, digits)); 
        num /= 10;
    }
    return (sum == originalNum);
}
