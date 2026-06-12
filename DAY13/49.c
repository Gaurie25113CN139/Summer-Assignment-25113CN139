//Write a program to Input and display array.

#include <stdio.h>

int main() {
    int arr[10], i, n;
    
    printf("enter size of array: ");
    scanf("%d", &n);
    
    printf("enter elements of array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("elements of the array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}