// Write a program to Find duplicates in array.

#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("duplicates in array: ");
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                printf("%d ", arr[i]);
                break;
            }
        }
    }
    printf("\n");
    return 0;
}