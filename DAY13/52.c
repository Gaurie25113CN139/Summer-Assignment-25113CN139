// Write a program to Count even and odd elements. 

#include <stdio.h>

int main() {
    int arr[10], i, n, even = 0, odd = 0;

    printf("enter size of array: ");
    scanf("%d", &n);

    printf("enter elements of array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }

    printf("even elements: %d\n", even);
    printf("odd elements: %d\n", odd);

    return 0;
}