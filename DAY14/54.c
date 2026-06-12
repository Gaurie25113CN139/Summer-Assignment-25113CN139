// Write a program to Frequency of an element.

#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3,4, 4, 5, 3, 3,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int a;
    int freq = 0;

    printf("enter element to find frequency: ");
    scanf("%d", &a);

    for (int i = 0; i < n; i++) {
        if (arr[i] == a) {
            freq++;
        }
    }

    printf("frequency: %d\n", freq);
    return 0;
}