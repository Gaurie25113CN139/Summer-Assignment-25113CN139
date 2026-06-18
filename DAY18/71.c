// Write a program to Binary search. 

#include <stdio.h>
int binarySearch(int arr[], int n, int t) {
    int left = 0;
    int right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == t) {
            return mid; 
        } else if (arr[mid] < t) {
            left = mid + 1;
        } else {
            right = mid - 1; 
        }
    }

    return -1; 
}
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int t; 
    
    printf("enter element: ");
    scanf("%d", &t);

    int result = binarySearch(arr, n, t);

    if (result != -1) {
        printf("element found at index %d\n", result);
    } else {
        printf("element not found\n");
    }

    return 0;
}