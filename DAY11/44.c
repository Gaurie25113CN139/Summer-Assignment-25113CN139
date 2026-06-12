// write a program to Write function to find factorial.

#include<stdio.h>
int fact(int n){
    if(n < 0){
        return -1; 
    }
    if(n == 0 || n == 1){
        return 1; 
    }
    int result = 1;
    for(int i = 2; i <= n; i++){
        result *= i;
    }
    return result;
}
int main(){
    int n;
    printf("enter a no.: ");
    scanf("%d", &n);

    int result = fact(n);
    if(result == -1){
        printf("factorial not defined for negative numbers.\n");
    } else {
        printf("factorial is: %d\n", result);
    }
    return 0;
}