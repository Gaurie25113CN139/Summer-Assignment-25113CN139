// Write a program to Find largest and smallest element.

#include <stdio.h>
int main() {
    int arr[10], i, n, large, small;

    printf("enter size of array: ");
    scanf("%d", &n);

    printf("enter elements of array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    large = small = arr[0];

    for (i = 1; i < n; i++) {
        if (arr[i] > large) {
            large = arr[i];
        }
        if (arr[i] < small) {
            small = arr[i];
        }
    }

    printf("largest element: %d\n", large);
    printf("smallest element: %d\n", small);

    return 0;
}