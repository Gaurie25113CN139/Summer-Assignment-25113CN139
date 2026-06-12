// Write a program to Write function to find sum of two numbers. 

#include<stdio.h>
int sum(int a, int b){
    return a + b;
}   
int main(){
    int n1, n2;
    printf("enter two numbers: ");
    scanf("%d %d", &n1, &n2);

    int result = sum(n1, n2);

    printf("the sum is: %d\n", result);
    return 0;
}