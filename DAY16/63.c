// Write a program to Find pair with given sum. 

#include <stdio.h>
int findPairs(int arr[], int n, int sum) {
    printf("pairs with given sum: \n");
    
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == sum) {
                printf("(%d, %d)\n", arr[i], arr[j]);
            }
        }
    }
    return 0;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum;
    printf("enter the sum: ");
    scanf("%d", &sum);
   
    findPairs(arr, n, sum);
    return 0;
}
