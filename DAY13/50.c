// Write a program to Find sum and average of array.

#include <stdio.h>
int main() {
    int arr[10], i, n, sum = 0;
    float average;

    printf("enter size of array: ");
    scanf("%d", &n);

    printf("enter elements of array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    average = (float)sum / n;

    printf("sum of array: %d\n", sum);
    printf("average of array: %f\n", average);

    return 0;
}