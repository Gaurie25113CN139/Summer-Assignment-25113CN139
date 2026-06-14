// Write a program to Find maximum frequency element. 

#include <stdio.h>
int maxFrequency(int arr[], int n) {
    int maxCount = 0;
    int maxElement = arr[0];

    for (int i = 0; i < n; i++) {
        int count = 1;

        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        if (count > maxCount) {
            maxCount = count;
            maxElement = arr[i];
        }
    }
    return maxElement;
}

int main() {
    int arr[] = {1, 2, 3, 2, 4, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("maximum frequency element: %d\n", maxFrequency(arr, n));

    return 0;
}