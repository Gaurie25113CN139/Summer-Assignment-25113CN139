//Write a program to Find missing number in array. 

#include <stdio.h>
int missingNumber(int arr[], int n) {
    int total = n * (n + 1) / 2;
    int sum = 0;
    
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return total - sum;
}

int main() {
    int arr[] = {0, 1, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("missing number: %d\n", missingNumber(arr, n));
    return 0;
}