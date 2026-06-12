// Write a program to Linear search. 

#include <stdio.h>

int linearSearch(int arr[], int n, int a) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == a) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int a;

    printf("enter element to search: ");
    scanf("%d", &a);

    int result = linearSearch(arr, n, a);

    if (result != -1) {
        printf("element found at index %d\n", result);
    } else {
        printf("element not found\n");
    }
    return 0;
}