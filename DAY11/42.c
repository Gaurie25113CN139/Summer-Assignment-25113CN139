// Write a program to Write function to find maximum. 

#include<stdio.h>
int max(int a, int b){
    if(a > b){
        return a;
    } else {
        return b;
    }
}       
int main(){
    int n1, n2;
    printf("enter two numbers: ");
    scanf("%d %d", &n1, &n2);

    int result = max(n1, n2);

    printf("the maximum is: %d\n", result);
    return 0;
}