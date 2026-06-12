// Write a program to Second largest element. 

#include <stdio.h>
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int largest = arr[0];
    int secLarge = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            secLarge = largest;
            largest = arr[i];
        } else if (arr[i] > secLarge && arr[i] != largest) {
            secLarge = arr[i];
        }
    }

    printf("second largest element: %d\n", secLarge);
    return 0;
}