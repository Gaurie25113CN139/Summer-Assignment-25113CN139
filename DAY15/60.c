// Write a program to Move zeroes to end. 

#include <stdio.h>
int main() {
    int arr[] = {0, 1, 0, 3, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int nonZeroIndex = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[nonZeroIndex] = arr[i];
            nonZeroIndex++;
        }
    }

    while (nonZeroIndex < n) {
        arr[nonZeroIndex] = 0;
        nonZeroIndex++;
    }

    printf("updated array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
